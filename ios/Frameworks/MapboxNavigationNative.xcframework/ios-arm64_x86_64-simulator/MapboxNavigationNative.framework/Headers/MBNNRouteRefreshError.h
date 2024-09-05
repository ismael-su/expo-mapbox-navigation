// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRouteRefreshErrorType.h>

NS_SWIFT_NAME(RouteRefreshError)
__attribute__((visibility ("default")))
@interface MBNNRouteRefreshError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMessage:(nonnull NSString *)message
                                   type:(MBNNRouteRefreshErrorType)type
                             refreshTtl:(nullable NSNumber *)refreshTtl;

@property (nonatomic, readonly, nonnull, copy) NSString *message;
@property (nonatomic, readonly) MBNNRouteRefreshErrorType type;
@property (nonatomic, readonly, nullable) NSNumber *refreshTtl;

- (BOOL)isEqualToRouteRefreshError:(nonnull MBNNRouteRefreshError *)other;

@end
