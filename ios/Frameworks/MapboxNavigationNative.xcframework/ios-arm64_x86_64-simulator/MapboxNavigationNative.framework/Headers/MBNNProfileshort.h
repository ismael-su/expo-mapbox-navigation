// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdasisConfigMessageOptions;
@class MBNNAdasisConfigProfileshortTypeOptions;

/**
 * PROFILE SHORT message options
 * options - common options for PROFILE SHORT message
 * types - options for each type of PROFILE SHORT message
 */
NS_SWIFT_NAME(Profileshort)
__attribute__((visibility ("default")))
@interface MBNNProfileshort : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithOptions:(nonnull MBNNAdasisConfigMessageOptions *)options
                                  types:(nonnull MBNNAdasisConfigProfileshortTypeOptions *)types;

@property (nonatomic, readonly, nonnull) MBNNAdasisConfigMessageOptions *options;
@property (nonatomic, readonly, nonnull) MBNNAdasisConfigProfileshortTypeOptions *types;

- (BOOL)isEqualToProfileshort:(nonnull MBNNProfileshort *)other;

@end
