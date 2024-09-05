// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class MBNNGraphPosition;

NS_SWIFT_NAME(Position)
__attribute__((visibility ("default")))
@interface MBNNPosition : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPosition:(nonnull MBNNGraphPosition *)position
                              coordinate:(CLLocationCoordinate2D)coordinate;

@property (nonatomic, readonly, nonnull) MBNNGraphPosition *position;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

- (BOOL)isEqualToPosition:(nonnull MBNNPosition *)other;

@end
