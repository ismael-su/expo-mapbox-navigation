// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRouterOrigin.h>
@class MBXDataRef;
@class MBXExpected<__covariant Value, __covariant Error>;

@protocol MBNNRouteInterface;
@protocol MBNNRoutesData;

NS_SWIFT_NAME(RouteParser)
__attribute__((visibility ("default")))
@interface MBNNRouteParser : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Creates an instance of `RoutesData` and calculate `RouteAlternative` metadata for each route in `alternativeRoutes` array.
 * The size of returned `alternativeRoutes` can be less then size of provided `alternativeRoutes` in case
 * if provided `alternativeRoutes` do not have a valid fork point with the `primaryRoute`.
 * For example if there is no one shared intersection, or there is no different intersections after the first shared intersection.
 */
+ (nonnull id<MBNNRoutesData>)createRoutesDataForPrimaryRoute:(nonnull id<MBNNRouteInterface>)primaryRoute
                                            alternativeRoutes:(nonnull NSArray<id<MBNNRouteInterface>> *)alternativeRoutes __attribute((ns_returns_retained));

@end
