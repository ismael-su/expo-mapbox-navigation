// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNRoadObjectType.h>

NS_SWIFT_NAME(RoadObjectEnterExitInfo)
__attribute__((visibility ("default")))
@interface MBNNRoadObjectEnterExitInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRoadObjectId:(nonnull NSString *)roadObjectId
                 enterFromStartOrExitFromEnd:(BOOL)enterFromStartOrExitFromEnd
                                        type:(MBNNRoadObjectType)type;

/** road object id */
@property (nonatomic, readonly, nonnull, copy) NSString *roadObjectId;

/**
 * Lines and subgraphs might be entered and exited not only through
 * its enters and exits, but also from edges in the middle (for
 * instance, if the line intersects road crosses).  This field
 * describes the enter(exit) was perfromed via the corresponded
 * first(last) edge or via any other edge in the middle.
 *
 * `true` if the object was entered via it's start for
 * `onRoadObjectEnter` or if object was exited via it's end for
 * `onRoadObjectExit`, `false` otherwise.  Applies to lines and
 * subgraphs, for other objects value is undefined.
 */
@property (nonatomic, readonly) BOOL enterFromStartOrExitFromEnd;

/** type of road object */
@property (nonatomic, readonly) MBNNRoadObjectType type;


@end
