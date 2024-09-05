// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(TunnelInfo)
__attribute__((visibility ("default")))
@interface MBNNTunnelInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                              name:(nullable NSString *)name;

/** id of the tunnel */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** name of the tunnel */
@property (nonatomic, readonly, nullable, copy) NSString *name;


- (BOOL)isEqualToTunnelInfo:(nonnull MBNNTunnelInfo *)other;

@end
