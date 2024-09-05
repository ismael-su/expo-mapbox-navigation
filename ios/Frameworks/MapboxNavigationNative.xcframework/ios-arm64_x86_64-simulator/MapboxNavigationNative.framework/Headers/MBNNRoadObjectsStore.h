// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRoadObject;
@class MBNNRoadObjectEdgeLocation;
@protocol MBNNRoadObjectsStoreObserver;

/** NN users shouldn't create instances of `RoadObjectsStore`, use `Navigator.roadObjectsStore` method instead */
NS_SWIFT_NAME(RoadObjectsStore)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectsStore : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Returns mapping `road object id -> RoadObjectEdgeLocation` for all road objects
 * which are lying on the edge with given id.
 * @param edgeId
 */
- (nonnull NSDictionary<NSString *, MBNNRoadObjectEdgeLocation *> *)getForEdgeId:(uint64_t)edgeId __attribute((ns_returns_retained));
/**
 * Returns road object by `id`
 * @param road object id
 */
- (nullable MBNNRoadObject *)getRoadObjectForId:(nonnull NSString *)id_ __attribute((ns_returns_retained));
/**
 * Adds road object to be tracked in electronic horizon. In case if object with such id already exists updates it.
 * @param id       unique id of object
 * @param roadObject road object
 * NB: road objects obtained from route alerts cannot be added via this API
 */
- (void)addCustomRoadObjectForRoadObject:(nonnull MBNNRoadObject *)roadObject;
/**
 * Removes road object(i.e. stops tracking it in electronic horizon).
 * Does nothing if object with such id is not found. Observer is notified only if the object existed in the store.
 * @param id of road object
 */
- (void)removeCustomRoadObjectForId:(nonnull NSString *)id_;
/**
 * Removes a bunch of custom road objects(i.e. stops tracking them in electronic horizon).
 * Calls `onRoadObjectRemoved` callback only for the ids that have existed in the store.
 * Does nothing for the ids that haven't existed there.
 */
- (void)removeCustomRoadObjectsForIds:(nonnull NSArray<NSString *> *)ids;
/**
 * Removes all road object(i.e. stops tracking them in electronic horizon)
 * @param id of road object
 */
- (void)removeAllCustomRoadObjects;
/**
 * Returns list of road object ids which are (partially) belong to `edgeIds`.
 * @param edgeIds list of edge ids
 */
- (nonnull NSArray<NSString *> *)getRoadObjectIdsByEdgeIdsForEdgeIds:(nonnull NSArray<NSNumber *> *)edgeIds __attribute((ns_returns_retained));
/** Checks whether observers are added. */
- (BOOL)hasObservers;
/** Adds observer for objects changes. */
- (void)addObserverForObserver:(nonnull id<MBNNRoadObjectsStoreObserver>)observer;
/** Removes observer for objects changes. */
- (void)removeObserverForObserver:(nonnull id<MBNNRoadObjectsStoreObserver>)observer;

@end
