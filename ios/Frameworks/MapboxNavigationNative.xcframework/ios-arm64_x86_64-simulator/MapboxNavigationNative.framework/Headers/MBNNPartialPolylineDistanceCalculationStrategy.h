// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * If we match a polyline partially, it's impossible to calculate distance till
 * the end while only some parts are matched. In this case we suggest two options.
 */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNPartialPolylineDistanceCalculationStrategy)
{
    /**
     * Reports distance till the end of a matched part.
     *
     * If a new part is matched the distance would be increased.
     */
    MBNNPartialPolylineDistanceCalculationStrategyOnlyMatched,
    /**
     * Reports distance till the end of a whole polyline, but absent part is
     * calculated by input geometry (partial matching is not supported for
     * OpenLR encoded polylines).
     *
     * If a new part is matched the distance would be corrected depending on the
     * accuracy of incoming geometry. More points - less diff in updates.
     */
    MBNNPartialPolylineDistanceCalculationStrategyByInputGeometry
} NS_SWIFT_NAME(PartialPolylineDistanceCalculationStrategy);
