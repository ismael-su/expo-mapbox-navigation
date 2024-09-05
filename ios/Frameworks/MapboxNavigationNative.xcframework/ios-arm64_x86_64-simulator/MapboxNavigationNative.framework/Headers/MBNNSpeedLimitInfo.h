// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNSpeedLimitType.h>
#import <MapboxNavigationNative/MBNNSpeedLimitUnit.h>

@class MBNNSpeedLimitRestriction;

/** Edge Speed limit info information */
NS_SWIFT_NAME(SpeedLimitInfo)
__attribute__((visibility ("default")))
@interface MBNNSpeedLimitInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithValue:(uint32_t)value
                                 unit:(MBNNSpeedLimitUnit)unit
                                 type:(MBNNSpeedLimitType)type
                          restriction:(nonnull MBNNSpeedLimitRestriction *)restriction;

/** Speed limit value in specified units */
@property (nonatomic, readonly) uint32_t value;

/** Speed limit unit */
@property (nonatomic, readonly) MBNNSpeedLimitUnit unit;

/** Type of Speed Limit from its source perspective: implicit or explicit */
@property (nonatomic, readonly) MBNNSpeedLimitType type;

/** Speed limit restriction info (see SpeedLimitRestriction) */
@property (nonatomic, readonly, nonnull) MBNNSpeedLimitRestriction *restriction;


- (BOOL)isEqualToSpeedLimitInfo:(nonnull MBNNSpeedLimitInfo *)other;

@end
