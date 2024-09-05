// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNBorderCrossingInfo;
@class MBNNIcInfo;
@class MBNNIncidentInfo;
@class MBNNJctInfo;
@class MBNNMergingAreaInfo;
@class MBNNNotificationInfo;
@class MBNNRailwayCrossingInfo;
@class MBNNServiceAreaInfo;
@class MBNNTollCollectionInfo;
@class MBNNTunnelInfo;
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRoadObjectMetadataType)
{
    MBNNRoadObjectMetadataTypeIncidentInfo,
    MBNNRoadObjectMetadataTypeTunnelInfo,
    MBNNRoadObjectMetadataTypeBorderCrossingInfo,
    MBNNRoadObjectMetadataTypeTollCollectionInfo,
    MBNNRoadObjectMetadataTypeServiceAreaInfo,
    MBNNRoadObjectMetadataTypeRailwayCrossingInfo,
    MBNNRoadObjectMetadataTypeIcInfo,
    MBNNRoadObjectMetadataTypeJctInfo,
    MBNNRoadObjectMetadataTypeNotificationInfo,
    MBNNRoadObjectMetadataTypeMergingAreaInfo
} NS_SWIFT_NAME(RoadObjectMetadataType);

NS_SWIFT_NAME(RoadObjectMetadata)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectMetadata : NSObject

// This class provides factory method which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides factory method which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull instancetype)fromIncidentInfo:(nonnull MBNNIncidentInfo *)value;
+ (nonnull instancetype)fromTunnelInfo:(nonnull MBNNTunnelInfo *)value;
+ (nonnull instancetype)fromBorderCrossingInfo:(nonnull MBNNBorderCrossingInfo *)value;
+ (nonnull instancetype)fromTollCollectionInfo:(nonnull MBNNTollCollectionInfo *)value;
+ (nonnull instancetype)fromServiceAreaInfo:(nonnull MBNNServiceAreaInfo *)value;
+ (nonnull instancetype)fromRailwayCrossingInfo:(nonnull MBNNRailwayCrossingInfo *)value;
+ (nonnull instancetype)fromIcInfo:(nonnull MBNNIcInfo *)value;
+ (nonnull instancetype)fromJctInfo:(nonnull MBNNJctInfo *)value;
+ (nonnull instancetype)fromNotificationInfo:(nonnull MBNNNotificationInfo *)value;
+ (nonnull instancetype)fromMergingAreaInfo:(nonnull MBNNMergingAreaInfo *)value;

- (BOOL)isIncidentInfo;
- (BOOL)isTunnelInfo;
- (BOOL)isBorderCrossingInfo;
- (BOOL)isTollCollectionInfo;
- (BOOL)isServiceAreaInfo;
- (BOOL)isRailwayCrossingInfo;
- (BOOL)isIcInfo;
- (BOOL)isJctInfo;
- (BOOL)isNotificationInfo;
- (BOOL)isMergingAreaInfo;

- (nonnull MBNNIncidentInfo *)getIncidentInfo __attribute((ns_returns_retained));
- (nonnull MBNNTunnelInfo *)getTunnelInfo __attribute((ns_returns_retained));
- (nonnull MBNNBorderCrossingInfo *)getBorderCrossingInfo __attribute((ns_returns_retained));
- (nonnull MBNNTollCollectionInfo *)getTollCollectionInfo __attribute((ns_returns_retained));
- (nonnull MBNNServiceAreaInfo *)getServiceAreaInfo __attribute((ns_returns_retained));
- (nonnull MBNNRailwayCrossingInfo *)getRailwayCrossingInfo __attribute((ns_returns_retained));
- (nonnull MBNNIcInfo *)getIcInfo __attribute((ns_returns_retained));
- (nonnull MBNNJctInfo *)getJctInfo __attribute((ns_returns_retained));
- (nonnull MBNNNotificationInfo *)getNotificationInfo __attribute((ns_returns_retained));
- (nonnull MBNNMergingAreaInfo *)getMergingAreaInfo __attribute((ns_returns_retained));

@property (nonatomic, readonly) MBNNRoadObjectMetadataType type;

@end
