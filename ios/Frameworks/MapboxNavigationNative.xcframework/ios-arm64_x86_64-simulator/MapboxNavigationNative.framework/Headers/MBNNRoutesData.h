// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRouteAlternative;
@protocol MBNNRouteInterface;

/**
 * RoutesData interface provide ability to get RouteAlternative metadata based on the primary route and list of alternative rotues.
 * Instance of this interface can be created using `RouteParser#createRoutesData` and set in `Navigator`.
 */
NS_SWIFT_NAME(RoutesData)
@protocol MBNNRoutesData
- (nonnull id<MBNNRouteInterface>)primaryRoute;
- (nonnull NSArray<MBNNRouteAlternative *> *)alternativeRoutes;
@end
