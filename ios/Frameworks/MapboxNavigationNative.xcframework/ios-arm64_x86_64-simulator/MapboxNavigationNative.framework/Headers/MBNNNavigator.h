// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNADASISv2MessageCallback.h>
#import <MapboxNavigationNative/MBNNChangeLegCallback.h>
#import <MapboxNavigationNative/MBNNResetCallback.h>
#import <MapboxNavigationNative/MBNNSetRoutesReason.h>
#import <MapboxNavigationNative/MBNNUpdateExternalSensorDataCallback.h>
#import <MapboxNavigationNative/MBNNUpdateLocationCallback.h>

@class MBNNAdasisConfig;
@class MBNNCacheHandle;
@class MBNNConfigHandle;
@class MBNNElectronicHorizonOptions;
@class MBNNFixLocation;
@class MBNNHistoryRecorderHandle;
@class MBNNNavigationSessionState;
@class MBNNPredictiveCacheController;
@class MBNNPredictiveCacheControllerOptions;
@class MBNNPredictiveLocationTrackerOptions;
@class MBNNRoadObjectsStore;
@class MBNNSensorData;
@class MBNNSetRoutesDataParams;
@class MBNNSetRoutesParams;
@class MBXTileStore;
@class MBXTilesetDescriptor;
@protocol MBNNElectronicHorizonObserver;
@protocol MBNNEventsMetadataInterface;
@protocol MBNNExperimental;
@protocol MBNNFallbackVersionsObserver;
@protocol MBNNLaneGraphAccessor;
@protocol MBNNNavigatorObserver;
@protocol MBNNRerouteControllerInterface;
@protocol MBNNRerouteDetectorInterface;
@protocol MBNNRerouteObserver;
@protocol MBNNRouteAlternativesControllerInterface;
@protocol MBNNRouteInterface;
@protocol MBNNRouteRefreshObserver;
@protocol MBNNRouterInterface;
@protocol MBNNTelemetry;

NS_SWIFT_NAME(Navigator)
__attribute__((visibility ("default")))
@interface MBNNNavigator : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Obtain config object that was used for Navigator construction */
- (nonnull MBNNConfigHandle *)config __attribute((ns_returns_retained));
/** Provides navigator version */
- (nonnull NSString *)version __attribute((ns_returns_retained));
/**
 * Shuts down Navigator instance, so it frees resources.
 * This Navigator instance should not be used after shutdown call.
 */
- (void)shutdown;
/**
 * Sets the `FallbackVersionsObserver` instance for notifications about fallback (available offline) versions found.
 * In order to remove observer just call `setFallbackVersionsObserver(null)`.
 */
- (void)setFallbackVersionsObserverForObserver:(nullable id<MBNNFallbackVersionsObserver>)observer;
/**
 * After setting observer `getStatus` shouldn't be called,
 * but `Navigator` object will start calling `NavigatorObserver.onStatus` as soon as at least one raw location is received.
 */
- (void)addObserverForObserver:(nonnull id<MBNNNavigatorObserver>)observer;
/** Removes the navigator observer */
- (void)removeObserverForObserver:(nonnull id<MBNNNavigatorObserver>)observer;
/**
 * Adds the `RerouteObserver` instance for the observers collection
 * for notifications about reroute events.
 * In order to remove the observer call `removeRerouteObserver(observer)`.
 * Note: Observer must live till the removeRerouteObserver is called.
 */
- (void)addRerouteObserverForObserver:(nonnull id<MBNNRerouteObserver>)observer;
/** Removes the reroute observer */
- (void)removeRerouteObserverForObserver:(nonnull id<MBNNRerouteObserver>)observer;
/**
 * Asynchronously passes in the current fix location of the user.
 * The callback is scheduled using the `common::Scheduler` of the thread calling the `Navigator` constructor.
 *
 * @param  fix  The current fix location of user.
 * @param  callback Callback which is called when the async operation is completed
 */
- (void)updateLocationForFixLocation:(nonnull MBNNFixLocation *)fixLocation
                            callback:(nonnull MBNNUpdateLocationCallback)callback;
/**
 * Asynchronously passes in the current sensor data of the user.
 * The callback is scheduled using the `common::Scheduler` of the thread calling the `Navigator` constructor.
 *
 * @param  data  The current sensor data of user.
 * @param  callback Callback which is called when the async operation is completed
 */
