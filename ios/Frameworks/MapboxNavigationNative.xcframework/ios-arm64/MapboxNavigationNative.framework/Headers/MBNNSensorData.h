// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNSensorType.h>

/**
 * Sensor data
 * Universal structure for passing external sensors data from platform
 * Two types of sensors are supported:
 * - Actual weather data for current location
 * value is an array of i8 of 3 possible weather conditions: 0 - "Rain(Wetness)", 1 - "Snow(Icy)", 2 - "Fog".
 * If array is empty  - no special weather conditions are detected.
 * - Lane sensor
 * value is an object with the following fields:
 * {"currentLaneIndex": 1, "laneCount": 3}
 * For right-hand traffic 1 is the very right lane and so on
 * currentLaneIndex == 0 means that lane information is not available
 * !!IMPORTANT!!: monotonicTimestampNanoseconds should be based on the same source as FixLocation::monotonicTimestampNanoseconds
 */
NS_SWIFT_NAME(SensorData)
__attribute__((visibility ("default")))
@interface MBNNSensorData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSensorType:(MBNNSensorType)sensorType
             monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds
                                     value:(nonnull id)value;

@property (nonatomic, readonly) MBNNSensorType sensorType;
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;
@property (nonatomic, readonly, nonnull, copy) id value;

@end
