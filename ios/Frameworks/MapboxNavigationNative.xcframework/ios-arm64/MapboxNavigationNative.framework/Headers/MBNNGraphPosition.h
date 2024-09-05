// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Declares position of an object on the map graph */
NS_SWIFT_NAME(GraphPosition)
__attribute__((visibility ("default")))
@interface MBNNGraphPosition : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithEdgeId:(uint64_t)edgeId
                          percentAlong:(double)percentAlong;

/** Edge id in road graph */
@property (nonatomic, readonly) uint64_t edgeId;

/** Position along edge shape [0-1] */
@property (nonatomic, readonly) double percentAlong;


- (BOOL)isEqualToGraphPosition:(nonnull MBNNGraphPosition *)other;

@end
