// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNHistoryRecordType.h>

@class MBNNGetStatusHistoryRecord;
@class MBNNPushHistoryRecord;
@class MBNNSetRouteHistoryRecord;
@class MBNNUpdateLocationHistoryRecord;

NS_SWIFT_NAME(HistoryRecord)
__attribute__((visibility ("default")))
@interface MBNNHistoryRecord : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithTimestampNanoseconds:(int64_t)timestampNanoseconds
                                                type:(MBNNHistoryRecordType)type
                                      updateLocation:(nullable MBNNUpdateLocationHistoryRecord *)updateLocation
                                           getStatus:(nullable MBNNGetStatusHistoryRecord *)getStatus
                                            setRoute:(nullable MBNNSetRouteHistoryRecord *)setRoute
                                         pushHistory:(nullable MBNNPushHistoryRecord *)pushHistory;

/**
 * Timestamp of event in nanoseconds(i.e. timestamp when event actually happened).
 * Do not confuse with timestamps of locations(i.e. timestamp set by location provider)
 */
@property (nonatomic, readonly) int64_t timestampNanoseconds;

@property (nonatomic, readonly) MBNNHistoryRecordType type;
/** depending on `type` one of this fields will be non-null */
@property (nonatomic, readonly, nullable) MBNNUpdateLocationHistoryRecord *updateLocation;

@property (nonatomic, readonly, nullable) MBNNGetStatusHistoryRecord *getStatus;
@property (nonatomic, readonly, nullable) MBNNSetRouteHistoryRecord *setRoute;
@property (nonatomic, readonly, nullable) MBNNPushHistoryRecord *pushHistory;

@end
