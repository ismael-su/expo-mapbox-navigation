// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes type of router */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRouterType)
{
    /** Hybrid router that switches between the Online and the Onboard routers depending on network reachability */
    MBNNRouterTypeHybrid,
    /** Router based on Directions API. Requires network connection */
    MBNNRouterTypeOnline,
    /** Router based on offline library. Doesn't require network connection */
    MBNNRouterTypeOnboard
} NS_SWIFT_NAME(RouterType);

NSString* MBNNRouterTypeToString(MBNNRouterType router_type);
