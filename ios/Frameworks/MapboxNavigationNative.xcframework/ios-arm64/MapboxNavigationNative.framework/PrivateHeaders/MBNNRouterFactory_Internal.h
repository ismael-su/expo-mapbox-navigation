// This file is generated and will be overwritten automatically.

#import <MapboxNavigationNative/MBNNRouterFactory.h>

@interface MBNNRouterFactory ()
+ (nonnull id<MBNNRouterInterface>)buildForType:(MBNNRouterType)type
                                          cache:(nonnull MBNNCacheHandle *)cache
                                         config:(nonnull MBNNConfigHandle *)config
                                historyRecorder:(nullable MBNNHistoryRecorderHandle *)historyRecorder __attribute((ns_returns_retained));
@end
