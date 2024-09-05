// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxNavigationNative/MBNNRoadMarkingColor.h>
#import <MapboxNavigationNative/MBNNRoadMarkingType.h>
@class MBXCoordinate2D;

/** Road marking detected by the camera system */
NS_SWIFT_NAME(RoadMarking)
__attribute__((visibility ("default")))
@interface MBNNRoadMarking : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(MBNNRoadMarkingType)type
                               color:(nullable NSNumber *)color
                              offset:(nullable MBXCoordinate2D *)offset;

/** Type of the road marking */
@property (nonatomic, readonly) MBNNRoadMarkingType type;

/** Color of the road marking */
@property (nonatomic, readonly, nullable) NSNumber *color;

/** Offset of the road marking in meters, relative to the car */
@property (nonatomic, readonly, nullable) MBXCoordinate2D *offset;


@end
