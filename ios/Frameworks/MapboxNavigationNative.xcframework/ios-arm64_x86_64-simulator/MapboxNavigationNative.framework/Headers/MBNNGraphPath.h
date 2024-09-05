// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Data to define a path on a map graph */
NS_SWIFT_NAME(GraphPath)
__attribute__((visibility ("default")))
@interface MBNNGraphPath : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithEdges:(nonnull NSArray<NSNumber *> *)edges
                    percentAlongBegin:(double)percentAlongBegin
                      percentAlongEnd:(double)percentAlongEnd
                               length:(double)length;

/** Ids of edges on a road graph */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSNumber *> *edges;

/** Percent along edge shape (0-1) of a path begin point */
@property (nonatomic, readonly) double percentAlongBegin;

/** Percent along edge shape (0-1) of a path end point */
@property (nonatomic, readonly) double percentAlongEnd;

/** Length of a path */
@property (nonatomic, readonly) double length;


- (BOOL)isEqualToGraphPath:(nonnull MBNNGraphPath *)other;

@end
