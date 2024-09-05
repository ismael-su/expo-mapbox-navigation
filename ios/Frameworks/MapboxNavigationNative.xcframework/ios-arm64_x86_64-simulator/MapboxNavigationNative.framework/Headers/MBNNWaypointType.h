// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNWaypointType)
{
    /** Waypoint is a beginning or/and ending of a leg, not silent and not EV Charging waypoint. */
    MBNNWaypointTypeRegular,
    /**
     * Silent means no breaking into legs in this point and no notification.
     * Silent waypoint doesn't break the route part to legs but must be visited.
     * No alert on reaching silent waypoint.
     */
    MBNNWaypointTypeSilent,
    /**
     * Charging stops inserted by EV Routing for routes requiring charging along
     * the way. As these type of waypoints are not requested by user, they may change
     * on reroutes. But they are not silent, i.e. such waypoint is an ending of a leg
     * and a beginning of another. Note, changing requires time, so they effect route duration
     */
    MBNNWaypointTypeEvChargingServer,
    /**
     * Charging stop added by User. Unlike `EvChargingServer` this will not be changed on
     * reroutes and cannot be skipped. Mind that changing requires time, calculated on server.
     */
    MBNNWaypointTypeEvChargingUser
} NS_SWIFT_NAME(WaypointType);

NSString* MBNNWaypointTypeToString(MBNNWaypointType waypoint_type);
