// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Represents information about the matched part of the whole polyline if it is
 * being matched partially. Polyline could be considered as fully matched if
 * `beginIndex` equals to 0 and `endIndex` equals to `amountOfKeypoints`.
 *
 * Generally, keypoint in these terms is one of provided for matching
 * coordinates. But its amount might not correspond to the input geometry
 * amount, too close points are filtering out.
 */
NS_SWIFT_NAME(MatchedPolylinePart)
__attribute__((visibility ("default")))
@interface MBNNMatchedPolylinePart : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBeginIndex:(uint32_t)beginIndex
                                  endIndex:(uint32_t)endIndex
                         amountOfKeypoints:(uint32_t)amountOfKeypoints;

/**
 * Begin index of a keypoint in the matched interval (included).
 * Currently might be only zero, partial matching works from start to end.
 */
@property (nonatomic, readonly) uint32_t beginIndex;

/** End index of a keypoint in the matched interval (not included) */
@property (nonatomic, readonly) uint32_t endIndex;

/** Total amount of keypoints */
@property (nonatomic, readonly) uint32_t amountOfKeypoints;


@end
