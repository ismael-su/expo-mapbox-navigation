// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(MatchedLaneInfo)
__attribute__((visibility ("default")))
@interface MBNNMatchedLaneInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLaneCount:(nullable NSNumber *)laneCount
                         currentLaneIndex:(nullable NSNumber *)currentLaneIndex
                         currentLaneWidth:(nullable NSNumber *)currentLaneWidth
                        currentLaneOffset:(nullable NSNumber *)currentLaneOffset;

/** Number of the lanes on the road */
@property (nonatomic, readonly, nullable) NSNumber *laneCount;

/** Index of the lane that vehicles is on (from inner to outer) */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneIndex;

/** Lane width in meters */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneWidth;

/**
 * Lane offset, in percentage of lane width, negative means left of lane center,
 * positive means right of lane center valid range - [-1, 1], however values outside
 * of this range are possible when car is not on the highway.
 */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneOffset;


@end