- (void)updateExternalSensorDataForSensorData:(nonnull MBNNSensorData *)sensorData
                                     callback:(nonnull MBNNUpdateExternalSensorDataCallback)callback;
/**
 * Asynchronously sets leg of the already loaded directions
 * The callback is scheduled using the `common::Scheduler` of the thread calling the `Navigator` constructor.
 *
 * @param leg    new leg index
 * @param  callback Callback which is called when the async operation is completed
 */
- (void)changeLegForLeg:(uint32_t)leg
               callback:(nonnull MBNNChangeLegCallback)callback;
/** Set an observer and the configuration for the EH. */
- (void)setElectronicHorizonObserverForObserver:(nullable id<MBNNElectronicHorizonObserver>)observer;
/** Sets electronic horizon options. Pass null to reset to defaults. */
- (void)setElectronicHorizonOptionsForOptions:(nullable MBNNElectronicHorizonOptions *)options;
/** Returns road object store */
- (nonnull MBNNRoadObjectsStore *)roadObjectStore __attribute((ns_returns_retained));
/**
 * Resets internal state of Navigator, useful in case if we use Navigator for replays or simulation,
 * when timestamps can decrease and locations can have unexpected significant changes.
 * Please call it before significant change of location, e.g. when restarting
 * navigation simulation, or before resetting location to not real (simulated)
 * position without recreation of navigator.
 */
- (void)resetForCallback:(nonnull MBNNResetCallback)callback;
/**
 * Creates predictive cache controller to populate the specified tile store instance
 * with the tiles described by the specified tileset descriptors.
 *
 * @param tileStore               a tile store that should be populated with tiles
 * @param descriptors             a list of tileset descriptors
 * @param locationTrackerOptions  options to configure what tiles should be loaded for current location and route
 *
 * @return a PredictiveCacheController object
 */
- (nonnull MBNNPredictiveCacheController *)createPredictiveCacheControllerForTileStore:(nonnull MBXTileStore *)tileStore
                                                                           descriptors:(nonnull NSArray<MBXTilesetDescriptor *> *)descriptors
                                                                locationTrackerOptions:(nonnull MBNNPredictiveLocationTrackerOptions *)locationTrackerOptions __attribute((ns_returns_retained));
/**
 * @param tileStore               a tile store that should be populated with tiles
 * @param cacheOptions            cache options such as dataset and version of tiles
 * @param locationTrackerOptions  options to configure what tiles should be loaded for current location and route
 *
 * @return a PredictiveCacheController object
 */
- (nonnull MBNNPredictiveCacheController *)createPredictiveCacheControllerForTileStore:(nonnull MBXTileStore *)tileStore
                                                                          cacheOptions:(nonnull MBNNPredictiveCacheControllerOptions *)cacheOptions
                                                                locationTrackerOptions:(nonnull MBNNPredictiveLocationTrackerOptions *)locationTrackerOptions __attribute((ns_returns_retained));
/**
 * Creates predictive cache controller to populate inner tile store instance of this navigator.
 *
 * @param cacheOptions            cache options such as dataset and version of tiles
 * @param locationTrackerOptions  options to configure what tiles should be loaded for current location and route
 *
 * @return a PredictiveCacheController object
 */
- (nonnull MBNNPredictiveCacheController *)createPredictiveCacheControllerForCacheOptions:(nonnull MBNNPredictiveCacheControllerOptions *)cacheOptions
                                                                   locationTrackerOptions:(nonnull MBNNPredictiveLocationTrackerOptions *)locationTrackerOptions __attribute((ns_returns_retained));
/**
 * Creates predictive cache controller to populate inner tile store instance of this navigator
 * and take dataset and version of tiles from Navigator's config.
 *
 * @param locationTrackerOptions  options to configure what tiles should be loaded for current location and route
 *
 * @return a PredictiveCacheController object
 */
