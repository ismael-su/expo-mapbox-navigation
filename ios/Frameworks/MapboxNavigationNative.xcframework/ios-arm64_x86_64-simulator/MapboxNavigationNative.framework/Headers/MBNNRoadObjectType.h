// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRoadObjectType)
{
    /** road object represents some road incident */
    MBNNRoadObjectTypeIncident,
    MBNNRoadObjectTypeTollCollectionPoint,
    MBNNRoadObjectTypeBorderCrossing,
    MBNNRoadObjectTypeTunnel,
    MBNNRoadObjectTypeRestrictedArea,
    MBNNRoadObjectTypeServiceArea,
    MBNNRoadObjectTypeBridge,
    MBNNRoadObjectTypeRailwayCrossing,
    /** Japan-specific Junction info, refers to a place where multiple expressways meet, e.g. Ariake JCT */
    MBNNRoadObjectTypeJct,
    /** Japan-specific Interchange info, refers to an expressway entrance and exit, e.g.  Wangannarashino IC */
    MBNNRoadObjectTypeIc,
    /** road object was added by user(via `RoadObjectsStore.addCustomRoadObject`) */
    MBNNRoadObjectTypeCustom,
    /** notification object, see https://github.com/mapbox/api-documentation/pull/1385 */
    MBNNRoadObjectTypeNotification,
    /** defines a point where a merging area starts */
    MBNNRoadObjectTypeMergingArea
} NS_SWIFT_NAME(RoadObjectType);

NSString* MBNNRoadObjectTypeToString(MBNNRoadObjectType road_object_type);
