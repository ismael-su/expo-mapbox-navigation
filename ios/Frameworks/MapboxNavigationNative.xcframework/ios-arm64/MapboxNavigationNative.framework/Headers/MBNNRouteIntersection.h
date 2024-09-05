// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(RouteIntersection)
__attribute__((visibility ("default")))
@interface MBNNRouteIntersection : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLocation:(CLLocationCoordinate2D)location
                           geometryIndex:(uint32_t)geometryIndex
                            segmentIndex:(uint32_t)segmentIndex
                                legIndex:(uint32_t)legIndex;

/** coordinate of intersection */
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/** index in route's geometry */
@property (nonatomic, readonly) uint32_t geometryIndex;

/** index of corresponding leg's segment */
@property (nonatomic, readonly) uint32_t segmentIndex;

/** index of corresponding leg */
@property (nonatomic, readonly) uint32_t legIndex;


- (BOOL)isEqualToRouteIntersection:(nonnull MBNNRouteIntersection *)other;

@end
