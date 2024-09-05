// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNFixDirectedCoordinate;
@class MBNNLanePosition;
@class MBNNMatchedDetectedObject;
@class MBNNMatchedLaneInfo;
@class MBNNRouteLane;

NS_SWIFT_NAME(LaneMatchingResult)
__attribute__((visibility ("default")))
@interface MBNNLaneMatchingResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCoordinate:(nonnull MBNNFixDirectedCoordinate *)coordinate
                         snappedCoordinate:(nonnull MBNNFixDirectedCoordinate *)snappedCoordinate
                              lanePosition:(nonnull MBNNLanePosition *)lanePosition
                                  laneInfo:(nonnull MBNNMatchedLaneInfo *)laneInfo
                    matchedDetectedObjects:(nullable NSArray<MBNNMatchedDetectedObject *> *)matchedDetectedObjects
                              isLaneChange:(BOOL)isLaneChange
                                isTeleport:(BOOL)isTeleport
                         currentRouteLanes:(nullable NSArray<MBNNRouteLane *> *)currentRouteLanes;

/** Coordinate of the vehicle */
@property (nonatomic, readonly, nonnull) MBNNFixDirectedCoordinate *coordinate;

/** Coordinate of the vehicle snapped on the map-matched lane */
@property (nonatomic, readonly, nonnull) MBNNFixDirectedCoordinate *snappedCoordinate;

/** Snapped lane position */
@property (nonatomic, readonly, nonnull) MBNNLanePosition *lanePosition;

/** Lane information of the vehicle */
@property (nonatomic, readonly, nonnull) MBNNMatchedLaneInfo *laneInfo;

/** Lane information of the detected objects */
@property (nonatomic, readonly, nullable, copy) NSArray<MBNNMatchedDetectedObject *> *matchedDetectedObjects;

/**
 * Boolean flag defining if lane change has just occurred,
 * i.e. snapped location have just jumped onto left or right lane.
 */
@property (nonatomic, readonly) BOOL isLaneChange;

/**
 * Boolean flag defining if teleport has just occurred,
 * i.e. snapped location have just jumped onto another road
 */
@property (nonatomic, readonly) BOOL isTeleport;

/** Route lanes */
@property (nonatomic, readonly, nullable, copy) NSArray<MBNNRouteLane *> *currentRouteLanes;


@end
