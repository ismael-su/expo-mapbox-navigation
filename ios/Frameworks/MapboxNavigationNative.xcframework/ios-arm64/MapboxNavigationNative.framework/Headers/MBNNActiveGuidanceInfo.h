// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNActiveGuidanceProgress;

NS_SWIFT_NAME(ActiveGuidanceInfo)
__attribute__((visibility ("default")))
@interface MBNNActiveGuidanceInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRouteProgress:(nonnull MBNNActiveGuidanceProgress *)routeProgress
                                  legProgress:(nonnull MBNNActiveGuidanceProgress *)legProgress
                                 stepProgress:(nonnull MBNNActiveGuidanceProgress *)stepProgress;

/** Progress of current route */
@property (nonatomic, readonly, nonnull) MBNNActiveGuidanceProgress *routeProgress;

/** Progress of current leg */
@property (nonatomic, readonly, nonnull) MBNNActiveGuidanceProgress *legProgress;

/** Progress of current step */
@property (nonatomic, readonly, nonnull) MBNNActiveGuidanceProgress *stepProgress;


@end
