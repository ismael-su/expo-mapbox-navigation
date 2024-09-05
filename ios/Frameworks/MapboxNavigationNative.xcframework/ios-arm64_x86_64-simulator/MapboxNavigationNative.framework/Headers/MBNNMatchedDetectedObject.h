// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNFixDirectedCoordinate;
@class MBNNMatchedLaneInfo;

NS_SWIFT_NAME(MatchedDetectedObject)
__attribute__((visibility ("default")))
@interface MBNNMatchedDetectedObject : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                        coordinate:(nonnull MBNNFixDirectedCoordinate *)coordinate
                          laneInfo:(nonnull MBNNMatchedLaneInfo *)laneInfo;

/** Id of the detected object */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** Location of the detected object */
@property (nonatomic, readonly, nonnull) MBNNFixDirectedCoordinate *coordinate;

/** Lane information of the detected object */
@property (nonatomic, readonly, nonnull) MBNNMatchedLaneInfo *laneInfo;


@end
