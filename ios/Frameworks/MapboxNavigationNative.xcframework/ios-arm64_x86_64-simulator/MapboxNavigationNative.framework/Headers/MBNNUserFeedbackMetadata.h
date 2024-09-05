// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNFixLocation;
@class MBNNStep;

/**
 * Metadata of user feedback, gathered on starting feedback. Has current stap and location near user feedback.
 * Note that actual sending of user feedback may happen much later than the situation of the feedback, even after Navigator restart.
 */
NS_SWIFT_NAME(UserFeedbackMetadata)
__attribute__((visibility ("default")))
@interface MBNNUserFeedbackMetadata : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLocationsBefore:(nonnull NSArray<MBNNFixLocation *> *)locationsBefore
                                 locationsAfter:(nonnull NSArray<MBNNFixLocation *> *)locationsAfter
                                           step:(nullable MBNNStep *)step;

/** Set of location before the user feedback situation */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNFixLocation *> *locationsBefore;

/** Set of location after the user feedback situation */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNFixLocation *> *locationsAfter;

/** Current Route step if in guidance mode, nullopt for free drive mode */
@property (nonatomic, readonly, nullable) MBNNStep *step;


@end
