// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(AdminInfo)
__attribute__((visibility ("default")))
@interface MBNNAdminInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithIso_3166_1_alpha3:(nonnull NSString *)iso_3166_1_alpha3
                                       iso_3166_1:(nonnull NSString *)iso_3166_1;

/** ISO-3166-1-alpha-3 (3-letter country name) */
@property (nonatomic, readonly, nonnull, copy) NSString *iso_3166_1_alpha3;

/** ISO-3166-1 (2-letter country name) */
@property (nonatomic, readonly, nonnull, copy) NSString *iso_3166_1;


- (BOOL)isEqualToAdminInfo:(nonnull MBNNAdminInfo *)other;

@end
