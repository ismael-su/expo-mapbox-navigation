// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapboxNavigationNative/MBNNAltimeterUpdateCallback_Internal.h>
#import <MapboxNavigationNative/MBNNCompassUpdateCallback_Internal.h>
#import <MapboxNavigationNative/MBNNIMUUpdateCallback_Internal.h>

NS_SWIFT_NAME(IMUService)
@protocol MBNNIMUService
- (int32_t)registerCompassUpdateCallbackForCallback:(nonnull MBNNCompassUpdateCallback)callback;
- (int32_t)registerIMUUpdateCallbackForCallback:(nonnull MBNNIMUUpdateCallback)callback;
- (int32_t)registerAltimeterUpdateCallbackForCallback:(nonnull MBNNAltimeterUpdateCallback)callback;
- (void)unregisterCallbackForId:(int32_t)id_;
- (void)updateForCoordinate:(CLLocationCoordinate2D)coordinate
                   altitude:(nullable NSNumber *)altitude;
@end
