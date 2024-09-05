// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class MBXCoordinate2D;

NS_SWIFT_NAME(PolygonLocationReference)
__attribute__((visibility ("default")))
@interface MBNNPolygonLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCorners:(nonnull NSArray<MBXCoordinate2D *> *)corners;

@property (nonatomic, readonly, nonnull, copy) NSArray<MBXCoordinate2D *> *corners;

@end
