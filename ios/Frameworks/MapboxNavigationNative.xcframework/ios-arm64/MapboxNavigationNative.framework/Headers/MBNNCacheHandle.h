// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRoadGraphUpdateAvailabilityCallback.h>
#import <MapboxNavigationNative/MBNNRoadGraphVersionInfoCallback.h>

NS_SWIFT_NAME(CacheHandle)
__attribute__((visibility ("default")))
@interface MBNNCacheHandle : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Async check if a road graph data update is available.
 * We determine the road graph version on the cache creation.
 * The next time a cache is created, it will also discover this version
 * and pick it up if automatic version switching is used.
 *
 * The check is guaranteed to take less than 5 seconds (default) and returns false in case of timeout.
 */
- (void)isRoadGraphDataUpdateAvailableForCallback:(nonnull MBNNRoadGraphUpdateAvailabilityCallback)callback;
/**
 * Retrieves current road graph version asynchronously.
 * The road graph version is determined on the cache creation
 * and stays the same throughout the whole navigator lifecycle.
 *
 * The retrieval process waits for the tiles config to resolve which may take some indefinite amount of time.
 * Once the version is resolved, the consequent calls should be almost instant.
 *
 * `timeout`: in seconds.
 * When the value is provided, the callback is guaranteed to return during this period.
 * No timeout means infinite value(i.e. wait until result).
 */
- (void)getCurrentRoadGraphVersionInfoForCallback:(nonnull MBNNRoadGraphVersionInfoCallback)callback
                                          timeout:(nullable NSNumber *)timeout;

@end
