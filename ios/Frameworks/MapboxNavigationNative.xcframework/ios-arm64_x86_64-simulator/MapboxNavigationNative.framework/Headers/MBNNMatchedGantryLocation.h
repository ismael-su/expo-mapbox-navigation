// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXGeometry;

@class MBNNPosition;

NS_SWIFT_NAME(MatchedGantryLocation)
__attribute__((visibility ("default")))
@interface MBNNMatchedGantryLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Positions of gantry entries */
- (nonnull NSArray<MBNNPosition *> *)getPositions __attribute((ns_returns_retained));
/** Shape of a gantry */
- (nonnull MBXGeometry *)getShape __attribute((ns_returns_retained));

@end
