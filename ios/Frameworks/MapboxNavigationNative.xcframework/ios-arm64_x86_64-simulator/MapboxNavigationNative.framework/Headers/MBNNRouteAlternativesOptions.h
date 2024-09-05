// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RouteAlternativesOptions)
__attribute__((visibility ("default")))
@interface MBNNRouteAlternativesOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequestIntervalSeconds:(double)requestIntervalSeconds
                          minTimeBeforeManeuverSeconds:(double)minTimeBeforeManeuverSeconds;

/** Re-request alternative routes interval. 3 minutes by default. Minimum 30 seconds. */
@property (nonatomic, readonly) double requestIntervalSeconds;

/**
 * Allowable travel time to the closest significant maneuvers.
 *  Controller will request alternative routes with the avoid_maneuver_radius parameter
 *  corresponding to this parameter and the current speed.
 *  0 by default.
 */
@property (nonatomic, readonly) double minTimeBeforeManeuverSeconds;


- (BOOL)isEqualToRouteAlternativesOptions:(nonnull MBNNRouteAlternativesOptions *)other;

@end
