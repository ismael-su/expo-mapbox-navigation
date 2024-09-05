// This file is generated and will be overwritten automatically.

#import <MapboxNavigationNative/MBNNRouteParser.h>
#import <MapboxNavigationNative/MBNNRouteParserCallback_Internal.h>

@interface MBNNRouteParser ()
+ (nonnull MBXExpected<NSArray<id<MBNNRouteInterface>> *, NSString *> *)parseDirectionsResponseForResponse:(nonnull NSString *)response
                                                                                                   request:(nonnull NSString *)request
                                                                                               routeOrigin:(MBNNRouterOrigin)routeOrigin __attribute((ns_returns_retained)) __attribute__((deprecated));
+ (nonnull MBXExpected<NSArray<id<MBNNRouteInterface>> *, NSString *> *)parseDirectionsResponseForResponseDataRef:(nonnull MBXDataRef *)responseDataRef
                                                                                                          request:(nonnull NSString *)request
                                                                                                      routeOrigin:(MBNNRouterOrigin)routeOrigin __attribute((ns_returns_retained));
+ (void)parseDirectionsResponseForResponse:(nonnull NSString *)response
                                   request:(nonnull NSString *)request
                               routeOrigin:(MBNNRouterOrigin)routeOrigin
                                  callback:(nonnull MBNNRouteParserCallback)callback __attribute__((deprecated));
+ (void)parseDirectionsResponseForResponseDataRef:(nonnull MBXDataRef *)responseDataRef
                                          request:(nonnull NSString *)request
                                      routeOrigin:(MBNNRouterOrigin)routeOrigin
                                         callback:(nonnull MBNNRouteParserCallback)callback;
+ (nonnull MBXExpected<NSArray<id<MBNNRouteInterface>> *, NSString *> *)parseDirectionsRoutesForResponse:(nonnull NSString *)response
                                                                                                 request:(nonnull NSString *)request
                                                                                             routeOrigin:(MBNNRouterOrigin)routeOrigin __attribute((ns_returns_retained));
+ (void)parseDirectionsRoutesForResponse:(nonnull NSString *)response
                                 request:(nonnull NSString *)request
                             routeOrigin:(MBNNRouterOrigin)routeOrigin
                                callback:(nonnull MBNNRouteParserCallback)callback;
@end
