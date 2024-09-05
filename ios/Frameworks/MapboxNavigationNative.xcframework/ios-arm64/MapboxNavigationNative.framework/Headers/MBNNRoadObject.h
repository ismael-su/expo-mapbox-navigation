// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRoadObjectProvider.h>
#import <MapboxNavigationNative/MBNNRoadObjectType.h>

@class MBNNMatchedRoadObjectLocation;
@class MBNNRoadObjectMetadata;

NS_SWIFT_NAME(RoadObject)
__attribute__((visibility ("default")))
@interface MBNNRoadObject : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                            length:(nullable NSNumber *)length
                          location:(nonnull MBNNMatchedRoadObjectLocation *)location
                              type:(MBNNRoadObjectType)type
                          provider:(MBNNRoadObjectProvider)provider
                          metadata:(nonnull MBNNRoadObjectMetadata *)metadata
                           isUrban:(nullable NSNumber *)isUrban;

/** road object id */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** length in meters if it can be determined */
@property (nonatomic, readonly, nullable) NSNumber *length;

/** location of road object */
@property (nonatomic, readonly, nonnull) MBNNMatchedRoadObjectLocation *location;

/** type of road object */
@property (nonatomic, readonly) MBNNRoadObjectType type;

/** provider of road object */
@property (nonatomic, readonly) MBNNRoadObjectProvider provider;

/** road object metadata */
@property (nonatomic, readonly, nonnull) MBNNRoadObjectMetadata *metadata;

/** Is object is in urban area */
@property (nonatomic, readonly, nullable) NSNumber *isUrban;


@end
