// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Eventually will transform to `variant NotificationDetails <NotificationDetailsViolation, ...>`
 *  Note that some or all fields may be empty.
 */
NS_SWIFT_NAME(NotificationDetails)
__attribute__((visibility ("default")))
@interface MBNNNotificationDetails : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequestedValue:(nonnull NSString *)requestedValue
                                   actualValue:(nonnull NSString *)actualValue
                                          unit:(nonnull NSString *)unit
                                       message:(nonnull NSString *)message;

@property (nonatomic, readonly, nonnull, copy) NSString *requestedValue;
@property (nonatomic, readonly, nonnull, copy) NSString *actualValue;
@property (nonatomic, readonly, nonnull, copy) NSString *unit;
@property (nonatomic, readonly, nonnull, copy) NSString *message;

- (BOOL)isEqualToNotificationDetails:(nonnull MBNNNotificationDetails *)other;

@end
