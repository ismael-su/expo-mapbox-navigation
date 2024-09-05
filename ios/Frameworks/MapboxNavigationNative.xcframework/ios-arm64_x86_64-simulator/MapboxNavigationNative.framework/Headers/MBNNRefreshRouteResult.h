// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRouteAlternative;
@protocol MBNNRouteInterface;

NS_SWIFT_NAME(RefreshRouteResult)
__attribute__((visibility ("default")))
@interface MBNNRefreshRouteResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRoute:(nonnull id<MBNNRouteInterface>)route
                         alternatives:(nonnull NSArray<MBNNRouteAlternative *> *)alternatives;

/** Updated route. */
@property (nonatomic, readonly, nonnull) id<MBNNRouteInterface> route;

/** Alternative routes with recalculated `duration` info according to the new annotations. */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNRouteAlternative *> *alternatives;


@end
