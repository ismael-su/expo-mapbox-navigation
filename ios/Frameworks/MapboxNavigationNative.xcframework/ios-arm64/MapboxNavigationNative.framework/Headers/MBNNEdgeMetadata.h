// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNFunctionalRoadClass.h>
#import <MapboxNavigationNative/MBNNRoadSurface.h>

@class MBNNRoadName;

NS_SWIFT_NAME(EdgeMetadata)
__attribute__((visibility ("default")))
@interface MBNNEdgeMetadata : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithHeading:(double)heading
                                 length:(double)length
                                    frc:(MBNNFunctionalRoadClass)frc
                             speedLimit:(nullable NSNumber *)speedLimit
                                  speed:(double)speed
                                   ramp:(BOOL)ramp
                               motorway:(BOOL)motorway
                                 bridge:(BOOL)bridge
                                 tunnel:(BOOL)tunnel
                                   toll:(BOOL)toll
                             roundabout:(BOOL)roundabout
                                  names:(nonnull NSArray<MBNNRoadName *> *)names
                              laneCount:(nullable NSNumber *)laneCount
                          meanElevation:(nullable NSNumber *)meanElevation
                              curvature:(uint8_t)curvature
                        countryCodeIso3:(nullable NSString *)countryCodeIso3
                        countryCodeIso2:(nullable NSString *)countryCodeIso2
                              stateCode:(nullable NSString *)stateCode
                     isRightHandTraffic:(BOOL)isRightHandTraffic
                               isOneway:(BOOL)isOneway
                                surface:(MBNNRoadSurface)surface
                                isUrban:(BOOL)isUrban;

/** The bearing in degrees clockwise at the start of the edge. 0 points to North. */
@property (nonatomic, readonly) double heading;

/** The Edge's length in meters. */
@property (nonatomic, readonly) double length;

/** The edge's functional road class */
@property (nonatomic, readonly) MBNNFunctionalRoadClass frc;

/**
 * Edge speed limit value picked based on the date-time conditions using device's system time and edge's location based timezone.
 * Can be one of:
 * - `nullopt` for unknown speed limit
 * - `0.0` for unlimited
 * - value in m/s otherwise
 *
 * Speed limit value is chosen based on the following algorithm: if tile has any conditional speed limits associated
 * with the edge, then device's current system time and edge's location based timezone are used to identify
 * the suitable speed limit. If there are no conditional speed limits or suitable speed limit was not found,
 * then speed limit is the internal edge's data.
 */
@property (nonatomic, readonly, nullable) NSNumber *speedLimit;

/** The Edge's average speed (m/s) */
@property (nonatomic, readonly) double speed;

/** Is the edge a ramp? */
@property (nonatomic, readonly) BOOL ramp;

/** Is the edge a motorway? */
@property (nonatomic, readonly) BOOL motorway;

/** Is the edge a bridge? */
@property (nonatomic, readonly) BOOL bridge;

/** Is the edge a tunnel? */
@property (nonatomic, readonly) BOOL tunnel;

/** Is the edge a toll road? */
@property (nonatomic, readonly) BOOL toll;

/** Is the edge a roundabout road? */
@property (nonatomic, readonly) BOOL roundabout;

/** The road names (with shields) of the edge */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNRoadName *> *names;

/** The edge's lane counts */
@property (nonatomic, readonly, nullable) NSNumber *laneCount;

/** The edge's mean elevation */
@property (nonatomic, readonly, nullable) NSNumber *meanElevation;

/** The edge's curvature */
@property (nonatomic, readonly) uint8_t curvature;

/** The edge's country code (ISO-3 format) */
@property (nonatomic, readonly, nullable, copy) NSString *countryCodeIso3;

/** The edge's country code (ISO-2 format) */
@property (nonatomic, readonly, nullable, copy) NSString *countryCodeIso2;

/** The edge's state code */
@property (nonatomic, readonly, nullable, copy) NSString *stateCode;

/** True if in the current place/state uses right-hand traffic, false if left-hand. */
@property (nonatomic, readonly) BOOL isRightHandTraffic;

/** True if current edge is oneway. */
@property (nonatomic, readonly) BOOL isOneway;

/** Edge's surface type. */
@property (nonatomic, readonly) MBNNRoadSurface surface;

/** True if edge is considered to be in urban area */
@property (nonatomic, readonly) BOOL isUrban;


- (BOOL)isEqualToEdgeMetadata:(nonnull MBNNEdgeMetadata *)other;

@end
