// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNLineAttributes;
@class MBNNLocationReferencePoint;

/**
 * Circle defined by a sequence of lines. Each reference point contains
 * information about the line which goes out of it, but attributes of the line
 * between the last reference point and the first one are defined separately in
 * `lastLine`.
 */
NS_SWIFT_NAME(ClosedLineLocationReference)
__attribute__((visibility ("default")))
@interface MBNNClosedLineLocationReference : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPoints:(nonnull NSArray<MBNNLocationReferencePoint *> *)points
                              lastLine:(nonnull MBNNLineAttributes *)lastLine;

@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNLocationReferencePoint *> *points;
/** Attributes of the line between the last and the first reference points. */
@property (nonatomic, readonly, nonnull) MBNNLineAttributes *lastLine;


@end
