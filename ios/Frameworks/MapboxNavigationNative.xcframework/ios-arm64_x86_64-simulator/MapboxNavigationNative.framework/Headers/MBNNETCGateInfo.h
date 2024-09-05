// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Information about passed ETC gates in Japan */
NS_SWIFT_NAME(ETCGateInfo)
__attribute__((visibility ("default")))
@interface MBNNETCGateInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint32_t)id_
     monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds;

/** id of ETC gate */
@property (nonatomic, readonly) uint32_t id;

/** should be in sync with timestamps of locations from location provider */
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;


- (BOOL)isEqualToETCGateInfo:(nonnull MBNNETCGateInfo *)other;

@end
