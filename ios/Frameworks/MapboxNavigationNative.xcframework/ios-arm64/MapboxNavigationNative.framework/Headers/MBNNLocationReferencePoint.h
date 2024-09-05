// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxNavigationNative/MBNNFormOfWay.h>
#import <MapboxNavigationNative/MBNNOpenLRFunctionalRoadClass.h>

/**
 * This class represents an encoded OpenLR reference point, that is coordinate with
 * associated characteristics of the road where the point is placed: road
 * class, form of way, bearing, etc. All the encoded objects use reference
 * points to define precisely how they should be matched.
 */
NS_SWIFT_NAME(LocationReferencePoint)
__attribute__((visibility ("default")))
@interface MBNNLocationReferencePoint : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCoord:(CLLocationCoordinate2D)coord
                  functionalRoadClass:(MBNNOpenLRFunctionalRoadClass)functionalRoadClass
                            formOfWay:(MBNNFormOfWay)formOfWay
                              bearing:(int32_t)bearing
   lowestFunctionRoadClassToNextPoint:(MBNNOpenLRFunctionalRoadClass)lowestFunctionRoadClassToNextPoint
                  distanceToNextPoint:(int32_t)distanceToNextPoint;

@property (nonatomic, readonly) CLLocationCoordinate2D coord;
@property (nonatomic, readonly) MBNNOpenLRFunctionalRoadClass functionalRoadClass;
@property (nonatomic, readonly) MBNNFormOfWay formOfWay;
/** Bearing in degrees, lies on [0, 360) */
@property (nonatomic, readonly) int32_t bearing;

@property (nonatomic, readonly) MBNNOpenLRFunctionalRoadClass lowestFunctionRoadClassToNextPoint;
/** Distance to next location point in meters */
@property (nonatomic, readonly) int32_t distanceToNextPoint;


@end
