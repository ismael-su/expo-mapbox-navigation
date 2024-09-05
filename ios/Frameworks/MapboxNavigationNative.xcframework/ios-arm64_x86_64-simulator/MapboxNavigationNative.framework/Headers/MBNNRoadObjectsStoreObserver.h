// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** RoadObjectsStore listener. */
NS_SWIFT_NAME(RoadObjectsStoreObserver)
@protocol MBNNRoadObjectsStoreObserver
/**
 * @param road object id
 * notifies that new road object was to the store
 */
- (void)onRoadObjectAddedForId:(nonnull NSString *)id_;
/**
 * @param road object id
 * notifies that road object with given id was updated
 */
- (void)onRoadObjectUpdatedForId:(nonnull NSString *)id_;
/**
 * @param road object id
 * notifies that road object with given id was removed from the store
 */
- (void)onRoadObjectRemovedForId:(nonnull NSString *)id_;
@end
