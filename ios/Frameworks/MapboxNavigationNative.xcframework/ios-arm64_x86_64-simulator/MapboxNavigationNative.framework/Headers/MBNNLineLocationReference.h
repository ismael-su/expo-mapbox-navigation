// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNLocationReferencePoint;

NS_SWIFT_NAME(LineLocationReference)
__attribute__((visibility ("default")))
@interface MBNNLineLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPoints:(nonnull NSArray<MBNNLocationReferencePoint *> *)points
                        positiveOffset:(double)positiveOffset
                        negativeOffset:(double)negativeOffset;

/**
 * Array of reference points. Be careful, reference points are not encoded
 * geometry points, especially if positive are negative offsets are not
 * zero. The correct way of using them - build a path on a road graph,
 * calculate its length, then cut the offsets.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNLocationReferencePoint *> *points;

/**
 * Fraction of the length between the two first location reference points
 * which should be excluded since the beginning.  Lies on [0, 1)
 */
@property (nonatomic, readonly) double positiveOffset;

/**
 * Fraction of the length between the two last location reference points
 * which should be excluded from the end. Lies on [0, 1)
 */
@property (nonatomic, readonly) double negativeOffset;


@end
