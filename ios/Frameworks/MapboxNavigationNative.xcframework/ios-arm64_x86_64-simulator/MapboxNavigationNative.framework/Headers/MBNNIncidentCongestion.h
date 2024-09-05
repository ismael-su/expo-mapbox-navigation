// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNIncidentCongestionDescription.h>

NS_SWIFT_NAME(IncidentCongestion)
__attribute__((visibility ("default")))
@interface MBNNIncidentCongestion : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithValue:(nullable NSNumber *)value
                          description:(MBNNIncidentCongestionDescription)description;

/** value of congestion: 0-100 */
@property (nonatomic, readonly, nullable) NSNumber *value;

/** description of incident congestion */
@property (nonatomic, readonly) MBNNIncidentCongestionDescription description;


- (BOOL)isEqualToIncidentCongestion:(nonnull MBNNIncidentCongestion *)other;

@end
