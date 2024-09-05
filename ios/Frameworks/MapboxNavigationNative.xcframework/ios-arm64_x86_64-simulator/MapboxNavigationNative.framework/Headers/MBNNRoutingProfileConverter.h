// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRoutingProfile;

NS_SWIFT_NAME(RoutingProfileConverter)
__attribute__((visibility ("default")))
@interface MBNNRoutingProfileConverter : NSObject

+ (nonnull MBNNRoutingProfile *)toRoutingProfileForProfile:(nonnull NSString *)profile __attribute((ns_returns_retained));
+ (nonnull MBNNRoutingProfile *)toRoutingProfileForRoutingMode:(nonnull NSString *)routingMode
                                                       account:(nonnull NSString *)account __attribute((ns_returns_retained));
+ (nonnull NSString *)toStringForProfile:(nonnull MBNNRoutingProfile *)profile __attribute((ns_returns_retained));

@end
