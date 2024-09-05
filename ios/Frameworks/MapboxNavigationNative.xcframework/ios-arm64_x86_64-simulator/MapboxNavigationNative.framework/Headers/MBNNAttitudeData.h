// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(AttitudeData)
__attribute__((visibility ("default")))
@interface MBNNAttitudeData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPitch:(float)pitch
                                  yaw:(float)yaw
                                 roll:(float)roll;

/** pitch in radians */
@property (nonatomic, readonly) float pitch;

/** yaw in radians */
@property (nonatomic, readonly) float yaw;

/** roll in radians */
@property (nonatomic, readonly) float roll;


- (BOOL)isEqualToAttitudeData:(nonnull MBNNAttitudeData *)other;

@end
