// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNFixLocation;

NS_SWIFT_NAME(UpdateLocationHistoryRecord)
__attribute__((visibility ("default")))
@interface MBNNUpdateLocationHistoryRecord : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLocation:(nonnull MBNNFixLocation *)location
                                  result:(BOOL)result;

@property (nonatomic, readonly, nonnull) MBNNFixLocation *location;
@property (nonatomic, readonly) BOOL result;

@end
