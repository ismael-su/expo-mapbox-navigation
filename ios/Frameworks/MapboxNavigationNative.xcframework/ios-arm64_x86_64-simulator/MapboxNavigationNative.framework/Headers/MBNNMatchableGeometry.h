// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class MBXCoordinate2D;

/**
 * The record represents the raw data which could be matched to the road graph.
 * Might be used to match:
 * - gantries, with exactly two coordinates
 * - lines, with two or more coordinates
 * - polygons, with three or more coordinates
 */
NS_SWIFT_NAME(MatchableGeometry)
__attribute__((visibility ("default")))
@interface MBNNMatchableGeometry : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                       coordinates:(nonnull NSArray<MBXCoordinate2D *> *)coordinates;

/** id of the resulting object */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** Coordinates to be matched */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBXCoordinate2D *> *coordinates;


@end
