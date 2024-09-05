// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNBannerComponent;

NS_SWIFT_NAME(BannerSection)
__attribute__((visibility ("default")))
@interface MBNNBannerSection : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithText:(nonnull NSString *)text
                                type:(nullable NSString *)type
                            modifier:(nullable NSString *)modifier
                             degrees:(nullable NSNumber *)degrees
                         drivingSide:(nullable NSString *)drivingSide
                          components:(nullable NSArray<MBNNBannerComponent *> *)components;

@property (nonatomic, readonly, nonnull, copy) NSString *text;
@property (nonatomic, readonly, nullable, copy) NSString *type;
@property (nonatomic, readonly, nullable, copy) NSString *modifier;
@property (nonatomic, readonly, nullable) NSNumber *degrees;
@property (nonatomic, readonly, nullable, copy) NSString *drivingSide;
@property (nonatomic, readonly, nullable, copy) NSArray<MBNNBannerComponent *> *components;

@end
