// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdasisConfigDataSending;
@class MBNNAdasisConfigPathOptions;

/**
 * Configuration of ADASISv2 feature. Can be created with AdasisConfigBuilder.
 * Note: check ElectronicHorizonOptions for MPP calculation configuration.
 * Note: message generation distance thresholds are limited with the configured maximal length of EH
 */
NS_SWIFT_NAME(AdasisConfig)
__attribute__((visibility ("default")))
@interface MBNNAdasisConfig : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDataSending:(nonnull MBNNAdasisConfigDataSending *)dataSending
                                pathOptions:(nonnull MBNNAdasisConfigPathOptions *)pathOptions;

@property (nonatomic, readonly, nonnull) MBNNAdasisConfigDataSending *dataSending;
@property (nonatomic, readonly, nonnull) MBNNAdasisConfigPathOptions *pathOptions;

- (BOOL)isEqualToAdasisConfig:(nonnull MBNNAdasisConfig *)other;

@end
