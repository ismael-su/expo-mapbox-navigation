// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ValueOnEdge)
__attribute__((visibility ("default")))
@interface MBNNValueOnEdge : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithShapeIndex:(float)shapeIndex
                              percentAlong:(double)percentAlong
                                     value:(double)value;

/**
 * Position on edge is represented as a shape index.
 * Integer part is an index of edge segment and fraction
 * is a position on the segment: 0 - left point, 1 - right point,
 * 0.5 - in the middle between the segment points.
 * Ex.: 3.5 means the middle the the 3rd segment on the Edge shape, shape has more then 4 points
 */
@property (nonatomic, readonly) float shapeIndex;

/**
 * Position along edge shape [0-1].
 * The value's added for compliance with Navigator interface, functionally it duplicates `shapeIndex`
 */
@property (nonatomic, readonly) double percentAlong;

/** Floating point value, e.g. curvature in 1/m or slope in degrees */
@property (nonatomic, readonly) double value;


- (BOOL)isEqualToValueOnEdge:(nonnull MBNNValueOnEdge *)other;

@end
