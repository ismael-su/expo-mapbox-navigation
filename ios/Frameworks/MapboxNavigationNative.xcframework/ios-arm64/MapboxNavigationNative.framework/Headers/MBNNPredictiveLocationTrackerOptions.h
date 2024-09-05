// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(PredictiveLocationTrackerOptions)
__attribute__((visibility ("default")))
@interface MBNNPredictiveLocationTrackerOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCurrentLocationRadius:(uint32_t)currentLocationRadius
                                    routeBufferRadius:(uint32_t)routeBufferRadius
                            destinationLocationRadius:(uint32_t)destinationLocationRadius;

/** How far around the user's location we're going to cache, in meters. */
@property (nonatomic, readonly) uint32_t currentLocationRadius;

/** How far around the active route we're going to cache, in meters. (if route is set) */
@property (nonatomic, readonly) uint32_t routeBufferRadius;

/** How far around the destination location we're going to cache, in meters. (if route is set) */
@property (nonatomic, readonly) uint32_t destinationLocationRadius;


- (BOOL)isEqualToPredictiveLocationTrackerOptions:(nonnull MBNNPredictiveLocationTrackerOptions *)other;

@end
