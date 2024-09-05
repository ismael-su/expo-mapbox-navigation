// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(RouteIndices)
__attribute__((visibility ("default")))
@interface MBNNRouteIndices : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithRouteId:(nonnull NSString *)routeId
                               legIndex:(uint32_t)legIndex
                              stepIndex:(uint32_t)stepIndex
                          geometryIndex:(uint32_t)geometryIndex
                             shapeIndex:(uint32_t)shapeIndex
                      intersectionIndex:(uint32_t)intersectionIndex;

/**
 * Unique route id.
 * For routes, whose directions response contains uuid: UUID + "#" + routeIndex
 * Example: d77PcddF8rhGUc3ORYGfcwcDfS_8QW6r1iXugXD0HOgmr9CWL8wn0g==#0
 * For routes, whose directions response nit contains uuid: "local@" + generateUuid() + "#" + routeIndex
 * Example: local@84438c3e-f608-47e9-88cc-cddf341d2fb1#0
 */
@property (nonatomic, readonly, nonnull, copy) NSString *routeId;

/** index of current leg in route bounds */
@property (nonatomic, readonly) uint32_t legIndex;

/** index of current step in leg bounds */
@property (nonatomic, readonly) uint32_t stepIndex;

/** index in full route geometry */
@property (nonatomic, readonly) uint32_t geometryIndex;

/** index in leg shape */
@property (nonatomic, readonly) uint32_t shapeIndex;

/** index in step bounds(i.e. on each new step we start indexing from 0) */
@property (nonatomic, readonly) uint32_t intersectionIndex;


- (BOOL)isEqualToRouteIndices:(nonnull MBNNRouteIndices *)other;

@end
