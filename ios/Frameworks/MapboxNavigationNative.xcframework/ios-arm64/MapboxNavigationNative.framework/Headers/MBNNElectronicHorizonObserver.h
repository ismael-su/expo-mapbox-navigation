// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNElectronicHorizonPosition;
@class MBNNRoadObjectDistance;
@class MBNNRoadObjectEnterExitInfo;
@class MBNNRoadObjectPassInfo;

/**
 * Electronic horizon listener. Callbacks are fired in the order specified. onPositionUpdated might be called
 * multiple times after the other callbacks until a new change to the horizon occurs.
 */
NS_SWIFT_NAME(ElectronicHorizonObserver)
@protocol MBNNElectronicHorizonObserver
/**
 * Called after onElectronicHorizonUpdated. Might be called
 * multiple times when the position changes
 * @param position current electronic horizon position(map matched position + e-horizon tree)
 * @param distances for upcoming road objects
 */
- (void)onPositionUpdatedForPosition:(nonnull MBNNElectronicHorizonPosition *)position
                           distances:(nonnull NSArray<MBNNRoadObjectDistance *> *)distances;
/**
 * Called when entry to line-like(i.e. which has length != null) road object was detected
 * @param info
 */
- (void)onRoadObjectEnterForInfo:(nonnull MBNNRoadObjectEnterExitInfo *)info;
/**
 * Called when exit from line-like(i.e. which has length != null) road object was detected
 * @param info
 */
- (void)onRoadObjectExitForInfo:(nonnull MBNNRoadObjectEnterExitInfo *)info;
/**
 * Called when user has passed point or gantry objects
 * @param info
 */
- (void)onRoadObjectPassedForInfo:(nonnull MBNNRoadObjectPassInfo *)info;
@end
