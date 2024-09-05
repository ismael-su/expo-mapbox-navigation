// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRerouteCallback_Internal.h>

NS_SWIFT_NAME(RerouteControllerInterface)
@protocol MBNNRerouteControllerInterface
- (void)rerouteForUrl:(nonnull NSString *)url
             callback:(nonnull MBNNRerouteCallback)callback;
- (void)cancel;
@end
