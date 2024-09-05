// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(GetRouteOptions)
__attribute__((visibility ("default")))
@interface MBNNGetRouteOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithTimeoutSeconds:(nullable NSNumber *)timeoutSeconds;

/**
 *  Timeout defines how long, in seconds, the request is allowed to take in total (including connecting to the host).
 *  Zero is meaning no timeout. Empty (nullopt) is meaning default timeout from the configuration.
 */
@property (nonatomic, readonly, nullable) NSNumber *timeoutSeconds;


- (BOOL)isEqualToGetRouteOptions:(nonnull MBNNGetRouteOptions *)other;

@end
