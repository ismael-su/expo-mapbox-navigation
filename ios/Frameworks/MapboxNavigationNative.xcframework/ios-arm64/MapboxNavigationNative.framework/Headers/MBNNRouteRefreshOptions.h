// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRoutingProfile;

NS_SWIFT_NAME(RouteRefreshOptions)
__attribute__((visibility ("default")))
@interface MBNNRouteRefreshOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequestId:(nonnull NSString *)requestId
                               routeIndex:(uint32_t)routeIndex
                                 legIndex:(uint32_t)legIndex
                           routingProfile:(nonnull MBNNRoutingProfile *)routingProfile
                                  baseURL:(nonnull NSString *)baseURL
                currentRouteGeometryIndex:(nullable NSNumber *)currentRouteGeometryIndex
                         additionalParams:(nonnull NSDictionary<NSString *, NSString *> *)additionalParams;

/** A uuid specifying the request containing the route being refreshed */
@property (nonatomic, readonly, nonnull, copy) NSString *requestId;

/** The index of the specified route */
@property (nonatomic, readonly) uint32_t routeIndex;

/** The index of the leg to start the refresh response (inclusive) */
@property (nonatomic, readonly) uint32_t legIndex;

/** The routing profile to use. Possible values are driving-traffic, driving, walking, or cycling with account name */
@property (nonatomic, readonly, nonnull) MBNNRoutingProfile *routingProfile;

/** Base URL for route refresh requests, usually the same as routing endpoint URL */
@property (nonatomic, readonly, nonnull, copy) NSString *baseURL;

/**
 * Describes which geometry index the user currently is located at.
 * If this is supplied, the refresh-api only returns the segment following this geometry index.
 * The index is specified in relation to the `route.geometry` property in the route response.
 */
@property (nonatomic, readonly, nullable) NSNumber *currentRouteGeometryIndex;

/**
 * Additional uri params for route refresh request. For example for EV route refresh:
 * {{'engine': 'electric'}, {'ev_initial_charge': '5000'}, {'energy_consumption_curve': '0,300;20,160;80,140;120,180'}}
 */
@property (nonatomic, readonly, nonnull, copy) NSDictionary<NSString *, NSString *> *additionalParams;


- (BOOL)isEqualToRouteRefreshOptions:(nonnull MBNNRouteRefreshOptions *)other;

@end
