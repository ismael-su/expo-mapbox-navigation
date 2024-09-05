// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class MBXCoordinate2D;

@class MBNNCacheHandle;
@class MBNNEdgeAdasAttributes;
@class MBNNEdgeMetadata;
@class MBNNGraphPath;
@class MBNNGraphPosition;

NS_SWIFT_NAME(GraphAccessor)
__attribute__((visibility ("default")))
@interface MBNNGraphAccessor : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Creates GraphAccessor that accesses map data using provided cache.
 * Use `mapbox::navigator::CacheFactory` to build cache handle.
 */
- (nonnull instancetype)initWithCache:(nonnull MBNNCacheHandle *)cache;

/**
 * Returns Graph Edge meta-information for the given GraphId of the edge.
 * If edge with given edgeId is not accessible, returns null
 */
- (nullable MBNNEdgeMetadata *)getEdgeMetadataForEdgeId:(uint64_t)edgeId __attribute((ns_returns_retained));
/**
 * Returns Graph Edge geometry for the given GraphId of the edge.
 * If edge with given edgeId is not accessible, returns null
 */
- (nullable NSArray<MBXCoordinate2D *> *)getEdgeShapeForEdgeId:(uint64_t)edgeId __attribute((ns_returns_retained));
/**
 * Returns geometry of given path on graph.
 * If any of path edges is not accessible, returns null.
 */
- (nullable NSArray<MBXCoordinate2D *> *)getPathShapeForPath:(nonnull MBNNGraphPath *)path __attribute((ns_returns_retained));
/**
 * Returns geographical coordinate of given position on graph
 * If position's edge is not accessible, returns null.
 */
- (nullable MBXCoordinate2D *)getPositionCoordinateForPosition:(nonnull MBNNGraphPosition *)position __attribute((ns_returns_retained));
/**
 * Caution: Beta feature that cat be changed soon.
 *
 * Returns ADAS data for a given Edge.
 * If no ADAS data is available, returns null
 */
- (nullable MBNNEdgeAdasAttributes *)getAdasAttributesForEdgeId:(uint64_t)edgeId __attribute((ns_returns_retained));

@end
