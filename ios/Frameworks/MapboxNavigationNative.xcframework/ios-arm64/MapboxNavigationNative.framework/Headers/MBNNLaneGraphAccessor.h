// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class MBXCoordinate2D;

@class MBNNLaneData;

NS_SWIFT_NAME(LaneGraphAccessor)
@protocol MBNNLaneGraphAccessor
/**
 * Gets all data related to the lane, except lane geometry.
 * Empty if laneId is invalid, or tile with the lane is not loaded.
 */
- (nullable MBNNLaneData *)getLaneDataForLaneId:(uint64_t)laneId;
/**
 * Gets lane geometry.
 * Empty if laneId is invalid, or tile with the lane is not loaded.
 */
- (nullable NSArray<MBXCoordinate2D *> *)getLaneGeometryForLaneId:(uint64_t)laneId;
@end
