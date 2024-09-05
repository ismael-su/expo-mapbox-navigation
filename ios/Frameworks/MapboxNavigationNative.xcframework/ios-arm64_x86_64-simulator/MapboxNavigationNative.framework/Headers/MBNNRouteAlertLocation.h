// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXGeometry;

/** can be returned from Route Alerts API */
NS_SWIFT_NAME(RouteAlertLocation)
__attribute__((visibility ("default")))
@interface MBNNRouteAlertLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** raw shape */
- (nonnull MBXGeometry *)getShape __attribute((ns_returns_retained));

@end
