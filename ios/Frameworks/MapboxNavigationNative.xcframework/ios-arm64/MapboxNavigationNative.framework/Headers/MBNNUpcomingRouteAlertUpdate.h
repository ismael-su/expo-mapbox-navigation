// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(UpcomingRouteAlertUpdate)
__attribute__((visibility ("default")))
@interface MBNNUpcomingRouteAlertUpdate : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                   distanceToStart:(double)distanceToStart;

/** Unique id. There is no guarantee of any particular format */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/**
 * distance from current position to alert (m),
 * can be negative if it is a spanned alert and we are somewhere in the middle
 */
@property (nonatomic, readonly) double distanceToStart;


@end
