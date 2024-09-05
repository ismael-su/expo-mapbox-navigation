// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(Point3d)
__attribute__((visibility ("default")))
@interface MBNNPoint3d : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithX:(float)x
                                y:(float)y
                                z:(float)z;

/** X axis */
@property (nonatomic, readonly) float x;

/** Y axis */
@property (nonatomic, readonly) float y;

/** Z axis */
@property (nonatomic, readonly) float z;


- (BOOL)isEqualToPoint3d:(nonnull MBNNPoint3d *)other;

@end
