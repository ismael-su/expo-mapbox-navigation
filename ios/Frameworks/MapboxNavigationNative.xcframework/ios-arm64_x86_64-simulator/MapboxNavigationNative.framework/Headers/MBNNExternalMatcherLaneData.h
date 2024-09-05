// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class MBXCoordinate2D;

/** Lane information matched on the HD map */
NS_SWIFT_NAME(ExternalMatcherLaneData)
__attribute__((visibility ("default")))
@interface MBNNExternalMatcherLaneData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLaneCount:(nullable NSNumber *)laneCount
                         currentLaneIndex:(nullable NSNumber *)currentLaneIndex
                         currentLaneWidth:(nullable NSNumber *)currentLaneWidth
                        currentLaneOffset:(nullable NSNumber *)currentLaneOffset
                               coordinate:(nullable MBXCoordinate2D *)coordinate
                                  heading:(nullable NSNumber *)heading
                                timestamp:(nonnull NSDate *)timestamp;

/** Number of the lanes on the road */
@property (nonatomic, readonly, nullable) NSNumber *laneCount;

/** Index of the lane that vehicle is on (from inner to outer). The index is zero based */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneIndex;

/** Lane width in meters */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneWidth;

/**
 * Lane offset, in percentage of lane width, negative means left of lane center,
 * positive means right of lane center valid range - [-1, 1]
 */
@property (nonatomic, readonly, nullable) NSNumber *currentLaneOffset;

/** The matched coordinate of the car */
@property (nonatomic, readonly, nullable) MBXCoordinate2D *coordinate;

/** The matched heading of the car */
@property (nonatomic, readonly, nullable) NSNumber *heading;

/** Time when the data was created */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;


@end
