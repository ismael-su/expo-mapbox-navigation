// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(LocalizedString)
__attribute__((visibility ("default")))
@interface MBNNLocalizedString : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLanguage:(nonnull NSString *)language
                                   value:(nonnull NSString *)value;

/** 2 letters language code like en or ja */
@property (nonatomic, readonly, nonnull, copy) NSString *language;

@property (nonatomic, readonly, nonnull, copy) NSString *value;

- (BOOL)isEqualToLocalizedString:(nonnull MBNNLocalizedString *)other;

@end
