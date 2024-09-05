// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxNavigationNative/MBNNElectronicHorizonResultType.h>

@class MBNNElectronicHorizon;
@class MBNNGraphPosition;

NS_SWIFT_NAME(ElectronicHorizonPosition)
__attribute__((visibility ("default")))
@interface MBNNElectronicHorizonPosition : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull MBNNGraphPosition *)position __attribute((ns_returns_retained));
- (nonnull MBNNElectronicHorizon *)tree __attribute((ns_returns_retained));
- (MBNNElectronicHorizonResultType)type;

@end
