// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_SWIFT_NAME(GridLocationReference)
__attribute__((visibility ("default")))
@interface MBNNGridLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLowerLeft:(CLLocationCoordinate2D)lowerLeft
                               upperRight:(CLLocationCoordinate2D)upperRight
                                    nCols:(int32_t)nCols
                                    nRows:(int32_t)nRows;

@property (nonatomic, readonly) CLLocationCoordinate2D lowerLeft;
@property (nonatomic, readonly) CLLocationCoordinate2D upperRight;
@property (nonatomic, readonly) int32_t nCols;
@property (nonatomic, readonly) int32_t nRows;

@end
