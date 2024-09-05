// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(PushHistoryRecord)
__attribute__((visibility ("default")))
@interface MBNNPushHistoryRecord : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithType:(nonnull NSString *)type
                          properties:(nonnull NSString *)properties;

@property (nonatomic, readonly, nonnull, copy) NSString *type;
@property (nonatomic, readonly, nonnull, copy) NSString *properties;

@end
