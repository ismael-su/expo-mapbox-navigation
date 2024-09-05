// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNPartialPolylineDistanceCalculationStrategy.h>

NS_SWIFT_NAME(MatchingOptions)
__attribute__((visibility ("default")))
@interface MBNNMatchingOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithUseOnlyPreloadedTiles:(BOOL)useOnlyPreloadedTiles
                                 allowPartialMatching:(BOOL)allowPartialMatching
           partialPolylineDistanceCalculationStrategy:(MBNNPartialPolylineDistanceCalculationStrategy)partialPolylineDistanceCalculationStrategy;

/**
 * If 'useOnlyPreloadedTiles' is set to false matching will not be performed
 * until all required tiles are loaded in cache, i.e. object would be
 * scheduled for matching and might be cancelled using
 * `RoadObjectMatcher#cancel` method. If the flag is set to true and all
 * required tiles are loaded matching will be performed, an error will be
 * returned in listener otherwise.
 */
@property (nonatomic, readonly) BOOL useOnlyPreloadedTiles;

/**
 * If 'allowPartialMatching' is set to true, long polylines placed on
 * multiple tiles would be allowed to be matched partially. Information
 * about already matched part would be returned in 'onRoadObjectMatched'
 * callback, i.e. this callback would be fired multiple times till the
 * polyline is matched fully. Every next 'RoadObject' in fired callback
 * would contain more details about matched part (see 'MatchedPolylinePart')
 * and might be safely be added to 'RoadObjectsStore' - it would replace an
 * old one as their ids are the same.
 */
@property (nonatomic, readonly) BOOL allowPartialMatching;

/**
 * Describes how to calculate distance till the end of a polyline which is
 * matched partially. See details in docs of
 * PartialPolylineDistanceCalculationStrategy.
 */
@property (nonatomic, readonly) MBNNPartialPolylineDistanceCalculationStrategy partialPolylineDistanceCalculationStrategy;


@end
