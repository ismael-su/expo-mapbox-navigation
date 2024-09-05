// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Alerts service extracts information from the road graph and helps track it
 * through eHorizon. Options control how we do it and what objects we collect.
 *
 * Some objects take significant effort to extract and thus developers should
 * have a choice not to pay this overhead if they don't need ot use these objects.
 */
NS_SWIFT_NAME(AlertsServiceOptions)
__attribute__((visibility ("default")))
@interface MBNNAlertsServiceOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCollectTunnels:(nullable NSNumber *)collectTunnels
                                collectBridges:(nullable NSNumber *)collectBridges
                        collectRestrictedAreas:(nullable NSNumber *)collectRestrictedAreas
                           collectMergingAreas:(nullable NSNumber *)collectMergingAreas
                           collectServiceAreas:(nullable NSNumber *)collectServiceAreas;

@property (nonatomic, readonly, nullable) NSNumber *collectTunnels;
@property (nonatomic, readonly, nullable) NSNumber *collectBridges;
@property (nonatomic, readonly, nullable) NSNumber *collectRestrictedAreas;
@property (nonatomic, readonly, nullable) NSNumber *collectMergingAreas;
@property (nonatomic, readonly, nullable) NSNumber *collectServiceAreas;

@end
