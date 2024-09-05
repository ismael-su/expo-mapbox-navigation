// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXGeometry;

NS_SWIFT_NAME(SubgraphEdge)
__attribute__((visibility ("default")))
@interface MBNNSubgraphEdge : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint64_t)id_
                      innerEdgeIds:(nonnull NSArray<NSNumber *> *)innerEdgeIds
                      outerEdgeIds:(nonnull NSArray<NSNumber *> *)outerEdgeIds
                             shape:(nonnull MBXGeometry *)shape
                            length:(double)length;

/** Edge id, may be considered as a valid edge id for GraphAccessor */
@property (nonatomic, readonly) uint64_t id;

/** Ids of edges which are before the edge */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *innerEdgeIds;

/** Ids of edges which are after the edge */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *outerEdgeIds;

/** Geometry of the edge */
@property (nonatomic, readonly, nonnull) MBXGeometry *shape;

/** Length of the edge in meters */
@property (nonatomic, readonly) double length;


@end
