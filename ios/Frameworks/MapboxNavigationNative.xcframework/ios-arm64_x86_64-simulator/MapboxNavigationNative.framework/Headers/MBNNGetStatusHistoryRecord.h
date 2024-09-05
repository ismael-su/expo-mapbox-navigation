// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNNavigationStatus;

NS_SWIFT_NAME(GetStatusHistoryRecord)
__attribute__((visibility ("default")))
@interface MBNNGetStatusHistoryRecord : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMonotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds
                                                       result:(nonnull MBNNNavigationStatus *)result;

@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;
@property (nonatomic, readonly, nonnull) MBNNNavigationStatus *result;

@end
