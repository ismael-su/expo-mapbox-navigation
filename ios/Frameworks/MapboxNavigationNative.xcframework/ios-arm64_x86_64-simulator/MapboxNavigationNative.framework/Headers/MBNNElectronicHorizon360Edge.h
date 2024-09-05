// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** ElectronicHorizon360 edge. Represents edge of ElectronicHorizon360. */
NS_SWIFT_NAME(ElectronicHorizon360Edge)
__attribute__((visibility ("default")))
@interface MBNNElectronicHorizon360Edge : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithBranchLinks:(nonnull NSArray<NSNumber *> *)branchLinks
                                     length:(double)length
                          roadObjectsOnEdge:(nonnull NSArray<NSString *> *)roadObjectsOnEdge;

/** The outgoing Edges. */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *branchLinks;

/** Length of the edge. */
@property (nonatomic, readonly) double length;

/** Ids of road objects for `roadObjectStore` on the edge */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *roadObjectsOnEdge;


@end
