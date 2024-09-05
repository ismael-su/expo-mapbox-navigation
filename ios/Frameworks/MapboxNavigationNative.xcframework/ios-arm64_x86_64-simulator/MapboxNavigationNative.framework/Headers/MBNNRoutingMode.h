// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRoutingMode)
{
    /** For car and motorcycle routing. */
    MBNNRoutingModeDriving,
    /** For pedestrian and hiking routing. */
    MBNNRoutingModeWalking,
    /** For bicycle routing. */
    MBNNRoutingModeCycling,
    /**
     * For car and motorcycle routing. This profile factors in current and historic
     *  traffic conditions to avoid slowdowns.
     */
    MBNNRoutingModeDrivingTraffic
} NS_SWIFT_NAME(RoutingMode);

NSString* MBNNRoutingModeToString(MBNNRoutingMode routing_mode);
