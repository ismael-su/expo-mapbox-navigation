// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRoadObjectType.h>

NS_SWIFT_NAME(RoadObjectPassInfo)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectPassInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRoadObjectId:(nonnull NSString *)roadObjectId
                                        type:(MBNNRoadObjectType)type;

/** road object id */
@property (nonatomic, readonly, nonnull, copy) NSString *roadObjectId;

/** type of road object */
@property (nonatomic, readonly) MBNNRoadObjectType type;


@end
