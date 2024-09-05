// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Road class as defined in OpenLR standard. FRC0 - highway, FRC7 - smallest
 * path in a forest.
 *
 * TODO: naming is wrong, because we already have FunctionalRoadClass and
 * bindgen doesn't support resolving namespaces/prefixes there. The possibility
 * to generate prefixes for objc is expected to appear in bindgen and the class
 * to be renamed.
 */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNOpenLRFunctionalRoadClass)
{
    MBNNOpenLRFunctionalRoadClassFRC0 = 0,
    MBNNOpenLRFunctionalRoadClassFRC1 = 1,
    MBNNOpenLRFunctionalRoadClassFRC2 = 2,
    MBNNOpenLRFunctionalRoadClassFRC3 = 3,
    MBNNOpenLRFunctionalRoadClassFRC4 = 4,
    MBNNOpenLRFunctionalRoadClassFRC5 = 5,
    MBNNOpenLRFunctionalRoadClassFRC6 = 6,
    MBNNOpenLRFunctionalRoadClassFRC7 = 7
} NS_SWIFT_NAME(OpenLRFunctionalRoadClass);

NSString* MBNNOpenLRFunctionalRoadClassToString(MBNNOpenLRFunctionalRoadClass open_lrfunctional_road_class);
