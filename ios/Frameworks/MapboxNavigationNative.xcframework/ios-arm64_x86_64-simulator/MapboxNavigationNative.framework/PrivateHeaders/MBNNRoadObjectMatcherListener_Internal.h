// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBNNRoadObject;
@class MBNNRoadObjectMatcherError;

NS_SWIFT_NAME(RoadObjectMatcherListener)
@protocol MBNNRoadObjectMatcherListener
- (void)onRoadObjectMatchedForRoadObject:(nonnull MBXExpected<MBNNRoadObject *, MBNNRoadObjectMatcherError *> *)roadObject;
/** Called if matching a RoadObject with the specified id was cancelled. */
- (void)onMatchingCancelledForId:(nonnull NSString *)id_;
@end
