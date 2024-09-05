// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNOuterDeviceAction.h>
#import <MapboxNavigationNative/MBNNUserFeedbackCallback_Internal.h>

@class MBNNUserFeedback;
@class MBNNUserFeedbackHandle;
@class MBNNUserFeedbackMetadata;

NS_SWIFT_NAME(Telemetry)
@protocol MBNNTelemetry
/**
 * Send custom telemetry event. The custom event is intended to be used by platform sdks to test hypotheses,
 * send a temporary events. So type is not specified, it's up to the platforms needs.
 *
 * @param type     type of custom event
 * @param version  version of the custom event
 * @param payload  payload of custom event, in JSON format
 */
- (void)postTelemetryCustomEventForType:(nonnull NSString *)type
                                version:(nonnull NSString *)version
                                payload:(nullable NSString *)payload;
/**
 * Send outer device telemetry event whenever an outer device is connected or disconnected
 *
 * @param action   value of OuterDeviceAction enum
 */
- (void)postOuterDeviceEventForAction:(MBNNOuterDeviceAction)action;
/**
 * Starts building user feedback metadata which can be send later using `postUserFeedback(...)`
 * The built metadata is provided using the returned UserFeedbackHandle
 *
 * Scenario: When a user arrives somewhere, they are given the "leave feedback" screen.
 * SDK must call `startBuildUserFeedbackMetadata`. It collects just passed locations, route step
 * if applicable and starts collecting location after the event.
 * After that the Navigator may be potentially restarted, and the feedback should not be lost.
 * The application then may take a screenshot, do other things, and all this comes
 * in a bunch to `postUserFeedback`.
 * This covers the relevance of the last waypoints,
 * because the user can go somewhere else immediately after finding the buttons,
 * and then, while screenshots and other data fall out, the last waypoints may be irrelevant
 * if `startBuildUserFeedbackMetadata` called not the right time.
 */
- (nonnull MBNNUserFeedbackHandle *)startBuildUserFeedbackMetadata;
- (void)postUserFeedbackForFeedbackMetadata:(nonnull MBNNUserFeedbackMetadata *)feedbackMetadata
                               userFeedback:(nonnull MBNNUserFeedback *)userFeedback
                                   callback:(nonnull MBNNUserFeedbackCallback)callback;
@end
