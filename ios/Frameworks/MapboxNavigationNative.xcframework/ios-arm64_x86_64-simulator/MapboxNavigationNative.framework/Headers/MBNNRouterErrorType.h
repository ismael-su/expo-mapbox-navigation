// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRouterErrorType)
{
    MBNNRouterErrorTypeUnknown,
    MBNNRouterErrorTypeRequestCancelled,
    /** Error caused by too many requests to router. */
    MBNNRouterErrorTypeThrottlingError,
    /** Unsupported request arguments or URL parsing error */
    MBNNRouterErrorTypeInputError,
    /** Error which happened on network transport side. (Connection error, SSL error, Time out, etc.). */
    MBNNRouterErrorTypeNetworkError,
    /** Authentication error, check the access token / account */
    MBNNRouterErrorTypeAuthenticationError,
    /**
     * Critical errors from Router. Fallback to onboard router unsupported.
     * (NoRoute, NoSegment, NoChargersNearby)
     */
    MBNNRouterErrorTypeRouteCreationError
} NS_SWIFT_NAME(RouterErrorType);

NSString* MBNNRouterErrorTypeToString(MBNNRouterErrorType router_error_type);
