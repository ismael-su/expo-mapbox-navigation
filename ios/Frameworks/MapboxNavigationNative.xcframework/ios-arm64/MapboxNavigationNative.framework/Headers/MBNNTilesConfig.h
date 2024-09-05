// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNTileEndpointConfiguration;
@class MBXTileStore;

NS_SWIFT_NAME(TilesConfig)
__attribute__((visibility ("default")))
@interface MBNNTilesConfig : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithTilesPath:(nonnull NSString *)tilesPath
                                tileStore:(nullable MBXTileStore *)tileStore
                        inMemoryTileCache:(nullable NSNumber *)inMemoryTileCache
                          onDiskTileCache:(nullable NSNumber *)onDiskTileCache
                           endpointConfig:(nullable MBNNTileEndpointConfiguration *)endpointConfig;

/** Local directory with routing tiles for a cache. If empty, no tiles on disk will be read/written */
@property (nonatomic, readonly, nonnull, copy) NSString *tilesPath;

/** TileStore instance providing routing tiles */
@property (nonatomic, readonly, nullable) MBXTileStore *tileStore;

/** Advisory size of the peak memory use by routing tiles */
@property (nonatomic, readonly, nullable) NSNumber *inMemoryTileCache;

/** NOT SUPPORTED: Disk quota for routing tiles stored on the disk */
@property (nonatomic, readonly, nullable) NSNumber *onDiskTileCache;

/** API routing tiles configuration. If not set, no network requests will be made to ART */
@property (nonatomic, readonly, nullable) MBNNTileEndpointConfiguration *endpointConfig;


@end
