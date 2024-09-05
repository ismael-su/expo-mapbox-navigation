// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRouteAlternative;

NS_SWIFT_NAME(SetRoutesResult)
__attribute__((visibility ("default")))
@interface MBNNSetRoutesResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAlternatives:(nonnull NSArray<MBNNRouteAlternative *> *)alternatives;

/**
 * Additional information about alternative routes relative to the primary route.
 * Routes in the array will be in the same order as in the `SetRoutesParams.alternativeRoutes`.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNRouteAlternative *> *alternatives;


@end
