// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(RectangleLocationReference)
__attribute__((visibility ("default")))
@interface MBNNRectangleLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLowerLeft:(CLLocationCoordinate2D)lowerLeft
                               upperRight:(CLLocationCoordinate2D)upperRight;

@property (nonatomic, readonly) CLLocationCoordinate2D lowerLeft;
@property (nonatomic, readonly) CLLocationCoordinate2D upperRight;

@end
