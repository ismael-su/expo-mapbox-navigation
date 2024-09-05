// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Type of road marking */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRoadMarkingType)
{
    MBNNRoadMarkingTypeUnknown,
    MBNNRoadMarkingTypeNoBoundary,
    MBNNRoadMarkingTypeSolid,
    MBNNRoadMarkingTypeDashed,
    MBNNRoadMarkingTypeDoubleLineSolidSolid,
    MBNNRoadMarkingTypeDoubleLineSolidDashed,
    MBNNRoadMarkingTypeDoubleLineDashedSolid
} NS_SWIFT_NAME(RoadMarkingType);

NSString* MBNNRoadMarkingTypeToString(MBNNRoadMarkingType road_marking_type);
