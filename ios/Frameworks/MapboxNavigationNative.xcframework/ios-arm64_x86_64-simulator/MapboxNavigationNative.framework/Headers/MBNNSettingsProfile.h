// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNProfileApplication.h>
#import <MapboxNavigationNative/MBNNProfilePlatform.h>

NS_SWIFT_NAME(SettingsProfile)
__attribute__((visibility ("default")))
@interface MBNNSettingsProfile : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithApplication:(MBNNProfileApplication)application
                                   platform:(MBNNProfilePlatform)platform;

@property (nonatomic, readonly) MBNNProfileApplication application;
@property (nonatomic, readonly) MBNNProfilePlatform platform;

@end
