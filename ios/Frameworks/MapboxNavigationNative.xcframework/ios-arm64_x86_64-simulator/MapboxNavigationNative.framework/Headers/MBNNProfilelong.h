// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdasisConfigMessageOptions;
@class MBNNAdasisConfigProfilelongTypeOptions;

/**
 * PROFILE LONG message options
 * options - common options for PROFILE LONG message
 * types - options for each type of PROFILE LONG message
 */
NS_SWIFT_NAME(Profilelong)
__attribute__((visibility ("default")))
@interface MBNNProfilelong : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithOptions:(nonnull MBNNAdasisConfigMessageOptions *)options
                                  types:(nonnull MBNNAdasisConfigProfilelongTypeOptions *)types;

@property (nonatomic, readonly, nonnull) MBNNAdasisConfigMessageOptions *options;
@property (nonatomic, readonly, nonnull) MBNNAdasisConfigProfilelongTypeOptions *types;

- (BOOL)isEqualToProfilelong:(nonnull MBNNProfilelong *)other;

@end
