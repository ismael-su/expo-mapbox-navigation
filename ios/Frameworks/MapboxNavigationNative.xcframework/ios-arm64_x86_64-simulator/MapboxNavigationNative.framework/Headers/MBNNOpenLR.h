// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNStandard.h>

NS_SWIFT_NAME(OpenLR)
__attribute__((visibility ("default")))
@interface MBNNOpenLR : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBase64Encoded:(nonnull NSString *)base64Encoded
                                     standard:(MBNNStandard)standard;

@property (nonatomic, readonly, nonnull, copy) NSString *base64Encoded;
@property (nonatomic, readonly) MBNNStandard standard;

- (BOOL)isEqualToOpenLR:(nonnull MBNNOpenLR *)other;

@end
