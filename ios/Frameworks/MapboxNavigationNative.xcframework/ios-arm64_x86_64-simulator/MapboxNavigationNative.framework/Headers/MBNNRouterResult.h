// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RouterResult)
__attribute__((visibility ("default")))
@interface MBNNRouterResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithJson:(nonnull NSString *)json
                             success:(BOOL)success;

@property (nonatomic, readonly, nonnull, copy) NSString *json;
@property (nonatomic, readonly) BOOL success;

@end
