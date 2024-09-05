// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(DetectedObject)
__attribute__((visibility ("default")))
@interface MBNNDetectedObject : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint64_t)id_
                              type:(nonnull NSString *)type
                            center:(CLLocationCoordinate2D)center
                           heading:(nullable NSNumber *)heading
                             speed:(nullable NSNumber *)speed
                         laneIndex:(nullable NSNumber *)laneIndex
                        laneOffset:(nullable NSNumber *)laneOffset;

/** Id of the detected object */
@property (nonatomic, readonly) uint64_t id;

/** Type of the detected object */
@property (nonatomic, readonly, nonnull, copy) NSString *type;

/** Center of the detected object in meters, relative to the middle of own vehicle's center */
@property (nonatomic, readonly) CLLocationCoordinate2D center;

/** Heading */
@property (nonatomic, readonly, nullable) NSNumber *heading;

/** Speed of the detected object (absolute) */
@property (nonatomic, readonly, nullable) NSNumber *speed;

/** Index of the lane that the detected object is on. The index is zero based */
@property (nonatomic, readonly, nullable) NSNumber *laneIndex;

/**
 * Lane offset, in percentage of lane width, negative means left of lane center,
 * positive means right of lane center, valid range - [-1, 1], however values outside
 * of this range are possible when car is not on the highway
 */
@property (nonatomic, readonly, nullable) NSNumber *laneOffset;


@end
