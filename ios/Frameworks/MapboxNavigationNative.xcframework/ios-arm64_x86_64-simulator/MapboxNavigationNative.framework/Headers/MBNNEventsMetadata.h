// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNAudioType.h>

@class MBNNAppMetadata;

/**
 * Describes metadata for the telemetry events provided by the client,
 * using EventsMetadataInterface
 */
NS_SWIFT_NAME(EventsMetadata)
__attribute__((visibility ("default")))
@interface MBNNEventsMetadata : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithVolumeLevel:(nullable NSNumber *)volumeLevel
                                  audioType:(nullable NSNumber *)audioType
                           screenBrightness:(nullable NSNumber *)screenBrightness
                    percentTimeInForeground:(nullable NSNumber *)percentTimeInForeground
                      percentTimeInPortrait:(nullable NSNumber *)percentTimeInPortrait
                           batteryPluggedIn:(nullable NSNumber *)batteryPluggedIn
                               batteryLevel:(nullable NSNumber *)batteryLevel
                               connectivity:(nonnull NSString *)connectivity
                                appMetadata:(nullable MBNNAppMetadata *)appMetadata;

/** The volume level in the percentages(range is *0..100*) */
@property (nonatomic, readonly, nullable) NSNumber *volumeLevel;

/** Current AudioType */
@property (nonatomic, readonly, nullable) NSNumber *audioType;

/** The screen brightness in range *0..100* */
@property (nonatomic, readonly, nullable) NSNumber *screenBrightness;

/** Calculated percentage time application if foreground (range *0..100*) */
@property (nonatomic, readonly, nullable) NSNumber *percentTimeInForeground;

/** Calculated percentage time application if portrait (range *0..100*) */
@property (nonatomic, readonly, nullable) NSNumber *percentTimeInPortrait;

/** True if the device is currently plugged in to an external power source, othewise False. */
@property (nonatomic, readonly, nullable) NSNumber *batteryPluggedIn;

/** The battery level of the device (range *0..100*). */
@property (nonatomic, readonly, nullable) NSNumber *batteryLevel;

/** The connectivity type */
@property (nonatomic, readonly, nonnull, copy) NSString *connectivity;

/** The AppMetadata for the telemetry */
@property (nonatomic, readonly, nullable) MBNNAppMetadata *appMetadata;


- (BOOL)isEqualToEventsMetadata:(nonnull MBNNEventsMetadata *)other;

@end
