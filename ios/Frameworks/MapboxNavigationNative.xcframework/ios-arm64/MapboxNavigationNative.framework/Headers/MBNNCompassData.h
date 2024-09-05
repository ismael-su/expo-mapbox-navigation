// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNPoint3d;

NS_SWIFT_NAME(CompassData)
__attribute__((visibility ("default")))
@interface MBNNCompassData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMagneticHeading:(nullable NSNumber *)magneticHeading
                                    trueHeading:(nullable NSNumber *)trueHeading
                                headingAccuracy:(nullable NSNumber *)headingAccuracy
                             rawGeomagneticData:(nonnull MBNNPoint3d *)rawGeomagneticData
                  monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds;

/** direction in degrees, where 0 degrees is magnetic North. Set null if value is invalid/unknown. */
@property (nonatomic, readonly, nullable) NSNumber *magneticHeading;

/** direction in degrees, where 0 degrees is true North. Set null if value is invalid/unknown. */
@property (nonatomic, readonly, nullable) NSNumber *trueHeading;

/** maximum deviation of where the magnetic heading may differ from the actual geomagnetic heading in degrees. Set null if value is invalid/unknown. */
@property (nonatomic, readonly, nullable) NSNumber *headingAccuracy;

/** raw values vector for the geomagnetism(x, y, z). Set empty array if value is invalid/unknown. */
@property (nonatomic, readonly, nonnull) MBNNPoint3d *rawGeomagneticData;

/** monotonic timestamp in nanoseconds */
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;


- (BOOL)isEqualToCompassData:(nonnull MBNNCompassData *)other;

@end
