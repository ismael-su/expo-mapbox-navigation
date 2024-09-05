// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXDataRef;

/** variant ScreenshotFormat<data_ref, string> doen not work for iOS */
NS_SWIFT_NAME(ScreenshotFormat)
__attribute__((visibility ("default")))
@interface MBNNScreenshotFormat : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithJpeg:(nullable MBXDataRef *)jpeg
                              base64:(nullable NSString *)base64;

@property (nonatomic, readonly, nullable) MBXDataRef *jpeg;
@property (nonatomic, readonly, nullable, copy) NSString *base64;

@end
