// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(ServiceData)
__attribute__((visibility ("default")))
@interface MBNNServiceData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithUuid:(nonnull NSString *)uuid
                                data:(nonnull NSData *)data;

/** service UUID */
@property (nonatomic, readonly, nonnull, copy) NSString *uuid;

/** service-specific data */
@property (nonatomic, readonly, nonnull) NSData *data;


- (BOOL)isEqualToServiceData:(nonnull MBNNServiceData *)other;

@end
