// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRouteRefreshError;

/** Listener for routes refresh events */
NS_SWIFT_NAME(RouteRefreshObserver)
@protocol MBNNRouteRefreshObserver
/**
 * Will be called if route refresh succeeded
 * @param  routeId  UUID-based id of the route being refreshed
 * @param  routeRefreshResponse  A string containing the json response from Directions Refresh API that represents refreshed route leg
 * @param  routeIndex  Index of the route in the original routes response
 * @param  legIndex  Index of the refreshed leg in the route with index routeIndex
 * @param routeGeometryIndex Index in the route geometry, indicates the first geometry to which the annotations are applied
 */
- (void)onRouteRefreshAnnotationsUpdatedForRouteId:(nonnull NSString *)routeId
                              routeRefreshResponse:(nonnull NSString *)routeRefreshResponse
                                        routeIndex:(uint32_t)routeIndex
                                          legIndex:(uint32_t)legIndex
                                routeGeometryIndex:(uint32_t)routeGeometryIndex;
/**
 * Will be called in case route refresh was cancelled
 * @param  routeId  UUID-based id of the route being refreshed
 */
- (void)onRouteRefreshCancelledForRouteId:(nonnull NSString *)routeId;
/**
 * Will be called in case route refresh was failed
 * @param  routeId  UUID-based id of the route being refreshed
 * @param  error  details of the failure
 */
- (void)onRouteRefreshFailedForRouteId:(nonnull NSString *)routeId
                                 error:(nonnull MBNNRouteRefreshError *)error;
@end
