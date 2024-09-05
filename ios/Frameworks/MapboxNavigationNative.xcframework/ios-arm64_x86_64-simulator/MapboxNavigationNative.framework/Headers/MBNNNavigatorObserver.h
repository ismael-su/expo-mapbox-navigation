// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNNavigationStatusOrigin.h>

@class MBNNNavigationStatus;

NS_SWIFT_NAME(NavigatorObserver)
@protocol MBNNNavigatorObserver
/**
 * There are several cases when it can be called:
 * 1. After receiving new raw location via `updateLocation`
 * 2. After transition to active guidance via `setRoute/changeRouteLeg` methods (at least one raw location should be received before)
 * 3. Unconditionally if we have no raw locations for some significant amount of time (controlled via `unconditionalStatusPollingPatienceSeconds` and `unconditionalStatusPollingIntervalSeconds` fields in config)
 *
 * The call is scheduled using the `common::Scheduler` of the thread calling the `Navigator` constructor,
 * so it should be executed on the caller thread scheduler.
 * `common::Scheduler::GetCurrent()` is used for the scheduler getting, it must work on the caller thread.
 */
- (void)onStatusForOrigin:(MBNNNavigationStatusOrigin)origin
                   status:(nonnull MBNNNavigationStatus *)status;
@end
