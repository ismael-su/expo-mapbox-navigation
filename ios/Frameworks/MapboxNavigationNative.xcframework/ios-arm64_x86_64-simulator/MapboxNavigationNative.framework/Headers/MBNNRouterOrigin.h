// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes which kind of router presents response */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRouterOrigin)
{
    /** Router based on Directions API. */
    MBNNRouterOriginOnline,
    /** Router based on offline library. */
    MBNNRouterOriginOnboard,
    /** Router presented by customer. */
    MBNNRouterOriginCustom
} NS_SWIFT_NAME(RouterOrigin);

NSString* MBNNRouterOriginToString(MBNNRouterOrigin router_origin);
