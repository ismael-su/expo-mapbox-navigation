// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Enum describing separator a separator between lanes.
 *
 * This separator type could be used to determine if we can cross it (i.e. change the lane)
 * without violating traffic regulations. E.g. there are separator types prohibiting lane change:
 * Solid, Double, DashedSolid, Fence, HatchedLine, DoubleDashedPoint
 *
 * Link to the internal doc about lane separator types:
 * https://mapbox.atlassian.net/wiki/spaces/RAVEHD/pages/542507045/HD+Mapping+Instruction+for+motorway#Lanes-Tags
 */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNLaneSeparatorType)
{
    MBNNLaneSeparatorTypeSolid,
    MBNNLaneSeparatorTypeDashed,
    MBNNLaneSeparatorTypeDouble,
    MBNNLaneSeparatorTypeDashedSolid,
    MBNNLaneSeparatorTypeSolidDashed,
    MBNNLaneSeparatorTypeEmpty,
    MBNNLaneSeparatorTypeFence,
    MBNNLaneSeparatorTypeHatchedLine,
    MBNNLaneSeparatorTypeShortDash,
    MBNNLaneSeparatorTypeCrossedLine,
    MBNNLaneSeparatorTypeDashedPoint,
    MBNNLaneSeparatorTypeDoubleDashedPoint,
    MBNNLaneSeparatorTypeUnknown
} NS_SWIFT_NAME(LaneSeparatorType);

NSString* MBNNLaneSeparatorTypeToString(MBNNLaneSeparatorType lane_separator_type);
