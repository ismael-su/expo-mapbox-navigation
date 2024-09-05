// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNBillingProductType.h>

@class MBNNCacheHandle;
@class MBNNConfigHandle;
@class MBNNHistoryRecorderHandle;
@class MBNNTilesConfig;

NS_SWIFT_NAME(CacheFactory)
__attribute__((visibility ("default")))
@interface MBNNCacheFactory : NSObject

/**
 * Builds which can be re-used in various instances
 * @param tilesConfig     Configuration for tiles host, version, cache folder etc.
 * @param config          Config created with `ConfigFactory`
 * @param historyRecorder History recorder created with `HistoryRecorderHandle.build` method
 * @param frameworkTypeForSKU          Core Framework or UX Framework, for right billing
 */
+ (nonnull MBNNCacheHandle *)buildForTilesConfig:(nonnull MBNNTilesConfig *)tilesConfig
                                          config:(nonnull MBNNConfigHandle *)config
                                 historyRecorder:(nullable MBNNHistoryRecorderHandle *)historyRecorder
                             frameworkTypeForSKU:(MBNNBillingProductType)frameworkTypeForSKU __attribute((ns_returns_retained));

@end
