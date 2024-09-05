// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBNNRouteRefreshObserver;

NS_SWIFT_NAME(RouteRefreshControllerInterface)
@protocol MBNNRouteRefreshControllerInterface
/**
 * Adds an observer of refresh events (update, fail, cancel)
 * @param  observer  object with corresponding callbacks
 */
- (void)addObserverForObserver:(nonnull id<MBNNRouteRefreshObserver>)observer;
/**
 * Remove specified observer
 * @param  observer  object that was added by addObserver
 */
- (void)removeObserverForObserver:(nonnull id<MBNNRouteRefreshObserver>)observer;
/** Remove all observers that was added by addObserver */
- (void)removeAllObservers;
@end
