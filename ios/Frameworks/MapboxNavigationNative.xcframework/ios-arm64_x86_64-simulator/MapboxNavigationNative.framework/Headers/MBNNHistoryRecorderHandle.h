// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNDumpHistoryCallback.h>

@class MBNNConfigHandle;

/**
 * HistoryRecorder handle is used for history trace recording.
 * History recording is not started automatically, `startRecording()` method must be called to start it.
 * Current recording session is stopped by `stopRecording(...)` call.
 * startRecording()/stopRecording(...) can be called on any threads.
 * If it is desired to start a new history recording session right after `stopRecording(...)` is called - it is recommended
 * to call `startRecording()` right after the `stopRecording(...)` call in the same scope.
 * HistoryRecorder maintains "history context". The history context contains last "primary" events (`createNavigator`, `tilesVersionResolved`, `setRoute`, `changeRouteLeg`)
 * and last 30 events of other types. The "history context" allows to understand what was going on before the new recording session start.
 * The "history context" is prepended into the newly started recording session. A special `separator` event is used to separate the "contextual" events from the actual
 * history recording session events. If a history recording "session 1" is stopped and another "session 2" is started immediately -
 * the "session 2" recording will contain some events from "session 1" as context.
 */
NS_SWIFT_NAME(HistoryRecorderHandle)
__attribute__((visibility ("default")))
@interface MBNNHistoryRecorderHandle : NSObject

/**
 * Starts history recording session.
 * If history recording is already started - does nothing.
 * The new history recording session will contain "history context" - some events which occurred before the `startRecording()` was called.
 * These "history context" events will be separated with a special `separator` event from the actual session events.
 */
- (void)startRecording;
/**
 * Store history to the `historyFile` and run callback (asynchronous, non-blocking IO call).
 * If history recording was not started before - `DumpHistoryCallback()` will be called with `null` filepath.
 * A new recording session is not started automatically after this call, if it is required - need to call `startRecording()`,
 * it is recommended to do this right after the `stopRecording(...)` call in the same scope. Another option is
 * also possible - to call `startRecording()` inside the `DumpHistoryCallback` body, but the callback execution can be
 * delayed, and this can cause some events skipping (between stopRecording(...) and delayed startRecording() calls)
 * @param result    Callback which run when history already stored on a disk
 */
- (void)stopRecordingForResult:(nonnull MBNNDumpHistoryCallback)result;
/**
 * Adds a custom event to the navigators history. This can be useful to log things that
 * happen during navigation that are specific to your application.
 * @param  eventType  the event type in the events log for your custom even
 * @param  eventJson  the json to attach to the "properties" key of the event
 */
- (void)pushHistoryForEventType:(nonnull NSString *)eventType
                      eventJson:(nonnull NSString *)eventJson;
/**
 * @param historyDir Path to the directory where history files could be stored when `stopRecording(...)` is called.
 * It could be existing directory or new one.
 * @param config     Config created with `ConfigFactory`
 * Builds history recorder which can be re-used in other instances
 * Can return null if `historyDir` is empty or `historyDir` path is not a directory or HistoryRecorder couldn't create directory at `historyDir` path
 * using that path.
 */
+ (nullable MBNNHistoryRecorderHandle *)buildForHistoryDir:(nonnull NSString *)historyDir
                                                    config:(nonnull MBNNConfigHandle *)config __attribute((ns_returns_retained));
/**
 * Build composite history recorder that will be only forwarding events to hosting recorders.
 * Composite recorder will trigger DumpHistoryCallback for each instance of provided recorders during stopRecording call.
 * After building composite recorder you can call start/stopRecording for this composite recorder to start/stop all recorders
 * or call start/stopRecording for any recorder separately and this will affect only concrete recorders without any side effects
 * @param recorders  Recorders that will be receiving forwarded history events.
 * Can return null if `recorders` is empty or all of items are null
 */
+ (nullable MBNNHistoryRecorderHandle *)buildCompositeRecorderForRecorders:(nonnull NSArray<MBNNHistoryRecorderHandle *> *)recorders __attribute((ns_returns_retained));

@end
