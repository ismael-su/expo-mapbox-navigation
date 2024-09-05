// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNAssistedDrivingLaneChangeDirection.h>
#import <MapboxNavigationNative/MBNNAssistedDrivingState.h>

/** Adaptive cruise control Assisted Driving data */
NS_SWIFT_NAME(AssistedDrivingData)
__attribute__((visibility ("default")))
@interface MBNNAssistedDrivingData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithState:(MBNNAssistedDrivingState)state
                            direction:(nullable NSNumber *)direction
                            timestamp:(nonnull NSDate *)timestamp;

/** Assisted Driving state */
@property (nonatomic, readonly) MBNNAssistedDrivingState state;

/** Assisted Driving lane change direction */
@property (nonatomic, readonly, nullable) NSNumber *direction;

/** Time when the data was created */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;


@end
