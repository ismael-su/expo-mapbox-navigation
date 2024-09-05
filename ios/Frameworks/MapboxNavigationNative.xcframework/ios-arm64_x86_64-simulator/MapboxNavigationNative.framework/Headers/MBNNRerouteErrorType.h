// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRerouteErrorType)
{
    MBNNRerouteErrorTypeUnknown,
    /** Error from router */
    MBNNRerouteErrorTypeRouterError,
    /** Cancelled by observer or by calling RerouteControllerInterface#cancel() */
    MBNNRerouteErrorTypeCancelled,
    /** No routes or RerouteController in Navigator */
    MBNNRerouteErrorTypeNoRoutesOrController,
    /** Build reroute uri error */
    MBNNRerouteErrorTypeBuildUriError,
    /** Another reroute in progress */
    MBNNRerouteErrorTypeRerouteInProgress
} NS_SWIFT_NAME(RerouteErrorType);
