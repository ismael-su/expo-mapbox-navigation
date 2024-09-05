// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNGate;

/**
 * Represents the current distance to a road object of type "SubGraph".
 * The structure is immutable, to get an updated info you should get a new instance of the info
 * via ElectronicHorizonObserver.
 */
NS_SWIFT_NAME(SubGraphDistanceInfo)
__attribute__((visibility ("default")))
@interface MBNNSubGraphDistanceInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithInside:(BOOL)inside
                             entrances:(nonnull NSArray<MBNNGate *> *)entrances
                                 exits:(nonnull NSArray<MBNNGate *> *)exits;

/** `true` if position is inside subgraph, `false` otherwise */
@property (nonatomic, readonly) BOOL inside;

/**
 * Distances to particular entrances, sorted by probability. Might be empty
 * in the case when the subgarph is very large and no entry could be
 * detected using most likely path.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNGate *> *entrances;

/**
 * Distances to particular exits, sorted by probability.  Might be empty in
 * the case when the subgraph is very large and no exit could be detected
 * using most probable path.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNGate *> *exits;


@end
