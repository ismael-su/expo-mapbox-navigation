// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNAssistedDrivingData;
@class MBNNCameraLaneData;
@class MBNNDetectedObjectsData;
@class MBNNExternalMatcherLaneData;
@class MBNNTurnSignalStatusData;

NS_SWIFT_NAME(SensorsServiceObserver)
@protocol MBNNSensorsServiceObserver
- (void)onCameraLaneDataForData:(nonnull MBNNCameraLaneData *)data;
- (void)onExternalMatcherLaneDataForData:(nonnull MBNNExternalMatcherLaneData *)data;
- (void)onDetectedObjectsDataForData:(nonnull MBNNDetectedObjectsData *)data;
- (void)onTurnSignalStatusDataForData:(nonnull MBNNTurnSignalStatusData *)data;
- (void)onAssistedDrivingDataForData:(nonnull MBNNAssistedDrivingData *)data;
@end
