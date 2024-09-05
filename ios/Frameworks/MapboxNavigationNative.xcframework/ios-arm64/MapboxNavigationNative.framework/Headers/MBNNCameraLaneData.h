// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNLaneInstanceData;
@class MBNNRoadMarking;

/** Lane information coming from the camera and other sensors */
NS_SWIFT_NAME(CameraLaneData)
__attribute__((visibility ("default")))
@interface MBNNCameraLaneData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCurrentLaneIndex:(nullable NSNumber *)currentLaneIndex
                                currentLaneWidth:(nullable NSNumber *)currentLaneWidth
                               currentLaneOffset:(nullable NSNumber *)currentLaneOffset
                                    roadMarkings:(nonnull NSArray<MBNNRoadMarking *> *)roadMarkings
                                           lanes:(nonnull NSArray<MBNNLaneInstanceData *> *)lanes
                                       timestamp:(nonnull NSDate *)timestamp;

/** Index of the lane that vehicle is on (from inner to outer). The index is zero based */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneIndex;

/** Lane width in meters */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneWidth;

/**
 * Lane offset, in percentage of lane width, negative means left of lane center,
 * positive means right of lane center, valid range - [-1, 1]
 */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneOffset;

/** All road markings detected by the camera system */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNRoadMarking *> *roadMarkings;

/** Lane objects */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNLaneInstanceData *> *lanes;

/** Time when the data was created */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;


@end
