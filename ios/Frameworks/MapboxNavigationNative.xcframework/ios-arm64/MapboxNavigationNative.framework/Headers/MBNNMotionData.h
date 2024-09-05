// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAttitudeData;
@class MBNNPoint3d;

/** https://github.com/mapbox/mapbox-vision/blob/4a976f1d2f4c284a8481e0760b98078804d457d4/VisionCore/Public/VisionCore/platform_types.hpp#L211 */
NS_SWIFT_NAME(MotionData)
__attribute__((visibility ("default")))
@interface MBNNMotionData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAttitude:(nonnull MBNNAttitudeData *)attitude
                            rotationRate:(nonnull MBNNPoint3d *)rotationRate
                     gravityAcceleration:(nonnull MBNNPoint3d *)gravityAcceleration
                        userAcceleration:(nonnull MBNNPoint3d *)userAcceleration
                           magneticField:(nonnull MBNNPoint3d *)magneticField
                                 heading:(float)heading
           monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds;

/** the attitude of device */
@property (nonatomic, readonly, nonnull) MBNNAttitudeData *attitude;

/** the rotation rate of device (in rad/s) */
@property (nonatomic, readonly, nonnull) MBNNPoint3d *rotationRate;

/** the gravity acceleration vector expressed in the device's reference frame (in gravitational forces) */
@property (nonatomic, readonly, nonnull) MBNNPoint3d *gravityAcceleration;

/** the acceleration that the user is giving to the device (in gravitational forces). */
@property (nonatomic, readonly, nonnull) MBNNPoint3d *userAcceleration;

/** the magnetic field vector with respect to the device (in microteslas) */
@property (nonatomic, readonly, nonnull) MBNNPoint3d *magneticField;

/** The heading angle (measured in degrees) relative to the current reference frame. */
@property (nonatomic, readonly) float heading;

/** monotonic timestamp in nanoseconds */
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;


- (BOOL)isEqualToMotionData:(nonnull MBNNMotionData *)other;

@end
