// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBNNBLEService;

NS_SWIFT_NAME(BLEServiceFactory)
__attribute__((visibility ("default")))
@interface MBNNBLEServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (void)setUserDefinedForCustom:(nullable id<MBNNBLEService>)custom;
+ (nonnull id<MBNNBLEService>)bleService __attribute((ns_returns_retained));

@end
