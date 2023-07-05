package com.ismaeland.expomapboxnavigation

import com.mapbox.geojson.Point
import expo.modules.kotlin.modules.Module
import expo.modules.kotlin.modules.ModuleDefinition

class ExpoMapboxNavigationModule : Module() {
  // Each module class must implement the definition function. The definition consists of components
  // that describes the module's functionality and behavior.
  // See https://docs.expo.dev/modules/module-api for more details about available components.
  override fun definition() = ModuleDefinition {
    // Sets the name of the module that JavaScript code will use to refer to the module. Takes a string as an argument.
    // Can be inferred from module's class name, but it's recommended to set it explicitly for clarity.
    // The module will be accessible from `requireNativeModule('ExpoMapbox')` in JavaScript.
    Name("ExpoMapboxNavigation")

    // Defines event names that the module can send to JavaScript.
    Events("OnEvent")

    // Defines a JavaScript function that always returns a Promise and whose native code
    // is by default dispatched on the different thread than the JavaScript runtime runs on.

    AsyncFunction("onEvent") {event: Map<String, Any?>  ->
      // Send an event to JavaScript.
      sendEvent("onEvent", event)
    }

    // Enables the module to be used as a native view. Definition components that are accepted as part of
    // the view definition: Prop, Events.
    View(ExpoMapboxNavigationView::class) {
      // Defines a setter for the `name` prop.
      Prop("origin") { view: ExpoMapboxNavigationView, prop: List<Double> ->
        val point: Point = Point.fromLngLat(
          prop[0], prop[1]
        )
        view.setOrigin(point)
      }

      Prop("destination") { view: ExpoMapboxNavigationView, prop: List<Double> ->
        
        val point: Point = Point.fromLngLat(
          prop[0], prop[1]
        )
        view.setDestination(point)
      }

      Prop("drawRoute") { view: ExpoMapboxNavigationView, prop: Boolean? ->
        if (prop != null) {
          view.setDrawRoute(prop)
        }
      }
      Prop("accessToken") { view: ExpoMapboxNavigationView, prop: String ->
        view.setAccessToken(prop)
      }
      Prop("darkMode") { view: ExpoMapboxNavigationView, prop: Boolean? ->
        if (prop != null) {
          view.setDrawRoute(prop)
        }
      }
    }
  }
  
}
