// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Location data derived from IMU. */
NS_SWIFT_NAME(IMUDerivedData)
__attribute__((visibility ("default")))
@interface MBNNIMUDerivedData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBearing:(nullable NSNumber *)bearing;

/** Heading */
@property (nonatomic, readonly, nullable) NSNumber *bearing;


@end
