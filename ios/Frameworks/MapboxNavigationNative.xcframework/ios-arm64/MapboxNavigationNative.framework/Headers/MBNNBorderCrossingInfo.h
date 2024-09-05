// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAdminInfo;

NS_SWIFT_NAME(BorderCrossingInfo)
__attribute__((visibility ("default")))
@interface MBNNBorderCrossingInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                              from:(nonnull MBNNAdminInfo *)from
                                to:(nonnull MBNNAdminInfo *)to;

/** id of the border crossing */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

@property (nonatomic, readonly, nonnull) MBNNAdminInfo *from;
@property (nonatomic, readonly, nonnull) MBNNAdminInfo *to;

- (BOOL)isEqualToBorderCrossingInfo:(nonnull MBNNBorderCrossingInfo *)other;

@end
