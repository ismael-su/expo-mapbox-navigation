// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(CircleLocationReference)
__attribute__((visibility ("default")))
@interface MBNNCircleLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCoord:(CLLocationCoordinate2D)coord
                         radiusMeters:(uint32_t)radiusMeters;

@property (nonatomic, readonly) CLLocationCoordinate2D coord;
@property (nonatomic, readonly) uint32_t radiusMeters;

@end
