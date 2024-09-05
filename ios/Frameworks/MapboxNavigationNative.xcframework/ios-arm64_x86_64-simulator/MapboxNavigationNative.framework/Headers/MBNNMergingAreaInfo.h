// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNMergingAreaType.h>

NS_SWIFT_NAME(MergingAreaInfo)
__attribute__((visibility ("default")))
@interface MBNNMergingAreaInfo : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithId:(nonnull NSString *)id_
                         mergeType:(MBNNMergingAreaType)mergeType;

/** id of the traffic merge info */
@property (nonatomic, readonly, nonnull, copy) NSString *id;

/** Incoming traffic merge type */
@property (nonatomic, readonly) MBNNMergingAreaType mergeType;


- (BOOL)isEqualToMergingAreaInfo:(nonnull MBNNMergingAreaInfo *)other;

@end
