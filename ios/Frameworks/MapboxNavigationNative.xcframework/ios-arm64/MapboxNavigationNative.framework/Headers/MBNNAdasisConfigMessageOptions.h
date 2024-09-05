// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Common message options
 * enable - if true, message of that type will be generated
 * radiusMeters - distance along EH path in meters, for which message will be generated
 */
NS_SWIFT_NAME(AdasisConfigMessageOptions)
__attribute__((visibility ("default")))
@interface MBNNAdasisConfigMessageOptions : NSObject

- (nonnull instancetype)init;

- (nonnull instancetype)initWithEnable:(BOOL)enable
                          radiusMeters:(uint32_t)radiusMeters;

@property (nonatomic, readonly) BOOL enable;
@property (nonatomic, readonly) uint32_t radiusMeters;

- (BOOL)isEqualToAdasisConfigMessageOptions:(nonnull MBNNAdasisConfigMessageOptions *)other;

@end
