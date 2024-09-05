// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RoadObjectMatcherError)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectMatcherError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDescription:(nonnull NSString *)description
                               roadObjectId:(nonnull NSString *)roadObjectId;

/** description of error */
@property (nonatomic, readonly, nonnull, copy) NSString *description;

/** id of road object for which we failed matching */
@property (nonatomic, readonly, nonnull, copy) NSString *roadObjectId;


@end
