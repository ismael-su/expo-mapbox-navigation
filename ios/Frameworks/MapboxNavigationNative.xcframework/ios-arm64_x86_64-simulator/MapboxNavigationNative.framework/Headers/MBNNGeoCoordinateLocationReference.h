// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(GeoCoordinateLocationReference)
__attribute__((visibility ("default")))
@interface MBNNGeoCoordinateLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@end
