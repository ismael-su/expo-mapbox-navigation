// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNCacheHandle;
@class MBXTilesetDescriptor;

NS_SWIFT_NAME(TilesetDescriptorFactory)
__attribute__((visibility ("default")))
@interface MBNNTilesetDescriptorFactory : NSObject

/**
 * Creates TilesetDescriptor using the specified `dataset` and `version` resolved initially.
 * @param dataset       TilesetDescriptor dataset name
 * @param version       TilesetDescriptor version
 */
+ (nonnull MBXTilesetDescriptor *)buildForDataset:(nonnull NSString *)dataset
                                          version:(nonnull NSString *)version __attribute((ns_returns_retained));
/**
 * Gets TilesetDescriptor which corresponds to current Navigator dataset and the specified `version`.
 * @param cache         cache created with `CacheFactory`
 * @param version       TilesetDescriptor version
 */
+ (nonnull MBXTilesetDescriptor *)getSpecificVersionForCache:(nonnull MBNNCacheHandle *)cache
                                                     version:(nonnull NSString *)version __attribute((ns_returns_retained));
/**
 * Gets TilesetDescriptor which corresponds to the latest availble version of routing tiles.
 * Intended for using when creating off-line tile packs.
 * @param cache         cache created with `CacheFactory`
 */
+ (nonnull MBXTilesetDescriptor *)getLatestForCache:(nonnull MBNNCacheHandle *)cache __attribute((ns_returns_retained));

@end
