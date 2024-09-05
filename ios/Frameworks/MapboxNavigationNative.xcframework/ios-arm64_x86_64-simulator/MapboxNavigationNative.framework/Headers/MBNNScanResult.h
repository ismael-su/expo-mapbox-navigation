// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNManufacturerData;
@class MBNNServiceData;

NS_SWIFT_NAME(ScanResult)
__attribute__((visibility ("default")))
@interface MBNNScanResult : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                         localName:(nonnull NSString *)localName
                  manufacturerData:(nonnull NSArray<MBNNManufacturerData *> *)manufacturerData
                       serviceData:(nonnull NSArray<MBNNServiceData *> *)serviceData
                      txPowerLevel:(int32_t)txPowerLevel
                      serviceUUIDs:(nonnull NSArray<NSString *> *)serviceUUIDs
              overflowServiceUUIDs:(nonnull NSArray<NSString *> *)overflowServiceUUIDs
             solicitedServiceUUIDs:(nonnull NSArray<NSString *> *)solicitedServiceUUIDs
                     isConnectable:(BOOL)isConnectable
                              rssi:(int32_t)rssi
     monotonicTimestampNanoseconds:(int64_t)monotonicTimestampNanoseconds;

/** identifier of peripheral */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** local name of a peripheral */
@property (nonatomic, readonly, nonnull, copy) NSString *localName;

/** manufacturer-specific advertisement data */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNManufacturerData *> *manufacturerData;

/** service-specific advertisement data */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNServiceData *> *serviceData;

/** transmit power of a peripheral */
@property (nonatomic, readonly) int32_t txPowerLevel;

/** service UUIDs */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *serviceUUIDs;

/** UUIDs found in the overflow area of the advertisement data */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *overflowServiceUUIDs;

/** solicited service UUIDs */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *solicitedServiceUUIDs;

/** indicates whether the advertising event type is connectable */
@property (nonatomic, readonly) BOOL isConnectable;

/** the current received signal strength indicator (RSSI) of the peripheral, in decibels */
@property (nonatomic, readonly) int32_t rssi;

/** monotonic timestamp in nanoseconds */
@property (nonatomic, readonly) int64_t monotonicTimestampNanoseconds;


- (BOOL)isEqualToScanResult:(nonnull MBNNScanResult *)other;

@end
