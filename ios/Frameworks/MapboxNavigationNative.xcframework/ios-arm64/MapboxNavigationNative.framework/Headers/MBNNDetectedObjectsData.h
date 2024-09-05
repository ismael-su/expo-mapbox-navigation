// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNDetectedObject;

NS_SWIFT_NAME(DetectedObjectsData)
__attribute__((visibility ("default")))
@interface MBNNDetectedObjectsData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithDetectedObjects:(nonnull NSArray<MBNNDetectedObject *> *)detectedObjects
                                      timestamp:(nonnull NSDate *)timestamp;

/** List of detected objects */
@property (nonatomic, readonly, nonnull, copy) NSArray<MBNNDetectedObject *> *detectedObjects;

/** Time when the data was created */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;


@end
