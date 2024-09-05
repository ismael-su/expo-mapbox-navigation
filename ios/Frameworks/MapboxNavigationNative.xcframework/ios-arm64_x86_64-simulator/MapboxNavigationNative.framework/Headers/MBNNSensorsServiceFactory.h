// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBNNSensorsService;

NS_SWIFT_NAME(SensorsServiceFactory)
__attribute__((visibility ("default")))
@interface MBNNSensorsServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull id<MBNNSensorsService>)sensorsService __attribute((ns_returns_retained));

@end
