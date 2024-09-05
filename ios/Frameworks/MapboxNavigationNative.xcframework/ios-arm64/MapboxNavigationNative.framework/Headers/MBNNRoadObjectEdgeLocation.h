// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RoadObjectEdgeLocation)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectEdgeLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPercentAlongBegin:(double)percentAlongBegin
                                  percentAlongEnd:(double)percentAlongEnd;

/**
 * offset from the start of edge (0 - 1) pointing to the beginning of road object on this edge
 * will be 0 for all edges in the line-like road object except the very first one
 * in the case of point-like object percentAlongBegin == percentAlongEnd
 */
@property (nonatomic, readonly) double percentAlongBegin;

/**
 * offset from the start of edge (0 - 1) pointing to the end of road object on this edge
 * will be 1 for all edges in the line-like road object except the very first one
 * in the case of point-like object percentAlongBegin == percentAlongEnd
 */
@property (nonatomic, readonly) double percentAlongEnd;


@end
