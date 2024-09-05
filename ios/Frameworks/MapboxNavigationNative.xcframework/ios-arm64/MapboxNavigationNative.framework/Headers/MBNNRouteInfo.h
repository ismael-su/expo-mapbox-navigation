// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNUpcomingRouteAlert;

NS_SWIFT_NAME(RouteInfo)
__attribute__((visibility ("default")))
@interface MBNNRouteInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAlerts:(nonnull NSArray<MBNNUpcomingRouteAlert *> *)alerts;

@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNUpcomingRouteAlert *> *alerts;

@end
