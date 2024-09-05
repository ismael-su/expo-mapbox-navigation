// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRouteLaneDivergency;

NS_SWIFT_NAME(RouteLane)
__attribute__((visibility ("default")))
@interface MBNNRouteLane : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLaneId:(uint64_t)laneId
                       distanceFromEgo:(nullable NSNumber *)distanceFromEgo
                            divergency:(nullable MBNNRouteLaneDivergency *)divergency;

/** Lane id in HD graph */
@property (nonatomic, readonly) uint64_t laneId;

/**
 * Distance in meters from ego position to the start of the lane.
 * Could be negative for lanes which start before the ego car position.
 *
 * Empty value means the route lane is not reachable from current ego position,
 * that may happen when we deviate from the current route
 */
@property (nonatomic, readonly, nullable) NSNumber *distanceFromEgo;

/**
 * Holds the information for lanes that are going to lead to the off-route somewhere
 * in the future.
 */
@property (nonatomic, readonly, nullable) MBNNRouteLaneDivergency *divergency;


- (BOOL)isEqualToRouteLane:(nonnull MBNNRouteLane *)other;

@end
