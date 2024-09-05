// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdasisConfig;

NS_SWIFT_NAME(AdasisConfigBuilder)
__attribute__((visibility ("default")))
@interface MBNNAdasisConfigBuilder : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Returns default ADASIS v2 config. */
+ (nonnull MBNNAdasisConfig *)defaultOptions __attribute((ns_returns_retained));
/**
 * Builds adasis v2 configuration from JSON.
 * Example JSON:
 * ```   {
 * "cycleTimes": {
 * "metadataCycleOnStartMs": 100,
 * "metadataCycleSeconds": 5,
 * "positionCycleMs": 200
 * },
 * "dataSending": {
 * "messageBinaryFormat": "ADASISv2LE",
 * "messageIntervalMs": 80,
 * "messagesInPackage": 4,
 * "sortProfileshortsByOffset": true,
 * "sortProfilelongsByOffset": true,
 * "enableRetransmission": true
 * },
 * "pathsConfigs": {
 * "mpp": {
 * "stub": {
 * "enable": true,
 * "radiusMeters": 2000,
 * "repetitionMeters": 300
 * },
 * "segment": {
 * "enable": true,
 * "radiusMeters": 2000,
 * "repetitionMeters": 300
 * },
 * "profileshort": {
 * "enable": true,
 * "radiusMeters": 2000,
 * "repetitionMeters": 300,
 * "types": {
 * "slopeStep": false,
 * "slopeLinear": true,
 * "curvature": true,
 * "routeNumTypes": false,
 * "roadCondition": true,
 * "roadAccessibility": true,
 * "variableSpeedSign": false,
 * "headingChange": true
 * }
 * },
 * "profilelong": {
 * "enable": true,
 * "radiusMeters": 2000,
 * "repetitionMeters": 300,
 * "types": {
 * "lat": true,
 * "lon": true,
 * "alt": true,
 * "trafficSign": false,
 * "extendedLane": false
 * }
 * }
 * },
 * "level1": {
 * "stub": {
 * "enable": true,
 * "radiusMeters": 300,
 * "repetitionMeters": 0
 * },
 * "segment": {
 * "enable": true,
 * "radiusMeters": 500,
 * "repetitionMeters": 100
 * },
 * "profileshort": {
 * "enable": true,
 * "radiusMeters": 500,
 * "repetitionMeters": 200,
 * "types": {
 * "slopeStep": false,
 * "slopeLinear": true,
 * "curvature": true,
 * "routeNumTypes": false,
 * "roadCondition": true,
 * "roadAccessibility": true,
 * "variableSpeedSign": false,
 * "headingChange": true
 * }
 * },
 * "profilelong": {
 * "enable": true,
 * "radiusMeters": 300,
 * "repetitionMeters": 30,
 * "types": {
 * "lat": true,
 * "lon": true,
 * "alt": true,
 * "trafficSign": false,
 * "extendedLane": false
 * }
 * }
 * },
 * "level2": {
 * "stub": {
 * "enable": true,
 * "radiusMeters": 200,
 * "repetitionMeters": 0
 * },
 * "segment": {
 * "enable": true,
 * "radiusMeters": 300,
 * "repetitionMeters": 100
 * },
 * "profileshort": {
 * "enable": true,
 * "radiusMeters": 300,
 * "repetitionMeters": 200,
 * "types": {
 * "slopeStep": false,
 * "slopeLinear": true,
 * "curvature": true,
 * "routeNumTypes": false,
 * "roadCondition": true,
 * "roadAccessibility": true,
 * "variableSpeedSign": false,
 * "headingChange": true
 * }
 * },
 * "profilelong": {
 * "enable": false,
 * "radiusMeters": 200,
 * "repetitionMeters": 30,
 * "types": {
 * "lat": true,
 * "lon": true,
 * "alt": true,
 * "trafficSign": false,
 * "extendedLane": false
 * }
 * }
 * }
 * }
 * }
 * ```
 */
+ (nonnull MBNNAdasisConfig *)fromJsonForJson:(nonnull NSString *)json __attribute((ns_returns_retained));

@end
