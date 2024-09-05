// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNPosition;

/** Gate represents information about a particular exit or entrance. */
NS_SWIFT_NAME(Gate)
__attribute__((visibility ("default")))
@interface MBNNGate : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint32_t)id_
                          position:(nonnull MBNNPosition *)position
                       probability:(double)probability
                          distance:(double)distance;

/** id of the Gate, persistent to the same gate. */
@property (nonatomic, readonly) uint32_t id;

/** Position on the road graph with coordinates */
@property (nonatomic, readonly, nonnull) MBNNPosition *position;

/** Probability to enter/exit this gate, value in range [0, 1]. */
@property (nonatomic, readonly) double probability;

/**
 * Distance to the gate in meters:
 * - if represents entrance outside of the object - positive
 * - if represents entrance inside the object - negative
 * - if represents exit outside the object - zero
 * - if represents exit inside the object - positive
 */
@property (nonatomic, readonly) double distance;


@end
