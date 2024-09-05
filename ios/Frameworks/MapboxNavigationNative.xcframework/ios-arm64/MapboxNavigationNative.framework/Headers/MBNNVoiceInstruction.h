// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(VoiceInstruction)
__attribute__((visibility ("default")))
@interface MBNNVoiceInstruction : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithSsmlAnnouncement:(nonnull NSString *)ssmlAnnouncement
                                    announcement:(nonnull NSString *)announcement
                           remainingStepDistance:(float)remainingStepDistance
                                           index:(uint32_t)index;

@property (nonatomic, readonly, nonnull, copy) NSString *ssmlAnnouncement;
@property (nonatomic, readonly, nonnull, copy) NSString *announcement;
@property (nonatomic, readonly) float remainingStepDistance;
/** index in step */
@property (nonatomic, readonly) uint32_t index;


@end
