// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Represents the current distance to a road object of type "Line".
 * The structure is immutable, to get an updated info you should get a new instance of the info
 * via ElectronicHorizonObserver.
 */
NS_SWIFT_NAME(LineDistanceInfo)
__attribute__((visibility ("default")))
@interface MBNNLineDistanceInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDistanceToEntry:(double)distanceToEntry
                                 distanceToExit:(double)distanceToExit
                                  distanceToEnd:(double)distanceToEnd
                                 entryFromStart:(BOOL)entryFromStart
                                         length:(double)length;

/**
 * Distance in meters from the current position to the entry point.
 * Negative if entry is behind the current position while we are inside line object.
 */
@property (nonatomic, readonly) double distanceToEntry;

/** Distance to the exit of line in meters. */
@property (nonatomic, readonly) double distanceToExit;

/** Distance to the end of line in meters. */
@property (nonatomic, readonly) double distanceToEnd;

/** 'true' if object will be entered via it's start */
@property (nonatomic, readonly) BOOL entryFromStart;

/** Length of the line */
@property (nonatomic, readonly) double length;


@end
