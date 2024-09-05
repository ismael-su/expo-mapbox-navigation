// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNForceRerouteCallback_Internal.h>

NS_SWIFT_NAME(RerouteDetectorInterface)
@protocol MBNNRerouteDetectorInterface
- (void)forceReroute;
- (void)forceRerouteForCallback:(nonnull MBNNForceRerouteCallback)callback;
- (BOOL)isReroute;
@end
