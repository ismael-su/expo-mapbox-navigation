// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNGetRouteOrigin)
{
    /** platform SDK calls getRoute */
    MBNNGetRouteOriginPlatformSDK,
    /** nav-native code calls getRoute */
    MBNNGetRouteOriginNN,
    /** Mapbox customer calls getRoute */
    MBNNGetRouteOriginCustomer
} NS_SWIFT_NAME(GetRouteOrigin);

NSString* MBNNGetRouteOriginToString(MBNNGetRouteOrigin get_route_origin);
