// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNFormOfWay.h>
#import <MapboxNavigationNative/MBNNOpenLRFunctionalRoadClass.h>

/**
 * Line attributes are used for ClosedLineLocationReference to define attributes
 * of the interval between the last point and the first one as they need to be
 * connected.
 */
NS_SWIFT_NAME(LineAttributes)
__attribute__((visibility ("default")))
@interface MBNNLineAttributes : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithFunctionalRoadClass:(MBNNOpenLRFunctionalRoadClass)functionalRoadClass
                                          formOfWay:(MBNNFormOfWay)formOfWay
                                            bearing:(int32_t)bearing;

@property (nonatomic, readonly) MBNNOpenLRFunctionalRoadClass functionalRoadClass;
@property (nonatomic, readonly) MBNNFormOfWay formOfWay;
/** Bearing in degrees, lies in [0, 360) */
@property (nonatomic, readonly) int32_t bearing;


@end
