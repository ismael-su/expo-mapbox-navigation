// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNGetRouteReason)
{
    /** Request of a new route, to start navigation, or other request by SDK user for unknown reason */
    MBNNGetRouteReasonNewRoute,
    /** Continuous alternatives request */
    MBNNGetRouteReasonAlternative,
    /** Reroute request due to deviation from an existing route */
    MBNNGetRouteReasonRerouteByDeviation,
    /** Reroute request by other reason, e.g. due incapable state of charge to continue the current route */
    MBNNGetRouteReasonRerouteOther,
    /** Online connection restored after navigating by onboard route */
    MBNNGetRouteReasonBackToOnline
} NS_SWIFT_NAME(GetRouteReason);

NSString* MBNNGetRouteReasonToString(MBNNGetRouteReason get_route_reason);
