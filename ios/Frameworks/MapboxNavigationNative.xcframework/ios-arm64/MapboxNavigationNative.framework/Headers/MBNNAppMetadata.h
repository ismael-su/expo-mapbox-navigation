// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(AppMetadata)
__attribute__((visibility ("default")))
@interface MBNNAppMetadata : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                             version:(nonnull NSString *)version
                              userId:(nullable NSString *)userId
                           sessionId:(nullable NSString *)sessionId;

/** Application name */
@property (nonatomic, readonly, nonnull, copy) NSString *name;

/** Application version */
@property (nonatomic, readonly, nonnull, copy) NSString *version;

/**
 * Provide currently logged in user id to the telemetry.
 * If null, no userId will be reported in telemetry.
 */
@property (nonatomic, readonly, nullable, copy) NSString *userId;

/**
 * Provide current session id to the telemetry.
 * If null, no sessionId will be reported in telemetry.
 */
@property (nonatomic, readonly, nullable, copy) NSString *sessionId;


- (BOOL)isEqualToAppMetadata:(nonnull MBNNAppMetadata *)other;

@end
