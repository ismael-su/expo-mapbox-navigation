// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRouterOrigin.h>
#import <MapboxNavigationNative/MBNNSetRoutesReason.h>

NS_SWIFT_NAME(SetRouteHistoryRecord)
__attribute__((visibility ("default")))
@interface MBNNSetRouteHistoryRecord : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRouteResponse:(nullable NSString *)routeResponse
                                   routeIndex:(uint32_t)routeIndex
                                     legIndex:(uint32_t)legIndex
                                 routeRequest:(nullable NSString *)routeRequest
                                       origin:(MBNNRouterOrigin)origin
                                       reason:(MBNNSetRoutesReason)reason
                                      routeId:(nullable NSString *)routeId;

/** route response's json, will be null in case if route was reset */
@property (nonatomic, readonly, nullable, copy) NSString *routeResponse;

@property (nonatomic, readonly) uint32_t routeIndex;
@property (nonatomic, readonly) uint32_t legIndex;
@property (nonatomic, readonly, nullable, copy) NSString *routeRequest;
@property (nonatomic, readonly) MBNNRouterOrigin origin;
@property (nonatomic, readonly) MBNNSetRoutesReason reason;
@property (nonatomic, readonly, nullable, copy) NSString *routeId;

@end
