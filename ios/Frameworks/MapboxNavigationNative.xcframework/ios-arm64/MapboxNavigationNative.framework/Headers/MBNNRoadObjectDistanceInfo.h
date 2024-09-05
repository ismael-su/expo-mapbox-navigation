// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNGantryDistanceInfo;
@class MBNNLineDistanceInfo;
@class MBNNPointDistanceInfo;
@class MBNNPolygonDistanceInfo;
@class MBNNSubGraphDistanceInfo;
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNRoadObjectDistanceInfoType)
{
    MBNNRoadObjectDistanceInfoTypePointDistanceInfo,
    MBNNRoadObjectDistanceInfoTypeGantryDistanceInfo,
    MBNNRoadObjectDistanceInfoTypePolygonDistanceInfo,
    MBNNRoadObjectDistanceInfoTypeSubGraphDistanceInfo,
    MBNNRoadObjectDistanceInfoTypeLineDistanceInfo
} NS_SWIFT_NAME(RoadObjectDistanceInfoType);

NS_SWIFT_NAME(RoadObjectDistanceInfo)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectDistanceInfo : NSObject

// This class provides factory method which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides factory method which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull instancetype)fromPointDistanceInfo:(nonnull MBNNPointDistanceInfo *)value;
+ (nonnull instancetype)fromGantryDistanceInfo:(nonnull MBNNGantryDistanceInfo *)value;
+ (nonnull instancetype)fromPolygonDistanceInfo:(nonnull MBNNPolygonDistanceInfo *)value;
+ (nonnull instancetype)fromSubGraphDistanceInfo:(nonnull MBNNSubGraphDistanceInfo *)value;
+ (nonnull instancetype)fromLineDistanceInfo:(nonnull MBNNLineDistanceInfo *)value;

- (BOOL)isPointDistanceInfo;
- (BOOL)isGantryDistanceInfo;
- (BOOL)isPolygonDistanceInfo;
- (BOOL)isSubGraphDistanceInfo;
- (BOOL)isLineDistanceInfo;

- (nonnull MBNNPointDistanceInfo *)getPointDistanceInfo __attribute((ns_returns_retained));
- (nonnull MBNNGantryDistanceInfo *)getGantryDistanceInfo __attribute((ns_returns_retained));
- (nonnull MBNNPolygonDistanceInfo *)getPolygonDistanceInfo __attribute((ns_returns_retained));
- (nonnull MBNNSubGraphDistanceInfo *)getSubGraphDistanceInfo __attribute((ns_returns_retained));
- (nonnull MBNNLineDistanceInfo *)getLineDistanceInfo __attribute((ns_returns_retained));

@property (nonatomic, readonly) MBNNRoadObjectDistanceInfoType type;

@end
