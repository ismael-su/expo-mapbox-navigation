// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Simple coordinate (lon, lat) plus direction */
NS_SWIFT_NAME(FixDirectedCoordinate)
__attribute__((visibility ("default")))
@interface MBNNFixDirectedCoordinate : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithX:(double)x
                                y:(double)y
                          bearing:(double)bearing;

/** Longitude */
@property (nonatomic, readonly) double x;

/** Latitude */
@property (nonatomic, readonly) double y;

/** A coordinate's bearing in degrees. Value range is from 0 to 360. */
@property (nonatomic, readonly) double bearing;


@end
