// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/** The record represents a raw point which could be matched to the road graph. */
NS_SWIFT_NAME(MatchablePoint)
__attribute__((visibility ("default")))
@interface MBNNMatchablePoint : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                        coordinate:(CLLocationCoordinate2D)coordinate
                           heading:(nullable NSNumber *)heading;

/** id of the resulting object */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** Coordinate of the point to be matched */
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

/**
 * Optional heading in degrees from the North.
 * Describes the direction of riding for the edge where provided point is going to be matched
 */
@property (nonatomic, readonly, nullable) NSNumber *heading;


@end
