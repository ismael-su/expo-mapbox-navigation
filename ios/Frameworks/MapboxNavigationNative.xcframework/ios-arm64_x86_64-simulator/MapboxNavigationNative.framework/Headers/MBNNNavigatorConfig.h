// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNElectronicHorizonOptions;
@class MBNNIncidentsOptions;
@class MBNNPollingConfig;

NS_SWIFT_NAME(NavigatorConfig)
__attribute__((visibility ("default")))
@interface MBNNNavigatorConfig : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithVoiceInstructionThreshold:(nullable NSNumber *)voiceInstructionThreshold
                                 electronicHorizonOptions:(nullable MBNNElectronicHorizonOptions *)electronicHorizonOptions
                                                  polling:(nullable MBNNPollingConfig *)polling
                                         incidentsOptions:(nullable MBNNIncidentsOptions *)incidentsOptions
                                noSignalSimulationEnabled:(nullable NSNumber *)noSignalSimulationEnabled
                                     avoidManeuverSeconds:(nullable NSNumber *)avoidManeuverSeconds
                                               useSensors:(nullable NSNumber *)useSensors;

/**
 * The threshold at which we will return a voice instruction after current progress has passed it.
 * Pass null to use default value.
 */
@property (nonatomic, readwrite, nullable) NSNumber *voiceInstructionThreshold;

@property (nonatomic, readwrite, nullable) MBNNElectronicHorizonOptions *electronicHorizonOptions;
/** configuration of status polling */
@property (nonatomic, readwrite, nullable) MBNNPollingConfig *polling;

/** configuration of Incidents Service */
@property (nonatomic, readwrite, nullable) MBNNIncidentsOptions *incidentsOptions;

/**
 * if `true` NN will try to simulate puck movement in case of no signal
 * default: `false` for automotive profile, `true` for mobile profile
 */
@property (nonatomic, readwrite, nullable) NSNumber *noSignalSimulationEnabled;

/**
 * Number of seconds that should pass for safety reasons before any new proposed maneuver.
 * This value is used to calcalate safe distance at the moment of request, hence actual timing may
 * differ due to e.g. significant current speed change during specified period. See Directions API
 * avoid_maneuver_radius parameter for details.
 * If unset or set to 0 then new maneuvers are not filtered out on proximity basis.
 */
@property (nonatomic, readwrite, nullable) NSNumber *avoidManeuverSeconds;

/**
 * Set to `true` to enable features relying on various sensors(accelerometer, gyroscope etc)
 * NB: setting it to `true` may break simulation based scenarios, because sensors cannot be mocked at the moment.
 * Default: false.
 */
@property (nonatomic, readwrite, nullable) NSNumber *useSensors;


@end
