// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNPosition;

/**
 * Represents the current distance to a road object of type "Point".
 * The structure is immutable, to get an updated info you should get a new instance of the info
 * via ElectronicHorizonObserver.
 */
NS_SWIFT_NAME(PointDistanceInfo)
__attribute__((visibility ("default")))
@interface MBNNPointDistanceInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDistance:(double)distance
                                position:(nonnull MBNNPosition *)position;

/** distance to point in meters */
@property (nonatomic, readonly) double distance;

/** Position on the road graph with coordinate of the gantry entry point which we report the distance to. */
@property (nonatomic, readonly, nonnull) MBNNPosition *position;


@end
