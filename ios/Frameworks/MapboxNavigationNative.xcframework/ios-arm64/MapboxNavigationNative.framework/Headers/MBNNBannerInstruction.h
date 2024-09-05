// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNBannerSection;

NS_SWIFT_NAME(BannerInstruction)
__attribute__((visibility ("default")))
@interface MBNNBannerInstruction : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithPrimary:(nonnull MBNNBannerSection *)primary
                                   view:(nullable MBNNBannerSection *)view
                              secondary:(nullable MBNNBannerSection *)secondary
                                    sub:(nullable MBNNBannerSection *)sub
                  remainingStepDistance:(float)remainingStepDistance
                                  index:(uint32_t)index;

@property (nonatomic, readonly, nonnull) MBNNBannerSection *primary;
/** A guidance view that provides visual guidance to the user. */
@property (nonatomic, readonly, nullable) MBNNBannerSection *view;

@property (nonatomic, readonly, nullable) MBNNBannerSection *secondary;
@property (nonatomic, readonly, nullable) MBNNBannerSection *sub;
@property (nonatomic, readonly) float remainingStepDistance;
/** index in step */
@property (nonatomic, readonly) uint32_t index;


@end
