// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNScreenshotFormat;

NS_SWIFT_NAME(UserFeedback)
__attribute__((visibility ("default")))
@interface MBNNUserFeedback : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithFeedbackType:(nonnull NSString *)feedbackType
                             feedbackSubType:(nonnull NSArray<NSString *> *)feedbackSubType
                                 description:(nonnull NSString *)description
                                  screenshot:(nullable MBNNScreenshotFormat *)screenshot;

/** User feedback type */
@property (nonatomic, readonly, nonnull, copy) NSString *feedbackType;

/** An array of feedback subtypes */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *feedbackSubType;

/** User feedback description */
@property (nonatomic, readonly, nonnull, copy) NSString *description;

/** Screenshot of the app on feedback */
@property (nonatomic, readonly, nullable) MBNNScreenshotFormat *screenshot;


@end
