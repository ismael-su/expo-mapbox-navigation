// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxNavigationNative/MBNNOrientation.h>
#import <MapboxNavigationNative/MBNNSideOfRoad.h>

@class MBNNGraphPosition;

/**  Defines a point along a line on the road graph */
NS_SWIFT_NAME(OpenLRPointAlongLineLocation)
__attribute__((visibility ("default")))
@interface MBNNOpenLRPointAlongLineLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Position of the point on the graph */
- (nonnull MBNNGraphPosition *)getPosition __attribute((ns_returns_retained));
/** Specifies on which side of road locates the point */
- (MBNNSideOfRoad)getSideOfRoad;
/** Specifies orientation */
- (MBNNOrientation)getOrientation;
/** Map coordinate of the point */
- (CLLocationCoordinate2D)getCoordinate;

@end
