// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(LanePosition)
__attribute__((visibility ("default")))
@interface MBNNLanePosition : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLaneId:(uint64_t)laneId
                          percentAlong:(double)percentAlong;

/** Lane id in HD graph */
@property (nonatomic, readonly) uint64_t laneId;

/**
 * Percent along the lane geometry [0-1].
 * 0 means the first geometry point, 1 means the last geometry point.
 */
@property (nonatomic, readonly) double percentAlong;


@end
