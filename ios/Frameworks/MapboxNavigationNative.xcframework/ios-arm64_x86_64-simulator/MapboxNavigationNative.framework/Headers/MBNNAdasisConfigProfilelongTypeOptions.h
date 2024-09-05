// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * PROFILE LONG message options
 * lat - if true, latitude type will be generated
 * lon - if true, longitude type will be generated
 * trafficSign - if true, Traffic Sign type will be generated
 */
NS_SWIFT_NAME(AdasisConfigProfilelongTypeOptions)
__attribute__((visibility ("default")))
@interface MBNNAdasisConfigProfilelongTypeOptions : NSObject

- (nonnull instancetype)init;

- (nonnull instancetype)initWithLat:(BOOL)lat
                                lon:(BOOL)lon
                        trafficSign:(BOOL)trafficSign;

@property (nonatomic, readonly) BOOL lat;
@property (nonatomic, readonly) BOOL lon;
@property (nonatomic, readonly) BOOL trafficSign;

- (BOOL)isEqualToAdasisConfigProfilelongTypeOptions:(nonnull MBNNAdasisConfigProfilelongTypeOptions *)other;

@end
