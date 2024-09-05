// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Represents internal state of a trip session. In case of restarting Navigator without stopping and starting a trip session,
 * nav-native user must get the current internal state before destroying, and restore it after Navigator restart.
 */
NS_SWIFT_NAME(NavigationSessionState)
__attribute__((visibility ("default")))
@interface MBNNNavigationSessionState : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSerialized:(nonnull NSArray<NSNumber *> *)serialized;

@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *serialized;

@end
