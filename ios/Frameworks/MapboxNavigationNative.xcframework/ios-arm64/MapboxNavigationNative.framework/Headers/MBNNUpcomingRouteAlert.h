// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRoadObject;

NS_SWIFT_NAME(UpcomingRouteAlert)
__attribute__((visibility ("default")))
@interface MBNNUpcomingRouteAlert : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRoadObject:(nonnull MBNNRoadObject *)roadObject
                           distanceToStart:(double)distanceToStart;

/** road object which describes upcoming route alert */
@property (nonatomic, readonly, nonnull) MBNNRoadObject *roadObject;

/**
 * distance from current position to alert (m),
 * can be negative if it is a spanned alert and we are somewhere in the middle
 */
@property (nonatomic, readonly) double distanceToStart;


@end
