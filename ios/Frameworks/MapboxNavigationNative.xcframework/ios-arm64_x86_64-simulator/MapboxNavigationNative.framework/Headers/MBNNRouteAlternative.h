// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAlternativeRouteInfo;
@class MBNNRouteIntersection;
@protocol MBNNRouteInterface;

/** New route with additional information about where this route first deviates from the current route. */
NS_SWIFT_NAME(RouteAlternative)
__attribute__((visibility ("default")))
@interface MBNNRouteAlternative : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint32_t)id_
                             route:(nonnull id<MBNNRouteInterface>)route
                     mainRouteFork:(nonnull MBNNRouteIntersection *)mainRouteFork
              alternativeRouteFork:(nonnull MBNNRouteIntersection *)alternativeRouteFork
                      infoFromFork:(nonnull MBNNAlternativeRouteInfo *)infoFromFork
                     infoFromStart:(nonnull MBNNAlternativeRouteInfo *)infoFromStart
                             isNew:(BOOL)isNew;

/**
 * Stable alternative's identificator. Always greater than zero.
 *  If route is changed but route's geometry fully includes to old route's geometry -- id will not change.
 */
@property (nonatomic, readonly) uint32_t id;

/**
 * Alternative route object from router as is.
 * Route from this response starts from some point on the main route (where the puck was at the time of the route request).
 */
@property (nonatomic, readonly, nonnull) id<MBNNRouteInterface> route;

/**
 * Main route's segment and leg where alternative route first deviates from the current route.
 *  Can be used to find the moment when the puck is near the fork route point.
 */
@property (nonatomic, readonly, nonnull) MBNNRouteIntersection *mainRouteFork;

/**
 * Alternative route's segment and leg where alternative route first deviates from the current route.
 * Can be used to skip the common part of the alternative route when drawing an alternate route.
 */
@property (nonatomic, readonly, nonnull) MBNNRouteIntersection *alternativeRouteFork;

/** Information about part of alternative route, that starts from fork point (deviation point). */
@property (nonatomic, readonly, nonnull) MBNNAlternativeRouteInfo *infoFromFork;

/** Route information, which is obtained by joining the begin part of the main route with an alternate route. */
@property (nonatomic, readonly, nonnull) MBNNAlternativeRouteInfo *infoFromStart;

/**
 * True if the alternative is new.
 *  That means that onRouteAlternativesChanged event was triggered at least because by the current alternative is came from router.
 *  I.e. the alternative appears first time in onRouteAlternativesChanged callback.
 */
@property (nonatomic, readonly) BOOL isNew;


@end
