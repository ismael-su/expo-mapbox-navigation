// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAlertsServiceOptions;

NS_SWIFT_NAME(ElectronicHorizonOptions)
__attribute__((visibility ("default")))
@interface MBNNElectronicHorizonOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLength:(double)length
      doNotRecalculateInUncertainState:(BOOL)doNotRecalculateInUncertainState
            minTimeDeltaBetweenUpdates:(nullable NSNumber *)minTimeDeltaBetweenUpdates
                         alertsService:(nullable MBNNAlertsServiceOptions *)alertsService;

- (nonnull instancetype)initWithLength:(double)length
                             expansion:(uint8_t)expansion
                          branchLength:(double)branchLength
      doNotRecalculateInUncertainState:(BOOL)doNotRecalculateInUncertainState
            minTimeDeltaBetweenUpdates:(nullable NSNumber *)minTimeDeltaBetweenUpdates
                         alertsService:(nullable MBNNAlertsServiceOptions *)alertsService;

/** The minimum length of the EHorizon ahead of the current position. */
@property (nonatomic, readonly) double length;

/**
 * The expansion strategy to be used.
 * 0 - means MPP only.
 * 1 - means MPP + 2nd level branches.
 * 2 - means MPP + 2nd & 3rd level branches.
 * Only 0, 1, 2 are usable in terms of performance.
 */
@property (nonatomic, readonly) uint8_t expansion;

/** Minimum length of side branches */
@property (nonatomic, readonly) double branchLength;

/**
 * if `true` in case of active guidance EH is never re-calculated
 * if puck is already not on the route, but we are still in tracking mode
 * (i.e. we are uncertain if we are off-route or not)
 * default is `true`
 */
@property (nonatomic, readonly) BOOL doNotRecalculateInUncertainState;

/**
 * minimum time which should pass between consecutive
 * navigation statuses to update electronic horizon (seconds)
 * if null we update electronic horizon on each navigation status
 */
@property (nonatomic, readonly, nullable) NSNumber *minTimeDeltaBetweenUpdates;

/** Options for the alerts service (incidents and road objects collection and tracking) */
@property (nonatomic, readonly, nullable) MBNNAlertsServiceOptions *alertsService;


@end
