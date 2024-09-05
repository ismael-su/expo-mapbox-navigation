// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ManufacturerData)
__attribute__((visibility ("default")))
@interface MBNNManufacturerData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(int32_t)id_
                              data:(nonnull NSData *)data;

/** manufacturer identifier */
@property (nonatomic, readonly) int32_t id;

/** manufacturer specific data */
@property (nonatomic, readonly, nonnull) NSData *data;


- (BOOL)isEqualToManufacturerData:(nonnull MBNNManufacturerData *)other;

@end
