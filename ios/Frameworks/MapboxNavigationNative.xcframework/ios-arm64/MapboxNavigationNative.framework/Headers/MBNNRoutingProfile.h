// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRoutingMode.h>

NS_SWIFT_NAME(RoutingProfile)
__attribute__((visibility ("default")))
@interface MBNNRoutingProfile : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMode:(MBNNRoutingMode)mode
                             account:(nonnull NSString *)account;

@property (nonatomic, readonly) MBNNRoutingMode mode;
@property (nonatomic, readonly, nonnull, copy) NSString *account;

- (BOOL)isEqualToRoutingProfile:(nonnull MBNNRoutingProfile *)other;

@end
