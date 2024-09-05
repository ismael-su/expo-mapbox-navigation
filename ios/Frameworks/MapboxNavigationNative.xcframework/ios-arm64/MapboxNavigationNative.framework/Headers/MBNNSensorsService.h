// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAssistedDrivingData;
@class MBNNCameraLaneData;
@class MBNNDetectedObjectsData;
@class MBNNExternalMatcherLaneData;
@class MBNNTurnSignalStatusData;
@protocol MBNNSensorsServiceObserver;

NS_SWIFT_NAME(SensorsService)
@protocol MBNNSensorsService
- (void)updateCameraLaneDataForData:(nonnull MBNNCameraLaneData *)data;
- (void)updateExternalMatcherLaneDataForData:(nonnull MBNNExternalMatcherLaneData *)data;
- (void)updateDetectedObjectsDataForData:(nonnull MBNNDetectedObjectsData *)data;
- (void)updateTurnSignalStatusDataForData:(nonnull MBNNTurnSignalStatusData *)data;
- (void)updateAssistedDrivingDataForData:(nonnull MBNNAssistedDrivingData *)data;
- (void)addObserverForObserver:(nonnull id<MBNNSensorsServiceObserver>)observer;
- (void)removeObserverForObserver:(nonnull id<MBNNSensorsServiceObserver>)observer;
@end
