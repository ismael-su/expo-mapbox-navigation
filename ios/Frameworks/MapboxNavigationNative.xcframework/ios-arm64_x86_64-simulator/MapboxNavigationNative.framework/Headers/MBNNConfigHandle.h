// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ConfigHandle)
__attribute__((visibility ("default")))
@interface MBNNConfigHandle : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Get number of seconds that should pass before any new proposed maneuver.
 * Initialized by NavigatorConfig.avoidManeuverSeconds.
 */
- (nullable NSNumber *)avoidManeuverSeconds __attribute((ns_returns_retained));
/**
 * Set number of seconds that should pass before any new proposed maneuver.
 * See NavigatorConfig.avoidManeuverSeconds.
 * Note, that changing this property is subject of data races: there is no strong guarantee about
 * exact moment of time when changed property value comes into effect.
 */
- (void)setAvoidManeuverSecondsForSeconds:(nullable NSNumber *)seconds;

@end
