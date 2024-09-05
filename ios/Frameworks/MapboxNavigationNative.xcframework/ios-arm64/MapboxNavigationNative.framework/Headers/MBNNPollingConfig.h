// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(PollingConfig)
__attribute__((visibility ("default")))
@interface MBNNPollingConfig : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLookAhead:(nullable NSNumber *)lookAhead
                    unconditionalPatience:(nullable NSNumber *)unconditionalPatience
                    unconditionalInterval:(nullable NSNumber *)unconditionalInterval;

/** How much time in seconds we should look ahead in case of `getStatus` polling. Default is 1.0. */
@property (nonatomic, readwrite, nullable) NSNumber *lookAhead;

/** If we didn't receive any new location for `unconditionalPatience` seconds we will start poll `getStatus` unconditionally. Default is 2.0. */
@property (nonatomic, readwrite, nullable) NSNumber *unconditionalPatience;

/** Interval of unconditional status polling in seconds. Default is 1.0. */
@property (nonatomic, readwrite, nullable) NSNumber *unconditionalInterval;


@end
