// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNIncidentImpact.h>
#import <MapboxNavigationNative/MBNNIncidentType.h>

@class MBNNIncidentCongestion;
@class MBNNOpenLR;

NS_SWIFT_NAME(IncidentInfo)
__attribute__((visibility ("default")))
@interface MBNNIncidentInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                            openlr:(nullable MBNNOpenLR *)openlr
                              type:(MBNNIncidentType)type
                         startTime:(nullable NSDate *)startTime
                           endTime:(nullable NSDate *)endTime
                      creationTime:(nullable NSDate *)creationTime
                            length:(nullable NSNumber *)length
                 iso_3166_1_alpha2:(nullable NSString *)iso_3166_1_alpha2
                 iso_3166_1_alpha3:(nullable NSString *)iso_3166_1_alpha3
                      lanesBlocked:(nonnull NSArray<NSString *> *)lanesBlocked
                        roadClosed:(BOOL)roadClosed
                        congestion:(nullable MBNNIncidentCongestion *)congestion
                            impact:(MBNNIncidentImpact)impact
                       description:(nullable NSString *)description
                           subType:(nullable NSString *)subType
                subTypeDescription:(nullable NSString *)subTypeDescription
                       alertcCodes:(nonnull NSArray<NSNumber *> *)alertcCodes
                      trafficCodes:(nonnull NSDictionary<NSString *, NSNumber *> *)trafficCodes
                   longDescription:(nullable NSString *)longDescription
                    lanesClearDesc:(nullable NSString *)lanesClearDesc
                   numLanesBlocked:(nullable NSNumber *)numLanesBlocked
                 affectedRoadNames:(nonnull NSArray<NSString *> *)affectedRoadNames
     multiLingualAffectedRoadNames:(nonnull NSDictionary<NSString *, NSArray<NSString *> *> *)multiLingualAffectedRoadNames;

/** id of incident */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** OpenLR */
@property (nonatomic, readonly, nullable) MBNNOpenLR *openlr;

/** type of incident */
@property (nonatomic, readonly) MBNNIncidentType type;

/** start time of incident */
@property (nonatomic, readonly, nullable) NSDate *startTime;

/** end time of incident */
@property (nonatomic, readonly, nullable) NSDate *endTime;

/** creation time of incident */
@property (nonatomic, readonly, nullable) NSDate *creationTime;

/** length of the incident */
@property (nonatomic, readonly, nullable) NSNumber *length;

/** ISO-3166-1 (2-letter country name) */
@property (nonatomic, readonly, nullable, copy) NSString *iso_3166_1_alpha2;

/** ISO-3166-1 (3-letter country name) */
@property (nonatomic, readonly, nullable, copy) NSString *iso_3166_1_alpha3;

/**
 * lanes which are blocked
 * examples (case is not guaranteed): LEFT, LEFT CENTER, LEFT TURN LANE, CENTER, RIGHT, RIGHT CENTER,
 * RIGHT TURN LANE, HOV, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SIDE, SHOULDER, MEDIAN
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *lanesBlocked;

/** `true` if road is closed and no possibility to pass through there */
@property (nonatomic, readonly) BOOL roadClosed;

/** quantitative descriptor of congestion */
@property (nonatomic, readonly, nullable) MBNNIncidentCongestion *congestion;

/** the rate of incident */
@property (nonatomic, readonly) MBNNIncidentImpact impact;

/** human-readable description of the incident suitable for displaying to the users */
@property (nonatomic, readonly, nullable, copy) NSString *description;

/** sub-type of the incident */
@property (nonatomic, readonly, nullable, copy) NSString *subType;

/** sub-type-specific description */
@property (nonatomic, readonly, nullable, copy) NSString *subTypeDescription;

/** RDS-TMC alert-c codes of incident */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *alertcCodes;

/** Map of traffic code attributes to values */
@property (nonatomic, readonly, nonnull, copy) NSDictionary<NSString *, NSNumber *> *trafficCodes;

/** detailed description of incident */
@property (nonatomic, readonly, nullable, copy) NSString *longDescription;

/**
 * Describes which lanes are clear.
 *  For Example:
 *  - one lane gets by
 *  - only shoulder gets by
 *  - two left lanes get by
 */
@property (nonatomic, readonly, nullable, copy) NSString *lanesClearDesc;

/** number of lanes blocked */
@property (nonatomic, readonly, nullable) NSNumber *numLanesBlocked;

/** list of roads names affected by the incident */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *affectedRoadNames;

/**
 * List of multi-lingual road names affected by the incident.
 * Structure: "language" -> "list of affected road names"
 */
@property (nonatomic, readonly, nonnull, copy) NSDictionary<NSString *, NSArray<NSString *> *> *multiLingualAffectedRoadNames;


- (BOOL)isEqualToIncidentInfo:(nonnull MBNNIncidentInfo *)other;

@end
