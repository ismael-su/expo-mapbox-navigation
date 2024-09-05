// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNLaneInstance.h>

/** Lane instance data */
NS_SWIFT_NAME(LaneInstanceData)
__attribute__((visibility ("default")))
@interface MBNNLaneInstanceData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLeftRoadMarkingIndex:(uint32_t)leftRoadMarkingIndex
                               rightRoadMarkingIndex:(uint32_t)rightRoadMarkingIndex
                                        laneInstance:(MBNNLaneInstance)laneInstance;

/** The index of the left road marking */
@property (nonatomic, readonly) uint32_t leftRoadMarkingIndex;

/** The index of the right road marking */
@property (nonatomic, readonly) uint32_t rightRoadMarkingIndex;

/** The instance of a lane (ego, left or right) */
@property (nonatomic, readonly) MBNNLaneInstance laneInstance;


@end
