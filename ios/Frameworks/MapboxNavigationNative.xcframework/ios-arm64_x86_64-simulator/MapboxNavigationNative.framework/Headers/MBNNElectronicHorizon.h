// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNElectronicHorizonEdge;

/**
 * ElectronicHorizon is represented by a tree of edges.
 * Each edge contains a probability to be driven,
 * so the tree traversing might be proceed to obtain the most probable path (MPP) or other probable paths.
 * The amount of splits in the tree depends on `Config#Expansion#maxExpansionLevel` and `Config#Expansion#maxSplits`.
 * If the `maxExpansionLevel` param is set to 0, there couldn't be more than two splits in the graph.
 * Values 1 and 2 allow to make more splits, see details in docs about the config param.
 */
NS_SWIFT_NAME(ElectronicHorizon)
__attribute__((visibility ("default")))
@interface MBNNElectronicHorizon : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithStart:(nonnull MBNNElectronicHorizonEdge *)start;

/** The start edge of MPP */
@property (nonatomic, readonly, nonnull) MBNNElectronicHorizonEdge *start;


@end
