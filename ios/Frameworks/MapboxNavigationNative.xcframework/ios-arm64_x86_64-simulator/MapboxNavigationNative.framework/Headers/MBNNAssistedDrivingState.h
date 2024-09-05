// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Adaptive cruise control Assisted Driving state */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNAssistedDrivingState)
{
    MBNNAssistedDrivingStateDisabled,
    MBNNAssistedDrivingStateKeepLane,
    MBNNAssistedDrivingStateStartLaneChange,
    MBNNAssistedDrivingStateEndLaneChange
} NS_SWIFT_NAME(AssistedDrivingState);

NSString* MBNNAssistedDrivingStateToString(MBNNAssistedDrivingState assisted_driving_state);