- (nonnull MBNNPredictiveCacheController *)createPredictiveCacheControllerForLocationTrackerOptions:(nonnull MBNNPredictiveLocationTrackerOptions *)locationTrackerOptions __attribute((ns_returns_retained));
/**
 * Start refreshing routes which were provided by setRoutes call.
 * If you set useInternalRouteRefresh flag in the config refreshing will start automatically
 * after first call of setRoutes.
 * Otherwise you need to start refresh manually by calling this function.
 * Once you have started routes refreshing it will automatically use routes that came from setRoutes,
 * i.e. you don't need to call startRoutesRefresh each time after setRoutes was called.
 * Call is non-blocking.
 *
 * @param defaultRefreshPeriodMs  used in case expiration time is ignored or wasn't determined from Directions API response
 * @param ignoreExpirationTime    if you want to refresh routes only each defaultRefreshPeriodInSeconds
 */
- (void)startRoutesRefreshForDefaultRefreshPeriodMs:(uint64_t)defaultRefreshPeriodMs
                               ignoreExpirationTime:(BOOL)ignoreExpirationTime;
/**
 * Stop routes refreshing. If refresh process haven't started do nothing.
 * Call is non-blocking, i.e. refresh observer still can have several updates after stop.
 */
- (void)stopRoutesRefresh;
/**
 * Adds an observer of refresh events (update, fail, cancel).
 * Adding observer doesn't affect refresh mechanism,
 * i.e. it will receive events according to refresh configuration if refresh is running
 * @param  observer  object with corresponding callbacks
 */
- (void)addRouteRefreshObserverForObserver:(nonnull id<MBNNRouteRefreshObserver>)observer;
/**
 * Remove specified observer
 * @param  observer  object that was added by addRouteRefreshObserver
 */
- (void)removeRouteRefreshObserverForObserver:(nonnull id<MBNNRouteRefreshObserver>)observer;
/**
 * Caution: Beta feature for ADAS / ADASIS SDK. Method interface may change soon.
 *
 * Sets a callback for ADASIS messages
 */
- (void)setAdasisMessageCallbackForCallback:(nonnull MBNNADASISv2MessageCallback)callback
                               adasisConfig:(nonnull MBNNAdasisConfig *)adasisConfig;
/** Resets a callback for ADASIS messages */
- (void)resetAdasisMessageCallback;
/**
 * Returns interface implementing experimental APIs
 * Caller must guarantee `Navigator` instance is alive when calling any methods of returned instance
 */
- (nonnull id<MBNNExperimental>)getExperimental __attribute((ns_returns_retained));
/** Pause navigator. We will no longer receive NavigationStatus while there is a pause. */
- (void)pause;
/** Resume navigator. Remove pause, and start receiving NavigationStatus'es */
- (void)resume;
/**
 * Navigation session encapsulates trip-related data, like id, mode, travelled distance, etc.
 * Start / Stop navigation session methods must be called for correct telemetry events and potentially billing.
 * If navigation session isn't started, no telemetry events will be generated, and navigator functionalities may not work.
 * If there is no current route set, new navigation session is considered as free drive, otherwise active guidance. So,
 * if no free drive session needed on start call `setRoute(...)` before `startNavigationSession()`. If a new route is set
 * (NewRoute reason) or Navigator#resetRoute() is called current drive session ends and a new one starts automatically.
 * Note: navigation session is not automatically started on navigator start and not ended on navigator destruction.
 * Session may outlive navigator destruction, see storeNavigationSession() method description.
 */
- (void)startNavigationSession;
/**
 * Stops NavigationSession. No sessions will be created on setting / resetting routes if session is stopped.
 * For more details see description of `startNavigationSession`
 */
- (void)stopNavigationSession;
/**
 * If the nav-native client needs to restart Navigator without changing trip session, user must call `storeNavigationSession()`
 * before destructing navigator and just after restart set the internal session state back with `restoreNavigationSession(state)`
 * Note: Empty serialized field means null trip session.
 */
- (nonnull MBNNNavigationSessionState *)storeNavigationSession __attribute((ns_returns_retained));
/** See description of `storeNavigationSession` */
- (void)restoreNavigationSessionForState:(nonnull MBNNNavigationSessionState *)state;
/**
 * Returns accessor to HD lane graph. Empty only if HD is disabled.
 * This method should be called once at start.
 * Returned `LaneGraphAccessor` could be used anytime, even when HD data is not available
 * (in that case it would return empty data for each request).
 * Note: all HD data is provided in `NavigationStatus.laneMatchingResult`
 */
- (nullable id<MBNNLaneGraphAccessor>)getLaneGraphAccessor __attribute((ns_returns_retained));

@end
