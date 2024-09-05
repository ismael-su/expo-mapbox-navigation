// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RailwayCrossingInfo)
__attribute__((visibility ("default")))
@interface MBNNRailwayCrossingInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_;

/** id of railway crossing */
@property (nonatomic, readonly, nonnull, copy) NSString *id;


- (BOOL)isEqualToRailwayCrossingInfo:(nonnull MBNNRailwayCrossingInfo *)other;

@end
