// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNMapMatch;

NS_SWIFT_NAME(MapMatcherOutput)
__attribute__((visibility ("default")))
@interface MBNNMapMatcherOutput : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithMatches:(nonnull NSArray<MBNNMapMatch *> *)matches
                             isTeleport:(BOOL)isTeleport
                   totalCandidatesCount:(uint32_t)totalCandidatesCount;

/**
 * Probable user positions on the road graph sorted from the most probable to the least probable.
 * If map matcher failed or was not configured will be empty.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNMapMatch *> *matches;

/**
 * Returns true if map matcher changed its opinion about most probable path on last update.
 * In practice it means we don't need to animate puck movement from previous to current location
 * and just do "teleport".
 */
@property (nonatomic, readonly) BOOL isTeleport;

/** Total number of MM candidates including the low-probability ones */
@property (nonatomic, readonly) uint32_t totalCandidatesCount;


@end
