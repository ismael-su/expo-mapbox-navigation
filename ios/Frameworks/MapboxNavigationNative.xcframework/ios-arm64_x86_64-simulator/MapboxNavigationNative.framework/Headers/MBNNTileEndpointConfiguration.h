// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(TileEndpointConfiguration)
__attribute__((visibility ("default")))
@interface MBNNTileEndpointConfiguration : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithHost:(nonnull NSString *)host
                             dataset:(nonnull NSString *)dataset
                             version:(nonnull NSString *)version
                          isFallback:(BOOL)isFallback
               versionBeforeFallback:(nonnull NSString *)versionBeforeFallback
minDiffInDaysToConsiderServerVersion:(nullable NSNumber *)minDiffInDaysToConsiderServerVersion;

/**
 * API routing tiles (ART) endpoint address (e.g. https://api.mapbox.com)
 * Could be one of the staging servers or api.mapbox.com (primarily for OSM now)
 * Various servers may have the info from different data providers.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *host;

/** Tile dataset to use when querying ART, for example 'mapbox/driving' */
@property (nonatomic, readonly, nonnull, copy) NSString *dataset;

/**
 * Version of the routing tiles on ART.
 * Usually it's a string associated with a date (e.g. 2020_07_03-03_00_00).
 * Available versions can be queried via ${host}/route-tiles/v1/versions?access_token=YOUR_TOKEN_HERE
 * [!] When empty, nav-native will try to determine the latest version through ART request itself.
 */
@property (nonatomic, readonly, nonnull, copy) NSString *version;

/** Are we in an off-line fallback mode? */
@property (nonatomic, readonly) BOOL isFallback;

/** Valid only if isFallback is true. Should indicate which version was before we switched to the fallback mode. Empty string means 'we use the auto versioning' */
@property (nonatomic, readonly, nonnull, copy) NSString *versionBeforeFallback;

/**
 * Minimum time in days between local version of tiles and latest on the server
 * to consider using the latest version of routing tiles from the server.
 * The parameter is applied only to the case with automatic version switching.
 * The main purpose of the parameter - ability to do update frequency throttling.
 * It also assumes there are regular update on the server side.
 * Default: 0
 */
@property (nonatomic, readonly, nullable) NSNumber *minDiffInDaysToConsiderServerVersion;


@end
