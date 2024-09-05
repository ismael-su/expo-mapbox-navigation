// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Internal nav-native enum used to determine the reason of off-road state */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNOffRoadStateProvider)
{
    MBNNOffRoadStateProviderUnknown,
    MBNNOffRoadStateProviderDeadReckoning,
    MBNNOffRoadStateProviderFallback,
    MBNNOffRoadStateProviderHMM,
    MBNNOffRoadStateProviderParallelMovement,
    MBNNOffRoadStateProviderParkingAisle,
    MBNNOffRoadStateProviderSimple,
    MBNNOffRoadStateProviderSyntheticLocation,
    MBNNOffRoadStateProviderTunnel,
    MBNNOffRoadStateProviderBadSignal,
    MBNNOffRoadStateProviderParkingGarage
} NS_SWIFT_NAME(OffRoadStateProvider);

NSString* MBNNOffRoadStateProviderToString(MBNNOffRoadStateProvider off_road_state_provider);
