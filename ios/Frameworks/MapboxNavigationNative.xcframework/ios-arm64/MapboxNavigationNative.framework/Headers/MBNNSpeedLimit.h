// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNSpeedLimitSign.h>
#import <MapboxNavigationNative/MBNNSpeedLimitUnit.h>

NS_SWIFT_NAME(SpeedLimit)
__attribute__((visibility ("default")))
@interface MBNNSpeedLimit : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSpeed:(nullable NSNumber *)speed
                           localeUnit:(MBNNSpeedLimitUnit)localeUnit
                           localeSign:(MBNNSpeedLimitSign)localeSign;

/**
 * Speed in the units defined by localeUnit
 *  `nullopt` for unknown speed limit
 *  0 for unlimited speed
 */
@property (nonatomic, readonly, nullable) NSNumber *speed;

/** default unit */
@property (nonatomic, readonly) MBNNSpeedLimitUnit localeUnit;

/** default sign */
@property (nonatomic, readonly) MBNNSpeedLimitSign localeSign;


- (BOOL)isEqualToSpeedLimit:(nonnull MBNNSpeedLimit *)other;

@end
