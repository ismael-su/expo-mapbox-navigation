// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNShield;

/** Road information, like Route number, street name, shield information, etc. */
NS_SWIFT_NAME(RoadName)
__attribute__((visibility ("default")))
@interface MBNNRoadName : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithText:(nonnull NSString *)text
                            language:(nonnull NSString *)language
                        imageBaseUrl:(nullable NSString *)imageBaseUrl
                              shield:(nullable MBNNShield *)shield;

/** The name of the road. May be '/' if used for separation of road names. */
@property (nonatomic, readonly, nonnull, copy) NSString *text;

/** 2 letters language code or "Unspecified" or empty string */
@property (nonatomic, readonly, nonnull, copy) NSString *language;

/** The base url for a shield image (legacy). */
@property (nonatomic, readonly, nullable, copy) NSString *imageBaseUrl;

/** Shield information of the road */
@property (nonatomic, readonly, nullable) MBNNShield *shield;


- (BOOL)isEqualToRoadName:(nonnull MBNNRoadName *)other;

@end
