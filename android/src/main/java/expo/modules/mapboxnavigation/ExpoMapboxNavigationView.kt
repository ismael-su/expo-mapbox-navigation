package expo.modules.mapboxnavigation

import android.content.Context
import android.content.res.Configuration
import android.content.res.Resources
import android.graphics.Color
import android.util.Log
import android.view.Gravity
import android.view.View;
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.LinearLayout
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout
import androidx.constraintlayout.widget.ConstraintSet
import com.mapbox.api.directions.v5.models.DirectionsRoute
import com.mapbox.api.directions.v5.models.RouteOptions
import com.mapbox.bindgen.Expected
import com.mapbox.common.location.Location
import com.mapbox.common.MapboxOptions
import com.mapbox.geojson.Point
import com.mapbox.maps.EdgeInsets
import com.mapbox.maps.extension.localization.localizeLabels
import com.mapbox.maps.ImageHolder
import com.mapbox.maps.MapboxMap
import com.mapbox.maps.MapView
import com.mapbox.maps.plugin.animation.camera
import com.mapbox.maps.plugin.locationcomponent.location
import com.mapbox.maps.plugin.locationcomponent.OnIndicatorPositionChangedListener
import com.mapbox.maps.plugin.LocationPuck2D
import com.mapbox.maps.Style
import com.mapbox.navigation.base.extensions.applyDefaultNavigationOptions
import com.mapbox.navigation.base.formatter.DistanceFormatterOptions
import com.mapbox.navigation.base.route.NavigationRoute
import com.mapbox.navigation.base.route.NavigationRouterCallback
import com.mapbox.navigation.base.route.RouterFailure
import com.mapbox.navigation.base.route.RouterOrigin
import com.mapbox.navigation.base.trip.model.RouteLegProgress
import com.mapbox.navigation.base.trip.model.RouteProgress
import com.mapbox.navigation.core.arrival.ArrivalObserver
import com.mapbox.navigation.core.directions.session.RoutesObserver
import com.mapbox.navigation.core.directions.session.RoutesUpdatedResult
import com.mapbox.navigation.core.formatter.MapboxDistanceFormatter
import com.mapbox.navigation.core.lifecycle.MapboxNavigationApp
import com.mapbox.navigation.core.mapmatching.MapMatchingAPICallback
import com.mapbox.navigation.core.mapmatching.MapMatchingFailure
import com.mapbox.navigation.core.mapmatching.MapMatchingOptions
import com.mapbox.navigation.core.mapmatching.MapMatchingSuccessfulResult
import com.mapbox.navigation.core.trip.session.LocationMatcherResult
import com.mapbox.navigation.core.trip.session.LocationObserver
import com.mapbox.navigation.core.trip.session.OffRouteObserver
import com.mapbox.navigation.core.trip.session.RouteProgressObserver
import com.mapbox.navigation.core.trip.session.VoiceInstructionsObserver
import com.mapbox.navigation.tripdata.maneuver.api.MapboxManeuverApi
import com.mapbox.navigation.tripdata.progress.api.MapboxTripProgressApi
import com.mapbox.navigation.tripdata.progress.model.DistanceRemainingFormatter
import com.mapbox.navigation.tripdata.progress.model.EstimatedTimeToArrivalFormatter
import com.mapbox.navigation.tripdata.progress.model.TimeRemainingFormatter
import com.mapbox.navigation.tripdata.progress.model.TripProgressUpdateFormatter
import com.mapbox.navigation.tripdata.progress.model.TripProgressUpdateValue
import com.mapbox.navigation.ui.base.util.MapboxNavigationConsumer
import com.mapbox.navigation.ui.components.maneuver.model.ManeuverPrimaryOptions
import com.mapbox.navigation.ui.components.maneuver.model.ManeuverViewOptions
import com.mapbox.navigation.ui.components.maneuver.view.MapboxManeuverView
import com.mapbox.navigation.ui.components.maps.camera.view.MapboxRecenterButton
import com.mapbox.navigation.ui.components.maps.camera.view.MapboxRouteOverviewButton
import com.mapbox.navigation.ui.components.tripprogress.view.MapboxTripProgressView
import com.mapbox.navigation.ui.components.voice.view.MapboxSoundButton
import com.mapbox.navigation.ui.maps.camera.data.FollowingFrameOptions.FocalPoint
import com.mapbox.navigation.ui.maps.camera.data.MapboxNavigationViewportDataSource
import com.mapbox.navigation.ui.maps.camera.lifecycle.NavigationBasicGesturesHandler
import com.mapbox.navigation.ui.maps.camera.NavigationCamera
import com.mapbox.navigation.ui.maps.camera.state.NavigationCameraState
import com.mapbox.navigation.ui.maps.camera.transition.NavigationCameraTransitionOptions
import com.mapbox.navigation.ui.maps.location.NavigationLocationProvider
import com.mapbox.navigation.ui.maps.route.arrow.api.MapboxRouteArrowApi
import com.mapbox.navigation.ui.maps.route.arrow.api.MapboxRouteArrowView
import com.mapbox.navigation.ui.maps.route.arrow.model.RouteArrowOptions
import com.mapbox.navigation.ui.maps.route.line.api.MapboxRouteLineApi
import com.mapbox.navigation.ui.maps.route.line.api.MapboxRouteLineView
import com.mapbox.navigation.ui.maps.route.line.model.*
import com.mapbox.navigation.ui.maps.route.RouteLayerConstants.TOP_LEVEL_ROUTE_LINE_LAYER_ID
import com.mapbox.navigation.voice.api.*
import com.mapbox.navigation.voice.model.SpeechAnnouncement
import com.mapbox.navigation.voice.model.SpeechError
import com.mapbox.navigation.voice.model.SpeechValue
import com.mapbox.navigation.voice.model.SpeechVolume
import expo.modules.kotlin.AppContext
import expo.modules.kotlin.viewevent.EventDispatcher
import expo.modules.kotlin.views.ExpoView
import expo.modules.mapboxnavigation.R
import java.util.Locale

