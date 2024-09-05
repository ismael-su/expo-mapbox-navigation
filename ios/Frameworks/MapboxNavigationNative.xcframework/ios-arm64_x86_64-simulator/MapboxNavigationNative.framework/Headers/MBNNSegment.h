// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdasisConfigMessageOptions;

/** SEGMENT message options */
NS_SWIFT_NAME(Segment)
__attribute__((visibility ("default")))
@interface MBNNSegment : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithOptions:(nonnull MBNNAdasisConfigMessageOptions *)options;

@property (nonatomic, readonly, nonnull) MBNNAdasisConfigMessageOptions *options;

- (BOOL)isEqualToSegment:(nonnull MBNNSegment *)other;

@end
