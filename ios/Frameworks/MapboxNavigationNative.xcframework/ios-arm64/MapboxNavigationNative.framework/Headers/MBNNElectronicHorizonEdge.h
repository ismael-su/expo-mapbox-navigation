// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ElectronicHorizonEdge)
__attribute__((visibility ("default")))
@interface MBNNElectronicHorizonEdge : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint64_t)id_
                             level:(uint8_t)level
                       probability:(double)probability
                         isOnRoute:(BOOL)isOnRoute
                               out:(nonnull NSArray<MBNNElectronicHorizonEdge *> *)out;

/** Edge id of the road graph (internal; don't confuse with wayId) */
@property (nonatomic, readonly) uint64_t id;

/**
 * The level of the Edge (0 being the mpp, 1 branches of the mpp,
 * 2 branches of level 1 branches, etc)
 */
@property (nonatomic, readonly) uint8_t level;

/** The probability for this edge in percentage */
@property (nonatomic, readonly) double probability;

/**
 * Whether this edge is on primary route used for active guidance.
 * Always false in free drive.
 */
@property (nonatomic, readonly) BOOL isOnRoute;

/**
 * The outgoing Edges.
 * NB: MPP can be splitted at some point if some of edges have low probability difference(+/- 0.05),
 * i.e. `out` can contain more than 1 edges with the level 0.
 * Currently we have a limitation for maximum 1 split per electronic horizon.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNElectronicHorizonEdge *> *out;


@end
