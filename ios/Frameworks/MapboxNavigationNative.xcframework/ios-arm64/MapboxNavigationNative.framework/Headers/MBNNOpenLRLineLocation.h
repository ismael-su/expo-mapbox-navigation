// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXGeometry;

@class MBNNGraphPath;

/**  Defines a location of a line on the road graph */
NS_SWIFT_NAME(OpenLRLineLocation)
__attribute__((visibility ("default")))
@interface MBNNOpenLRLineLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** Position of a line on a road graph */
- (nonnull MBNNGraphPath *)getPath __attribute((ns_returns_retained));
/** Shape of a line */
- (nonnull MBXGeometry *)getShape __attribute((ns_returns_retained));

@end
