// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNSpeedLimitInfo;
@class MBNNValueOnEdge;

NS_SWIFT_NAME(EdgeAdasAttributes)
__attribute__((visibility ("default")))
@interface MBNNEdgeAdasAttributes : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSpeedLimit:(nonnull NSArray<MBNNSpeedLimitInfo *> *)speedLimit
                                    slopes:(nonnull NSArray<MBNNValueOnEdge *> *)slopes
                                curvatures:(nonnull NSArray<MBNNValueOnEdge *> *)curvatures
                             isDividedRoad:(nullable NSNumber *)isDividedRoad;

/**
 * List of speed limits on the edge.
 *  Empty means no speed-limit data for the edge.
 *  Multiple values will have different conditions.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNSpeedLimitInfo *> *speedLimit;

/**
 * List of slope values with their positions on the edge.
 * Position is a shape index, where integer part in an index of geometry segment is
 * and fractional part is a position on the segment.
 * Value is a slope in degrees.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNValueOnEdge *> *slopes;

/**
 * List of curvature values with their positions on the edge.
 * Position is a shape index, where integer part in an index of geometry segment is
 * and fractional part is a position on the segment.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNValueOnEdge *> *curvatures;

/** A flag indicating if the edge is a divided road. */
@property (nonatomic, readonly, nullable) NSNumber *isDividedRoad;


- (BOOL)isEqualToEdgeAdasAttributes:(nonnull MBNNEdgeAdasAttributes *)other;

@end
