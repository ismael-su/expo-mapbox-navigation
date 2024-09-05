// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNLaneSeparatorType.h>

NS_SWIFT_NAME(LaneData)
__attribute__((visibility ("default")))
@interface MBNNLaneData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(uint64_t)id_
                            length:(double)length
                       rightLaneId:(nullable NSNumber *)rightLaneId
                        leftLaneId:(nullable NSNumber *)leftLaneId
                   outboundLaneIds:(nonnull NSArray<NSNumber *> *)outboundLaneIds
                   incomingLaneIds:(nonnull NSArray<NSNumber *> *)incomingLaneIds
                rightLaneSeparator:(nullable NSNumber *)rightLaneSeparator
                 leftLaneSeparator:(nullable NSNumber *)leftLaneSeparator
                    oncomingLaneId:(nullable NSNumber *)oncomingLaneId;

/** Lane id in HD graph */
@property (nonatomic, readonly) uint64_t id;

/** Length of lane geometry */
@property (nonatomic, readonly) double length;

/** Right lane id. Empty for rightmost lanes */
@property (nonatomic, readonly, nullable) NSNumber *rightLaneId;

/** Left lane id. Empty for leftmost lanes */
@property (nonatomic, readonly, nullable) NSNumber *leftLaneId;

/** Outbound lane ids */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *outboundLaneIds;

/** Incoming lane ids */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *incomingLaneIds;

/** Lane separator between the current lane and the right lane */
@property (nonatomic, readonly, nullable) NSNumber *rightLaneSeparator;

/** Lane separator between the current lane and the left lane */
@property (nonatomic, readonly, nullable) NSNumber *leftLaneSeparator;

/** Oncoming lane id, may be filled only for leftmost lanes */
@property (nonatomic, readonly, nullable) NSNumber *oncomingLaneId;


@end
