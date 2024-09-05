// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRoadGraphVersionInfo;

/**
 * Callback for `getCurrentRoadGraphVersionInfo`.
 * isVersionResolved: returns true when the resolve routine has ended. false - when the version is still being searched.
 * currentVersionInfo: `RoadGraphVersionInfo` when the version is available.
 *                     `null` - when the version is still resolving or when the version could not be identified.
 */
NS_SWIFT_NAME(RoadGraphVersionInfoCallback)
typedef void (^MBNNRoadGraphVersionInfoCallback)(BOOL isVersionResolved, MBNNRoadGraphVersionInfo * _Nullable currentVersionInfo); // NOLINT(modernize-use-using)
