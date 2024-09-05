// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Route information. */
NS_SWIFT_NAME(AlternativeRouteInfo)
__attribute__((visibility ("default")))
@interface MBNNAlternativeRouteInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDistance:(double)distance
                                duration:(double)duration;

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double duration;

- (BOOL)isEqualToAlternativeRouteInfo:(nonnull MBNNAlternativeRouteInfo *)other;

@end
