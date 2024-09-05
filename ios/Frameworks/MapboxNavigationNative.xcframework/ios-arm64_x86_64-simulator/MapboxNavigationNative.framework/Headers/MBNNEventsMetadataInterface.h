// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNScreenshotCallback.h>

@class MBNNEventsMetadata;

/**
 * Clients must provide an implementation of EventsMetadataInterface to pass required metadata to
 * the telemetry subsystem. Implementation must be thread-safe.
 */
NS_SWIFT_NAME(EventsMetadataInterface)
@protocol MBNNEventsMetadataInterface
/** Pass EventsMetadata for filling the events properties */
- (nonnull MBNNEventsMetadata *)provideEventsMetadata;
/**
 * Make a screenshot, and provide in jpeg format to data_ref.
 * The screenshot may be provided as base64 string to avoid double-conversion.
 */
- (void)screenshotForCallback:(nonnull MBNNScreenshotCallback)callback;
@end
