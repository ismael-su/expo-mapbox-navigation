// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNGate;

/**
 * Represents the current distance to a road object of type "Polygon".
 * The structure is immutable, to get an updated info you should get a new instance of the info
 * via ElectronicHorizonObserver.
 */
NS_SWIFT_NAME(PolygonDistanceInfo)
__attribute__((visibility ("default")))
@interface MBNNPolygonDistanceInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithInside:(BOOL)inside
                             entrances:(nonnull NSArray<MBNNGate *> *)entrances
                                 exits:(nonnull NSArray<MBNNGate *> *)exits;

/** `true` if position is inside polygon, `false` otherwise */
@property (nonatomic, readonly) BOOL inside;

/**
 * Distances to particular entrances, sorted by distance value. Might be
 * empty in the case when the polygon is very large and no entry could be
 * detected using most likely path. Currently for all entrances id field is
 * set to 0.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNGate *> *entrances;

/**
 * Distances to particular exits, sorted by distance value. Might be empty
 * in the case when the polygon is very large and no exit could be detected
 * using most probable path. Currently for all exits id field is set to 0.
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNGate *> *exits;


@end
