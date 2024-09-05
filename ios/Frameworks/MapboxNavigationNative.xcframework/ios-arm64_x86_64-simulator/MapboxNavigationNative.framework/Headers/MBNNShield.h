// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes a road shield information */
NS_SWIFT_NAME(Shield)
__attribute__((visibility ("default")))
@interface MBNNShield : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBaseUrl:(nonnull NSString *)baseUrl
                             displayRef:(nonnull NSString *)displayRef
                                   name:(nonnull NSString *)name
                              textColor:(nonnull NSString *)textColor;

/** The base url for a shield image */
@property (nonatomic, readonly, nonnull, copy) NSString *baseUrl;

/** The shield display reference */
@property (nonatomic, readonly, nonnull, copy) NSString *displayRef;

/** The shield text */
@property (nonatomic, readonly, nonnull, copy) NSString *name;

/** The shield text color */
@property (nonatomic, readonly, nonnull, copy) NSString *textColor;


- (BOOL)isEqualToShield:(nonnull MBNNShield *)other;

@end
