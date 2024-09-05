// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(IncidentsOptions)
__attribute__((visibility ("default")))
@interface MBNNIncidentsOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithGraph:(nonnull NSString *)graph
                               apiUrl:(nonnull NSString *)apiUrl;

/** graph name (e.g. here/) */
@property (nonatomic, readonly, nonnull, copy) NSString *graph;

/** LTS incidents service API url */
@property (nonatomic, readonly, nonnull, copy) NSString *apiUrl;


@end
