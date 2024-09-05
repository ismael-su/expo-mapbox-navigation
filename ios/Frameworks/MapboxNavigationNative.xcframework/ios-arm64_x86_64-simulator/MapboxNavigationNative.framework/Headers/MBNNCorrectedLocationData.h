// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNFixLocation;
@class MBNNIMUDerivedData;

/** Corrected GPS location data. */
NS_SWIFT_NAME(CorrectedLocationData)
__attribute__((visibility ("default")))
@interface MBNNCorrectedLocationData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLocation:(nonnull MBNNFixLocation *)location
                                 isStill:(BOOL)isStill
                                 imuData:(nullable MBNNIMUDerivedData *)imuData
                         isDeadReckoning:(BOOL)isDeadReckoning
                         satellitesCount:(nullable NSNumber *)satellitesCount;

/** Corrected location. */
@property (nonatomic, readonly, nonnull) MBNNFixLocation *location;

/** The car is not moving. */
@property (nonatomic, readonly) BOOL isStill;

/** Location data derived from IMU. */
@property (nonatomic, readonly, nullable) MBNNIMUDerivedData *imuData;

/** The corrected location is a result of dead reckoning. */
@property (nonatomic, readonly) BOOL isDeadReckoning;

/** Number of GPS satellites. */
@property (nonatomic, readonly, nullable) NSNumber *satellitesCount;


@end
