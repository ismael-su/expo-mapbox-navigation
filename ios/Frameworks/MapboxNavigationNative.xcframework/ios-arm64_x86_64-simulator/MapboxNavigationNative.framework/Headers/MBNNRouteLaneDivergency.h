// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RouteLaneDivergency)
__attribute__((visibility ("default")))
@interface MBNNRouteLaneDivergency : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithNumberOfLanes:(uint64_t)numberOfLanes
                                       length:(double)length;

/** Number of lanes before the off-route. If the value is zero then it's the last lane */
@property (nonatomic, readonly) uint64_t numberOfLanes;

/** Meters before the off-route */
@property (nonatomic, readonly) double length;


- (BOOL)isEqualToRouteLaneDivergency:(nonnull MBNNRouteLaneDivergency *)other;

@end
