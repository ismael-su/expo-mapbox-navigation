// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNConfigHandle;
@class MBNNNavigatorConfig;
@class MBNNSettingsProfile;

NS_SWIFT_NAME(ConfigFactory)
__attribute__((visibility ("default")))
@interface MBNNConfigFactory : NSObject

/**
 * @param profile       Indication for a settings profile for default
 * @param config        Config with well-established parameters suitable for most of the users
 * @param customConfig  JSON with parameters that may override some defaults from a profile
 */
+ (nonnull MBNNConfigHandle *)buildForProfile:(nonnull MBNNSettingsProfile *)profile
                                       config:(nonnull MBNNNavigatorConfig *)config
                                 customConfig:(nonnull NSString *)customConfig __attribute((ns_returns_retained));

@end
