// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(AltimeterData)
__attribute__((visibility ("default")))
@interface MBNNAltimeterData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPressure:(float)pressure
           monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds;

/** pressure in kilopascals */
@property (nonatomic, readonly) float pressure;

/** monotonic timestamp in nanoseconds */
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;


- (BOOL)isEqualToAltimeterData:(nonnull MBNNAltimeterData *)other;

@end
