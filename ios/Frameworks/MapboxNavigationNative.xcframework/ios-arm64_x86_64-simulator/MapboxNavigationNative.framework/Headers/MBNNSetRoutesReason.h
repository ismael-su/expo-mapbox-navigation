// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Reason of setting a route */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNSetRoutesReason)
{
    /** Clean a route */
    MBNNSetRoutesReasonCleanUp,
    /** Set a new route, use by default */
    MBNNSetRoutesReasonNewRoute,
    /** Route index changed to an alternative */
    MBNNSetRoutesReasonAlternative,
    /**
     * New route from different starting point to previous destinations
     *  (not reached waypoints) after an Offroute event or user chooses an alternative
     */
    MBNNSetRoutesReasonReroute,
    /** Recreated Navigator after losing internet connection */
    MBNNSetRoutesReasonFallbackToOffline,
    /** Recreated Navigator after restoring internet connection */
    MBNNSetRoutesReasonRestoreToOnline,
    /** Navigator used offline route and new route is available from the server */
    MBNNSetRoutesReasonSwitchToOnline,
    /** Fastest Route available (and should be switched) */
    MBNNSetRoutesReasonFastestRoute
} NS_SWIFT_NAME(SetRoutesReason);

NSString* MBNNSetRoutesReasonToString(MBNNSetRoutesReason set_routes_reason);
