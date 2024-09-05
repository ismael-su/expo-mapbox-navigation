// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Telemetry data for the current route step */
NS_SWIFT_NAME(Step)
__attribute__((visibility ("default")))
@interface MBNNStep : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithUpcomingName:(nonnull NSString *)upcomingName
                                upcomingType:(nonnull NSString *)upcomingType
                            upcomingModifier:(nonnull NSString *)upcomingModifier
                         upcomingInstruction:(nonnull NSString *)upcomingInstruction
                                previousName:(nonnull NSString *)previousName
                                previousType:(nonnull NSString *)previousType
                            previousModifier:(nonnull NSString *)previousModifier
                         previousInstruction:(nonnull NSString *)previousInstruction;

- (nonnull instancetype)initWithDistance:(double)distance
                       distanceRemaining:(double)distanceRemaining
                                duration:(double)duration
                       durationRemaining:(double)durationRemaining
                            upcomingName:(nonnull NSString *)upcomingName
                            upcomingType:(nonnull NSString *)upcomingType
                        upcomingModifier:(nonnull NSString *)upcomingModifier
                     upcomingInstruction:(nonnull NSString *)upcomingInstruction
                            previousName:(nonnull NSString *)previousName
                            previousType:(nonnull NSString *)previousType
                        previousModifier:(nonnull NSString *)previousModifier
                     previousInstruction:(nonnull NSString *)previousInstruction;

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double distanceRemaining;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double durationRemaining;
@property (nonatomic, readonly, nonnull, copy) NSString *upcomingName;
@property (nonatomic, readonly, nonnull, copy) NSString *upcomingType;
@property (nonatomic, readonly, nonnull, copy) NSString *upcomingModifier;
@property (nonatomic, readonly, nonnull, copy) NSString *upcomingInstruction;
@property (nonatomic, readonly, nonnull, copy) NSString *previousName;
@property (nonatomic, readonly, nonnull, copy) NSString *previousType;
@property (nonatomic, readonly, nonnull, copy) NSString *previousModifier;
@property (nonatomic, readonly, nonnull, copy) NSString *previousInstruction;

- (BOOL)isEqualToStep:(nonnull MBNNStep *)other;

@end
