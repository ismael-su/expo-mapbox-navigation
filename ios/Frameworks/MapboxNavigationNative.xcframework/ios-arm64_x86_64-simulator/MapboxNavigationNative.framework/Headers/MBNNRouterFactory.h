// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRouterType.h>

@class MBNNCacheHandle;
@class MBNNConfigHandle;
@class MBNNHistoryRecorderHandle;
@protocol MBNNRouterInterface;

/**
 * Constructs router object with given dependencies
 * @param `type` indicate which kind of router should be created
 * @param `cache` cache created with `CacheFactory`
 * @param `config` config created with `ConfigFactory`
 * @param `historyRecorder` history recorder created with `HistoryRecorderHandle::build()` method
 */
NS_SWIFT_NAME(RouterFactory)
__attribute__((visibility ("default")))
@interface MBNNRouterFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;


@end
