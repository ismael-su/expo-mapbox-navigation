// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBNNActiveGuidanceGeometryEncoding)
{
    /** To be used if `geometries` field in Directions API request is `geojson` */
    MBNNActiveGuidanceGeometryEncodingGeoJSON,
    /** To be used if `geometries` field in Directions API request is `polyline5` */
    MBNNActiveGuidanceGeometryEncodingPolyline5,
    /** To be used if `geometries` field in Directions API request is `polyline6`` */
    MBNNActiveGuidanceGeometryEncodingPolyline6
} NS_SWIFT_NAME(ActiveGuidanceGeometryEncoding);

NSString* MBNNActiveGuidanceGeometryEncodingToString(MBNNActiveGuidanceGeometryEncoding active_guidance_geometry_encoding);
