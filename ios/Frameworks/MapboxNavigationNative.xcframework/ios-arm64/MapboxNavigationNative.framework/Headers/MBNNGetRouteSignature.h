// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNGetRouteOrigin.h>
#import <MapboxNavigationNative/MBNNGetRouteReason.h>

NS_SWIFT_NAME(GetRouteSignature)
__attribute__((visibility ("default")))
@interface MBNNGetRouteSignature : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithReason:(MBNNGetRouteReason)reason
                                origin:(MBNNGetRouteOrigin)origin
                               comment:(nonnull NSString *)comment;

@property (nonatomic, readonly) MBNNGetRouteReason reason;
@property (nonatomic, readonly) MBNNGetRouteOrigin origin;
@property (nonatomic, readonly, nonnull, copy) NSString *comment;

- (BOOL)isEqualToGetRouteSignature:(nonnull MBNNGetRouteSignature *)other;

@end
