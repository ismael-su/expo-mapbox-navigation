// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNProfilelong;
@class MBNNProfileshort;
@class MBNNSegment;
@class MBNNStub;

NS_SWIFT_NAME(AdasisConfigPathOptions)
__attribute__((visibility ("default")))
@interface MBNNAdasisConfigPathOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithStub:(nonnull MBNNStub *)stub
                             segment:(nonnull MBNNSegment *)segment
                        profileshort:(nonnull MBNNProfileshort *)profileshort
                         profilelong:(nonnull MBNNProfilelong *)profilelong;

@property (nonatomic, readonly, nonnull) MBNNStub *stub;
@property (nonatomic, readonly, nonnull) MBNNSegment *segment;
@property (nonatomic, readonly, nonnull) MBNNProfileshort *profileshort;
@property (nonatomic, readonly, nonnull) MBNNProfilelong *profilelong;

- (BOOL)isEqualToAdasisConfigPathOptions:(nonnull MBNNAdasisConfigPathOptions *)other;

@end
