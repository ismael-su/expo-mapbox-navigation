// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBNNIMUService;

NS_SWIFT_NAME(IMUServiceFactory)
__attribute__((visibility ("default")))
@interface MBNNIMUServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)setUserDefinedForCustom:(nullable id<MBNNIMUService>)custom;
+ (nonnull id<MBNNIMUService>)imuService __attribute((ns_returns_retained));

@end
