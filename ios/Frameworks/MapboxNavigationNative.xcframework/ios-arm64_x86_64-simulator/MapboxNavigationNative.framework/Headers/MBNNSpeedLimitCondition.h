// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNVehicleType.h>
#import <MapboxNavigationNative/MBNNWeather.h>

/**
 * Describes current conditions to be applied to find better siutable speed limit
 * Current time and locale is taken from the system
 */
NS_SWIFT_NAME(SpeedLimitCondition)
__attribute__((visibility ("default")))
@interface MBNNSpeedLimitCondition : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithWeather:(nonnull NSArray<NSNumber *> *)weather
                                   lane:(uint8_t)lane
                            vehicleType:(MBNNVehicleType)vehicleType;

/** Current weather */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *weather;

/** Lane number if known or 0. For right-hand traffic 1 is the very right lane and so on */
@property (nonatomic, readonly) uint8_t lane;

/** Pass vehicle type here */
@property (nonatomic, readonly) MBNNVehicleType vehicleType;


- (BOOL)isEqualToSpeedLimitCondition:(nonnull MBNNSpeedLimitCondition *)other;

@end
