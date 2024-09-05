// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNCacheDataDomain.h>

NS_SWIFT_NAME(PredictiveCacheControllerOptions)
__attribute__((visibility ("default")))
@interface MBNNPredictiveCacheControllerOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithVersion:(nonnull NSString *)version
                                dataset:(nonnull NSString *)dataset
                             dataDomain:(MBNNCacheDataDomain)dataDomain
                            concurrency:(uint32_t)concurrency
       maxAverageDownloadBytesPerSecond:(uint64_t)maxAverageDownloadBytesPerSecond;

/** Tile version. */
@property (nonatomic, readonly, nonnull, copy) NSString *version;

/** Tile dataset. */
@property (nonatomic, readonly, nonnull, copy) NSString *dataset;

/** Data domain for the tiles to work with (maps, navigation) */
@property (nonatomic, readonly) MBNNCacheDataDomain dataDomain;

/**
 * Maximal number of requests to load tiles running in parallel.
 * Default: 0 - internal default value will be used for concurrency.
 */
@property (nonatomic, readonly) uint32_t concurrency;

/**
 * Max (average) tile download bandwidth (bytes per second).
 * "average" here means that it is impossible to really limit the tile download bandwidth,
 * but if some amount of tiles is already downloaded - we can delay new tile requests to respect this parameter,
 * so "in average" by time this bandwidth limit is meaningful.
 * Default: 0 - tile download is not limited by bandwidth.
 */
@property (nonatomic, readonly) uint64_t maxAverageDownloadBytesPerSecond;


@end
