// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXGeometry;

@class MBNNPosition;
@class MBNNSubgraphEdge;

/**
 * The MatchedSubgraphLocation represents a complex object which might be
 * considered as a directed graph. The graph might contain loops. `enters` and
 * `exits` fields contain edge ids, which allows to traverse the graph, obtain
 * geometry and calculate different distances inside it.
 */
NS_SWIFT_NAME(MatchedSubgraphLocation)
__attribute__((visibility ("default")))
@interface MBNNMatchedSubgraphLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** All enters of the subgraph */
- (nonnull NSArray<MBNNPosition *> *)getEnters __attribute((ns_returns_retained));
/** All exits of the subgraph */
- (nonnull NSArray<MBNNPosition *> *)getExits __attribute((ns_returns_retained));
/** All the edges of the subgraph associated by id */
- (nonnull NSDictionary<NSNumber *, MBNNSubgraphEdge *> *)getEdges __attribute((ns_returns_retained));
/** Geometry of the subgraph */
- (nonnull MBXGeometry *)getShape __attribute((ns_returns_retained));

@end
