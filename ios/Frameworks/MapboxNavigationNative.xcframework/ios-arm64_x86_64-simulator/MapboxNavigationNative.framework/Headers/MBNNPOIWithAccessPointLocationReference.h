// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxNavigationNative/MBNNOrientation.h>
#import <MapboxNavigationNative/MBNNSideOfRoad.h>

@class MBNNLocationReferencePoint;

/** Represents a coordinate (POI) which has an access point being lied on a line. */
NS_SWIFT_NAME(POIWithAccessPointLocationReference)
__attribute__((visibility ("default")))
@interface MBNNPOIWithAccessPointLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPoints:(nonnull NSArray<MBNNLocationReferencePoint *> *)points
                        positiveOffset:(double)positiveOffset
                                 coord:(CLLocationCoordinate2D)coord
                           orientation:(MBNNOrientation)orientation
                            sideOfRoad:(MBNNSideOfRoad)sideOfRoad;

/** List of points which describe the line */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNLocationReferencePoint *> *points;

/** Represented as fraction of length since the begining, lies on [0, 1) */
@property (nonatomic, readonly) double positiveOffset;

/** Coordinate of POI */
@property (nonatomic, readonly) CLLocationCoordinate2D coord;

@property (nonatomic, readonly) MBNNOrientation orientation;
@property (nonatomic, readonly) MBNNSideOfRoad sideOfRoad;

@end