val PIXEL_DENSITY = Resources.getSystem().displayMetrics.density

class ExpoMapboxNavigationView(context: Context, appContext: AppContext) : ExpoView(context, appContext){
    private var isMuted = false
    private var currentCoordinates: List<Point>? = null
    private var currentLocale = Locale.getDefault()
    private var currentWaypointIndices: List<Int>? = null 
    private var currentRoutesRequestId: Long? = null
    private var currentMapMatchingRequestId: Long? = null
    private var isUsingRouteMatchingApi = false
    private var currentRouteProfile: String? = null
    private var currentRouteExcludeList: List<String>? = null
    private var currentMapStyle: String? = null

    private val onRouteProgressChanged by EventDispatcher()
    private val onCancelNavigation by EventDispatcher()
    private val onWaypointArrival by EventDispatcher()
    private val onFinalDestinationArrival by EventDispatcher()
    private val onRouteChanged by EventDispatcher()
    private val onUserOffRoute by EventDispatcher()

    private val mapboxNavigation = MapboxNavigationApp.current()
    private var mapboxStyle: Style? = null
    private val navigationLocationProvider = NavigationLocationProvider()
    private var voiceInstructionsPlayer = MapboxVoiceInstructionsPlayer(context, currentLocale.toLanguageTag())

    private val parentConstraintLayout = ConstraintLayout(context).also {
        addView(it, LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.MATCH_PARENT))   
    }

    private val mapViewId = 1
    private val mapView = createMapView(mapViewId, parentConstraintLayout)
    private val mapboxMap = mapView.mapboxMap   

    private val viewportDataSource = createViewportDataSource(mapboxMap)
    private val navigationCamera = NavigationCamera(mapboxMap, mapView.camera, viewportDataSource).apply{
        mapView.camera.addCameraAnimationsLifecycleListener(
            NavigationBasicGesturesHandler(this)
        )
    }

    private val maneuverViewId = 2
    private val maneuverView = createManueverView(maneuverViewId, parentConstraintLayout)

    private val tripProgressViewId = 3
    private val tripProgressTimeRemainingTextView = createCenteredTextView()
    private val tripProgressDistanceRemainingTextView = createCenteredTextView()
    private val tripProgressArrivalTimeTextView = createCenteredTextView()
    private val tripProgressView = createTripProgressView(
        id=tripProgressViewId,
        parent=parentConstraintLayout,
        tripProgressTimeRemainingTextView=tripProgressTimeRemainingTextView,
        tripProgressDistanceRemainingTextView=tripProgressDistanceRemainingTextView,
        tripProgressArrivalTimeTextView=tripProgressArrivalTimeTextView
    )

    private val soundButtonId = 4
    private val soundButton = createSoundButton(soundButtonId, parentConstraintLayout){
        voiceInstructionsPlayer.volume(SpeechVolume(if(isMuted) 1.0f else 0.0f))
        it.findViewById<ImageView>(com.mapbox.navigation.ui.components.R.id.buttonIcon).setImageResource(if(isMuted) R.drawable.icon_sound else R.drawable.icon_mute)
        isMuted = !isMuted
    }

    private val overviewButtonId = 5
    private val overviewButton = createOverviewButton(overviewButtonId, parentConstraintLayout){
        navigationCamera.requestNavigationCameraToOverview()
    } 
    
    private val recenterButtonId = 6
    private val recenterButton = createRecenterButton(recenterButtonId, parentConstraintLayout){
        navigationCamera.requestNavigationCameraToFollowing()
    }

    private val cancelButtonId = 7
    private val cancelButton = createCancelButton(cancelButtonId, parentConstraintLayout){
        onCancelNavigation(mapOf())
    }

    private val parentConstraintSet = createAndApplyConstraintSet(
        mapViewId=mapViewId,
        maneuverViewId=maneuverViewId,
        tripProgressViewId=tripProgressViewId,
        soundButtonId=soundButtonId,
        overviewButtonId=overviewButtonId,
        recenterButtonId=recenterButtonId,
        cancelButtonId=cancelButtonId,
        constraintLayout=parentConstraintLayout
    )

    private val routeLineApiOptions = MapboxRouteLineApiOptions.Builder().build()
    private val routeLineApi = MapboxRouteLineApi(routeLineApiOptions)

    private val routeLineViewOptions = MapboxRouteLineViewOptions.Builder(context)
        .routeLineBelowLayerId("road-label")
        .build()
    private val routeLineView = MapboxRouteLineView(routeLineViewOptions)

    private val routeArrow = MapboxRouteArrowApi()
    private val routeArrowOptions = RouteArrowOptions.Builder(context)
        .withAboveLayerId(TOP_LEVEL_ROUTE_LINE_LAYER_ID)
        .build()
    private val routeArrowView = MapboxRouteArrowView(routeArrowOptions)

    private val distanceFormatter = DistanceFormatterOptions.Builder(context).build()
    private var maneuverApi = MapboxManeuverApi(MapboxDistanceFormatter(distanceFormatter))

    private var tripProgressFormatter = TripProgressUpdateFormatter.Builder(context)
			.distanceRemainingFormatter(DistanceRemainingFormatter(distanceFormatter))
	      	.timeRemainingFormatter(TimeRemainingFormatter(context))
			.estimatedTimeToArrivalFormatter(EstimatedTimeToArrivalFormatter(context))
			.build()
    private var tripProgressApi = MapboxTripProgressApi(tripProgressFormatter)

    private var speechApi = MapboxSpeechApi(context, currentLocale.toLanguageTag())
    private val voiceInstructionsPlayerCallback = MapboxNavigationConsumer<SpeechAnnouncement> { value ->
        speechApi.clean(value)
    }

    private val speechCallback = MapboxNavigationConsumer<Expected<SpeechError, SpeechValue>> { expected ->
        expected.fold(
            { error ->
                voiceInstructionsPlayer.play(
                    error.fallback,
                    voiceInstructionsPlayerCallback
                )
            },
            { value ->
                voiceInstructionsPlayer.play(
                    value.announcement,
                    voiceInstructionsPlayerCallback
                )
            }
        )
    }
    private val voiceInstructionsObserver = VoiceInstructionsObserver { voiceInstructions ->
        speechApi.generate(
            voiceInstructions,
            speechCallback
        )
    }


    private val routesRequestCallback = object : NavigationRouterCallback {
        override fun onRoutesReady(routes: List<NavigationRoute>, @RouterOrigin routerOrigin: String) {
            onRoutesReady(routes)
        }
        override fun onCanceled(routeOptions: RouteOptions, @RouterOrigin routerOrigin: String) {}
        override fun onFailure(reasons: List<RouterFailure>, routeOptions: RouteOptions) {}
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    private val mapMatchingRequestCallback = object : MapMatchingAPICallback {
        override fun success(result: MapMatchingSuccessfulResult) {
            onRoutesReady(result.navigationRoutes)
        }
        override fun onCancel() {}
        override fun failure(failure: MapMatchingFailure) {}
    }

    private val routesObserver = object : RoutesObserver {
        override fun onRoutesChanged(result: RoutesUpdatedResult) {
            // Handle viewport data source
            if (result.navigationRoutes.isNotEmpty()) {
                viewportDataSource.onRouteChanged(result.navigationRoutes.first())
                viewportDataSource.evaluate()
            } else {
                viewportDataSource.clearRouteData()
                viewportDataSource.evaluate()
            }

            // Handle route lines
            val alternativesMetadata = mapboxNavigation?.getAlternativeMetadataFor(result.navigationRoutes)
            if(alternativesMetadata != null){
                routeLineApi.setNavigationRoutes(result.navigationRoutes, alternativesMetadata) { value ->
                    mapboxStyle?.let { routeLineView.renderRouteDrawData(it, value) }
                }
            }

            // Clear speech
            speechApi.cancel()
            voiceInstructionsPlayer.clear()

            // Add observer to navigation camera
            navigationCamera.registerNavigationCameraStateChangeObserver { navigationCameraState ->
                // shows/hide the recenter button depending on the camera state
                when (navigationCameraState) {
                    NavigationCameraState.TRANSITION_TO_FOLLOWING,
                    NavigationCameraState.FOLLOWING -> recenterButton.visibility = View.GONE
                    NavigationCameraState.TRANSITION_TO_OVERVIEW,
                    NavigationCameraState.OVERVIEW,
                    NavigationCameraState.IDLE -> recenterButton.visibility = View.VISIBLE
                }
            }

            this@ExpoMapboxNavigationView.onRouteChanged(mapOf())
        }
    }

    private val routeProgressObserver = object : RouteProgressObserver {
        override fun onRouteProgressChanged(routeProgress: RouteProgress) {
            // Handle viewport data source
            viewportDataSource.onRouteProgressChanged(routeProgress)
            viewportDataSource.evaluate()

            // Handle route lines
            routeLineApi.updateWithRouteProgress(routeProgress) { result ->
                mapboxStyle?.let { routeLineView.renderRouteLineUpdate(it, result) }
            }

            // Handle route arrows
            val updatedManeuverArrow = routeArrow.addUpcomingManeuverArrow(routeProgress)
		    mapboxStyle?.let { routeArrowView.renderManeuverUpdate(it, updatedManeuverArrow) }

            // Handle manuevers
            val maneuvers = maneuverApi.getManeuvers(routeProgress)
            maneuverView.renderManeuvers(maneuvers)

            // Handle trip progress view
            tripProgressApi.getTripProgress(routeProgress).let { update: TripProgressUpdateValue ->
                val formatter = update.formatter
                tripProgressTimeRemainingTextView.text = formatter.getTimeRemaining(update.totalTimeRemaining) 
                tripProgressDistanceRemainingTextView.text = formatter.getDistanceRemaining(update.distanceRemaining)
                tripProgressArrivalTimeTextView.text = formatter.getEstimatedTimeToArrival(update.estimatedTimeToArrival)
            }

            // Send progress event
            this@ExpoMapboxNavigationView.onRouteProgressChanged(mapOf(
                "distanceRemaining" to routeProgress.distanceRemaining,
                "distanceTraveled" to routeProgress.distanceTraveled,
                "durationRemaining" to routeProgress.durationRemaining,
                "fractionTraveled" to routeProgress.fractionTraveled
            ))
        }
    }

    private val locationObserver = object : LocationObserver {
        override fun onNewLocationMatcherResult(locationMatcherResult: LocationMatcherResult) {
            val enhancedLocation = locationMatcherResult.enhancedLocation

            // Update puck location
             navigationLocationProvider.changePosition(
                location = enhancedLocation,
                keyPoints = locationMatcherResult.keyPoints,
            )

            // Update viewport data source
            viewportDataSource.onLocationChanged(enhancedLocation)
            viewportDataSource.evaluate()
        }
        override fun onNewRawLocation(rawLocation: com.mapbox.common.location.Location) {}
    }

    private val arrivalObserver = object : ArrivalObserver {
        override fun onWaypointArrival(routeProgress: RouteProgress) {
            onWaypointArrival(mapOf(
                "distanceRemaining" to routeProgress.distanceRemaining,
                "distanceTraveled" to routeProgress.distanceTraveled,
                "durationRemaining" to routeProgress.durationRemaining,
                "fractionTraveled" to routeProgress.fractionTraveled
            ))
        }
        override fun onNextRouteLegStart(routeLegProgress: RouteLegProgress) {}
        override fun onFinalDestinationArrival(routeProgress: RouteProgress) {
            onFinalDestinationArrival(mapOf())
        }
    }

    private val offRouteObserver = object : OffRouteObserver {
        override fun onOffRouteStateChanged(offRoute: Boolean) {
            if(offRoute){
                onUserOffRoute(mapOf())
            }
        }
    }

    private val onIndicatorPositionChangedListener = OnIndicatorPositionChangedListener { point ->
        val result = routeLineApi.updateTraveledRouteLine(point)
        mapboxStyle?.let { routeLineView.renderRouteLineUpdate(it, result) }
    }


    private fun createMapView(id: Int, parent: ViewGroup): MapView {
        return MapView(context).apply {
            setId(id)
            parent.addView(this)

            mapboxMap.loadStyle(Style.MAPBOX_STREETS) { style: Style ->
                mapboxStyle = style
            }

            location.apply {
                locationPuck = LocationPuck2D(
                    bearingImage = ImageHolder.from(com.mapbox.navigation.ui.components.R.drawable.mapbox_navigation_puck_icon),
                )
                setLocationProvider(navigationLocationProvider)
                puckBearingEnabled = true
                enabled = true
            }    
        }
    }

    private fun createManueverView(id: Int, parent: ViewGroup): MapboxManeuverView {
        return MapboxManeuverView(context).apply {
            setId(id)
            parent.addView(this)

            val maneuverViewOptions = ManeuverViewOptions.Builder()
                .primaryManeuverOptions(
                    ManeuverPrimaryOptions.Builder()
                        .textAppearance(R.style.ManeuverTextAppearance)
                        .build()
                )
                .build()

            updateManeuverViewOptions(maneuverViewOptions)
        }
    }

    private fun createCenteredTextView(): TextView {
        return TextView(context).apply {
            setGravity(Gravity.CENTER)
        }
    }

    private fun createTripProgressView(id: Int, parent: ViewGroup, tripProgressTimeRemainingTextView: TextView, tripProgressDistanceRemainingTextView: TextView, tripProgressArrivalTimeTextView: TextView): LinearLayout {
        return LinearLayout(context).apply {
            setId(id)
            parent.addView(this)
            setOrientation(LinearLayout.VERTICAL);
            setBackgroundColor(Color.WHITE)
            setPadding((5 * PIXEL_DENSITY).toInt(), (5 * PIXEL_DENSITY).toInt(), (5 * PIXEL_DENSITY).toInt(), (5 * PIXEL_DENSITY).toInt())

            addView(tripProgressTimeRemainingTextView, LayoutParams.MATCH_PARENT, (40 * PIXEL_DENSITY).toInt())

            val bottomContainer = LinearLayout(context).apply {
                setOrientation(LinearLayout.HORIZONTAL);
                setGravity(Gravity.CENTER)
                addView(tripProgressDistanceRemainingTextView, (60 * PIXEL_DENSITY).toInt(), (20 * PIXEL_DENSITY).toInt())
                addView(tripProgressArrivalTimeTextView, (60 * PIXEL_DENSITY).toInt(), (20 * PIXEL_DENSITY).toInt())
            }
            
            addView(bottomContainer, LayoutParams.MATCH_PARENT, (20 * PIXEL_DENSITY).toInt())
        }
    }

    private fun createSoundButton(id: Int, parent: ViewGroup, onClick: (MapboxSoundButton) -> Unit): MapboxSoundButton {
        return MapboxSoundButton(context).apply {
            setId(id)
            parent.addView(this)
            findViewById<ImageView>(com.mapbox.navigation.ui.components.R.id.buttonIcon).setImageResource(R.drawable.icon_sound)
            setOnClickListener {
                onClick(this)
            }
        }
    }

    private fun createOverviewButton(id: Int, parent: ViewGroup, onClick: () -> Unit): MapboxRouteOverviewButton {
        return MapboxRouteOverviewButton(context).apply {
            setId(id)
            parent.addView(this)
            findViewById<ImageView>(com.mapbox.navigation.ui.components.R.id.buttonIcon).setImageResource(R.drawable.icon_overview)
            setOnClickListener {
                onClick()
            }
        }
    }

    private fun createRecenterButton(id: Int, parent: ViewGroup, onClick: ()->Unit): MapboxRecenterButton {
        return MapboxRecenterButton(context).apply {
            setId(id)
            findViewById<ImageView>(com.mapbox.navigation.ui.components.R.id.buttonIcon).setImageResource(R.drawable.icon_compass)
            parent.addView(this)
            setVisibility(View.GONE)
            setOnClickListener {
                onClick()
            }
        }
    }

    private fun createCancelButton(id: Int, parent: ViewGroup, onClick: (MapboxSoundButton) -> Unit): MapboxSoundButton {
        return MapboxSoundButton(context).apply {
            setId(id)
            parent.addView(this)
            findViewById<ImageView>(com.mapbox.navigation.ui.components.R.id.buttonIcon).setImageResource(R.drawable.icon_x)
            setOnClickListener {
                onClick(this)
            }
        }
    }

    private fun createAndApplyConstraintSet(
        mapViewId: Int, 
        maneuverViewId: Int, 
        tripProgressViewId: Int,  
        soundButtonId: Int,
        overviewButtonId: Int,
        recenterButtonId: Int,
        cancelButtonId: Int,
        constraintLayout: ConstraintLayout
    ): ConstraintSet {
        return ConstraintSet().apply{
            // Add MapView constraints
            connect(mapViewId, ConstraintSet.TOP, ConstraintSet.PARENT_ID, ConstraintSet.TOP)
            connect(mapViewId, ConstraintSet.BOTTOM, tripProgressViewId, ConstraintSet.TOP)
            connect(mapViewId, ConstraintSet.START, ConstraintSet.PARENT_ID, ConstraintSet.START)
            connect(mapViewId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END)

            // Add ManeuverView constraints
            connect(maneuverViewId, ConstraintSet.TOP, mapViewId, ConstraintSet.TOP, (4 * PIXEL_DENSITY).toInt())
            connect(maneuverViewId, ConstraintSet.START, ConstraintSet.PARENT_ID, ConstraintSet.START, (4 * PIXEL_DENSITY).toInt())
            connect(maneuverViewId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END, (4 * PIXEL_DENSITY).toInt())
            constrainHeight(maneuverViewId, ConstraintSet.WRAP_CONTENT)

            // Add TripProgressView constraints
            connect(tripProgressViewId, ConstraintSet.BOTTOM, ConstraintSet.PARENT_ID, ConstraintSet.BOTTOM)
            connect(tripProgressViewId, ConstraintSet.START, ConstraintSet.PARENT_ID, ConstraintSet.START)
            connect(tripProgressViewId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END)
            constrainMinHeight(tripProgressViewId, (80 * PIXEL_DENSITY).toInt())
            constrainWidth(tripProgressViewId, ConstraintSet.MATCH_CONSTRAINT)

            // Add SoundButton constraints
            connect(soundButtonId, ConstraintSet.TOP, maneuverViewId, ConstraintSet.BOTTOM, (8 * PIXEL_DENSITY).toInt())
            connect(soundButtonId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END, (16 * PIXEL_DENSITY).toInt())
            constrainWidth(soundButtonId, ConstraintSet.WRAP_CONTENT)
            constrainHeight(soundButtonId, ConstraintSet.WRAP_CONTENT)


            // Add OverviewButton constraints
            connect(overviewButtonId, ConstraintSet.TOP, soundButtonId, ConstraintSet.BOTTOM, (8 * PIXEL_DENSITY).toInt())
            connect(overviewButtonId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END, (16 * PIXEL_DENSITY).toInt())
            constrainWidth(overviewButtonId, ConstraintSet.WRAP_CONTENT)
            constrainHeight(overviewButtonId, ConstraintSet.WRAP_CONTENT)

            // Add RecenterButton constraints
            connect(recenterButtonId, ConstraintSet.TOP, overviewButtonId, ConstraintSet.BOTTOM, (8 * PIXEL_DENSITY).toInt())
            connect(recenterButtonId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END, (16 * PIXEL_DENSITY).toInt())
            constrainWidth(recenterButtonId, ConstraintSet.WRAP_CONTENT)
            constrainHeight(recenterButtonId, ConstraintSet.WRAP_CONTENT)

            // Add CancelButton constraints
            connect(cancelButtonId, ConstraintSet.BOTTOM, tripProgressViewId, ConstraintSet.BOTTOM)
            connect(cancelButtonId, ConstraintSet.TOP, tripProgressViewId, ConstraintSet.TOP)
            connect(cancelButtonId, ConstraintSet.END, ConstraintSet.PARENT_ID, ConstraintSet.END, (16 * PIXEL_DENSITY).toInt())
            constrainWidth(cancelButtonId, ConstraintSet.WRAP_CONTENT)
            constrainHeight(cancelButtonId, ConstraintSet.WRAP_CONTENT)

            applyTo(constraintLayout)
        }
    }

    private fun createViewportDataSource(mapboxMap: MapboxMap): MapboxNavigationViewportDataSource{
         val portraitOverviewPadding = EdgeInsets(140.0 * PIXEL_DENSITY, 40.0 * PIXEL_DENSITY, 120.0 * PIXEL_DENSITY, 40.0 * PIXEL_DENSITY)
         val landscapeOverviewPadding = EdgeInsets(30.0 * PIXEL_DENSITY, 380.0 * PIXEL_DENSITY, 110.0 * PIXEL_DENSITY, 20.0 * PIXEL_DENSITY)
         val portraitFollowingPadding = EdgeInsets(180.0 * PIXEL_DENSITY, 40.0 * PIXEL_DENSITY, 150.0 * PIXEL_DENSITY, 40.0 * PIXEL_DENSITY)
         val landscapeFollowingPadding = EdgeInsets(30.0 * PIXEL_DENSITY, 380.0 * PIXEL_DENSITY, 110.0 * PIXEL_DENSITY, 40.0 * PIXEL_DENSITY)

        return MapboxNavigationViewportDataSource(mapboxMap).apply {
            options.followingFrameOptions.focalPoint = FocalPoint(0.5, 0.9)
            if (context.resources.configuration.orientation == Configuration.ORIENTATION_LANDSCAPE) {
                followingPadding = landscapeFollowingPadding
                overviewPadding = landscapeOverviewPadding
            } else {
                followingPadding = portraitFollowingPadding
                overviewPadding = portraitOverviewPadding
            }
        }
    }

    override fun onAttachedToWindow() {
        super.onAttachedToWindow()
        mapboxNavigation?.registerRoutesObserver(routesObserver)
        mapboxNavigation?.registerRouteProgressObserver(routeProgressObserver)
        mapboxNavigation?.registerLocationObserver(locationObserver)
        mapboxNavigation?.registerVoiceInstructionsObserver(voiceInstructionsObserver)
        mapboxNavigation?.registerArrivalObserver(arrivalObserver)
        mapboxNavigation?.registerOffRouteObserver(offRouteObserver)
        mapView.location.addOnIndicatorPositionChangedListener(onIndicatorPositionChangedListener)
    }

    override fun onDetachedFromWindow() {
        super.onDetachedFromWindow()
        mapboxNavigation?.unregisterRoutesObserver(routesObserver)
        mapboxNavigation?.unregisterRouteProgressObserver(routeProgressObserver)
        mapboxNavigation?.unregisterLocationObserver(locationObserver)
        mapboxNavigation?.unregisterVoiceInstructionsObserver(voiceInstructionsObserver)
        mapboxNavigation?.unregisterArrivalObserver(arrivalObserver)
        mapboxNavigation?.unregisterOffRouteObserver(offRouteObserver)
        speechApi.cancel()
        voiceInstructionsPlayer.shutdown()
        mapView.location.removeOnIndicatorPositionChangedListener(onIndicatorPositionChangedListener)
        routeLineApi.cancel()
        routeLineView.cancel()
        maneuverApi.cancel()
    }

    private fun onRoutesReady(routes: List<NavigationRoute>){
        mapboxNavigation?.setNavigationRoutes(routes)
        mapboxNavigation?.startTripSession()
        navigationCamera.requestNavigationCameraToFollowing(
            stateTransitionOptions = NavigationCameraTransitionOptions.Builder()
                .maxDuration(0) // instant transition
                .build()
        )
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI 
    fun setCoordinates(coordinates: List<Point>){
        currentCoordinates = coordinates
        update();
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setLocale(localeStr: String?){
        currentLocale = if (localeStr == null || localeStr == "default") Locale.getDefault() else Locale.Builder().setLanguageTag(localeStr).build()
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setWaypointIndices(indices: List<Int>?){
        currentWaypointIndices = indices
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setIsUsingRouteMatchingApi(useRouteMatchingApi: Boolean?){
        isUsingRouteMatchingApi = useRouteMatchingApi ?: false
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setRouteProfile(profile: String?){
        currentRouteProfile = profile
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setRouteExcludeList(excludeList: List<String>?){
        currentRouteExcludeList = excludeList
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    fun setMapStyle(style: String?){
        currentMapStyle = style
        update()
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    private fun update(){
        voiceInstructionsPlayer = MapboxVoiceInstructionsPlayer(context, currentLocale.toLanguageTag())
        speechApi = MapboxSpeechApi(context, currentLocale.toLanguageTag())

        if(currentMapStyle != null){
            mapboxMap.loadStyle(currentMapStyle!!) { style: Style ->
                mapboxStyle = style
                style.localizeLabels(currentLocale)  
            }
        } else {
            mapboxMap.getStyle { style: Style ->
                style.localizeLabels(currentLocale)        
            }
        }

        val distanceFormatter = DistanceFormatterOptions.Builder(context).locale(currentLocale).build()
        maneuverApi = MapboxManeuverApi(MapboxDistanceFormatter(distanceFormatter))

        tripProgressFormatter = TripProgressUpdateFormatter.Builder(context)
			.distanceRemainingFormatter(DistanceRemainingFormatter(distanceFormatter))
	      	.timeRemainingFormatter(TimeRemainingFormatter(context, currentLocale))
			.estimatedTimeToArrivalFormatter(EstimatedTimeToArrivalFormatter(context))
			.build()
        tripProgressApi = MapboxTripProgressApi(tripProgressFormatter)

        if(currentMapMatchingRequestId != null){
            mapboxNavigation?.cancelMapMatchingRequest(currentMapMatchingRequestId!!)
        }

        if(currentRoutesRequestId != null){
            mapboxNavigation?.cancelRouteRequest(currentRoutesRequestId!!)
        }

        if(currentCoordinates != null){
            if(isUsingRouteMatchingApi){
                requestMapMatchingRoutes()
            } else {
                requestRoutes()
            }
        }
        
    }

    private fun requestRoutes(){
        var optionsBuilder = RouteOptions.builder()
                                .applyDefaultNavigationOptions()
                                .coordinatesList(currentCoordinates!!)
                                .steps(true)
                                .voiceInstructions(true)
                                .language(currentLocale.toLanguageTag())

        if(currentWaypointIndices != null){
            optionsBuilder = optionsBuilder.waypointIndicesList(currentWaypointIndices!!)
        }

        if(currentRouteProfile != null){
            optionsBuilder = optionsBuilder.profile(currentRouteProfile!!)
        }

        if(currentRouteExcludeList != null){
            optionsBuilder = optionsBuilder.excludeList(currentRouteExcludeList!!)
        }

        currentRoutesRequestId = mapboxNavigation?.requestRoutes(
                optionsBuilder.build(),
                routesRequestCallback
            )
    }

    @com.mapbox.navigation.base.ExperimentalPreviewMapboxNavigationAPI
    private fun requestMapMatchingRoutes(){
        var optionsBuilder = MapMatchingOptions.Builder()
                            .coordinates(currentCoordinates!!)
                            .bannerInstructions(true)
                            .voiceInstructions(true)
                            .language(currentLocale.toLanguageTag())

        if(currentWaypointIndices != null){
            optionsBuilder = optionsBuilder.waypoints(currentWaypointIndices!!)
        }

        if(currentRouteProfile != null){
            optionsBuilder = optionsBuilder.profile(currentRouteProfile!!)
        }


        currentMapMatchingRequestId = mapboxNavigation?.requestMapMatching(
                optionsBuilder.build(),
                mapMatchingRequestCallback
            )  
    }

}
