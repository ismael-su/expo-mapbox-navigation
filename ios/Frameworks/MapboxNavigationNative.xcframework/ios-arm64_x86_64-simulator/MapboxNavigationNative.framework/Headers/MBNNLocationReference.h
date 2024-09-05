// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNCircleLocationReference;
@class MBNNClosedLineLocationReference;
@class MBNNGeoCoordinateLocationReference;
@class MBNNGridLocationReference;
@class MBNNLineLocationReference;
@class MBNNPOIWithAccessPointLocationReference;
@class MBNNPointAlongLineLocationReference;
@class MBNNPolygonLocationReference;
@class MBNNRectangleLocationReference;
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNLocationReferenceType)
{
    MBNNLocationReferenceTypeLineLocationReference,
    MBNNLocationReferenceTypePointAlongLineLocationReference,
    MBNNLocationReferenceTypePOIWithAccessPointLocationReference,
    MBNNLocationReferenceTypeCircleLocationReference,
    MBNNLocationReferenceTypeRectangleLocationReference,
    MBNNLocationReferenceTypeGridLocationReference,
    MBNNLocationReferenceTypePolygonLocationReference,
    MBNNLocationReferenceTypeClosedLineLocationReference,
    MBNNLocationReferenceTypeGeoCoordinateLocationReference
} NS_SWIFT_NAME(LocationReferenceType);

NS_SWIFT_NAME(LocationReference)
__attribute__((visibility ("default")))
@interface MBNNLocationReference : NSObject

// This class provides factory method which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides factory method which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull instancetype)fromLineLocationReference:(nonnull MBNNLineLocationReference *)value;
+ (nonnull instancetype)fromPointAlongLineLocationReference:(nonnull MBNNPointAlongLineLocationReference *)value;
+ (nonnull instancetype)fromPOIWithAccessPointLocationReference:(nonnull MBNNPOIWithAccessPointLocationReference *)value;
+ (nonnull instancetype)fromCircleLocationReference:(nonnull MBNNCircleLocationReference *)value;
+ (nonnull instancetype)fromRectangleLocationReference:(nonnull MBNNRectangleLocationReference *)value;
+ (nonnull instancetype)fromGridLocationReference:(nonnull MBNNGridLocationReference *)value;
+ (nonnull instancetype)fromPolygonLocationReference:(nonnull MBNNPolygonLocationReference *)value;
+ (nonnull instancetype)fromClosedLineLocationReference:(nonnull MBNNClosedLineLocationReference *)value;
+ (nonnull instancetype)fromGeoCoordinateLocationReference:(nonnull MBNNGeoCoordinateLocationReference *)value;

- (BOOL)isLineLocationReference;
- (BOOL)isPointAlongLineLocationReference;
- (BOOL)isPOIWithAccessPointLocationReference;
- (BOOL)isCircleLocationReference;
- (BOOL)isRectangleLocationReference;
- (BOOL)isGridLocationReference;
- (BOOL)isPolygonLocationReference;
- (BOOL)isClosedLineLocationReference;
- (BOOL)isGeoCoordinateLocationReference;

- (nonnull MBNNLineLocationReference *)getLineLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNPointAlongLineLocationReference *)getPointAlongLineLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNPOIWithAccessPointLocationReference *)getPOIWithAccessPointLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNCircleLocationReference *)getCircleLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNRectangleLocationReference *)getRectangleLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNGridLocationReference *)getGridLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNPolygonLocationReference *)getPolygonLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNClosedLineLocationReference *)getClosedLineLocationReference __attribute((ns_returns_retained));
- (nonnull MBNNGeoCoordinateLocationReference *)getGeoCoordinateLocationReference __attribute((ns_returns_retained));

@property (nonatomic, readonly) MBNNLocationReferenceType type;

@end
