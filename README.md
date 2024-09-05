# Expo Mapbox Navigation

A simple Expo wrapper for Mapbox's navigation SDK's on Android and iOS based on  [this project](https://github.com/ismael-su/expo-mapbox-navigation.git)

## Installation

### `@rnmapbox/maps`

This package relies on the installtion of `@rnmapbox/maps`, so you'll have to install and setup as explained in their [installtion instructions](https://rnmapbox.github.io/docs/install). The current version of **Expo Mapbox Navigation** package was developed and tested for Mapbox Maps version `11.3.0`, so that is the recommended version when setting up the maps package. It is possible that everything will work with a later version, but unlikely with a lower version.

> [!NOTE]  
> Make sure to follow the instructions carefully and include the proper token in the config plugin and to call the `Mapbox.setAccessToken` function. You can be sure everything is good when you're able to render a map.

### Install package

Run this command to add the package

```
npx expo install @ismael-su/expo-mapbox-navigation
```

### Configure package

In your `app.json` or `app.js`, you'll need to add a plugin for the package under the `plugins` entry with a valid mapbox access token (The one that starts with `pk.`).

```json
"plugins": [
    ...other plugins
     [
        "@ismael-su/expo-mapbox-navigation",
        {
          "accessToken": "<YOUR_TOKEN>"
        }
      ]
]
```

Additionally you need to enable `useFrameworks` in your ios config. This can be achieved by using the `expo-build-properties` package and plugin as follows:

```json
"plugins": [
    ...other plugins
     [
        "expo-build-properties",
        {
          "ios": {
            "useFrameworks": "static"
          }
        }
      ],
]
```

### Usage

After getting location permissions you can render the navigation map as follows anywhere in the app

```
<MapboxNavigationView
    style={{ flex: 1 }}
    coordinates={coordinates} />
```

## Props

#### `coordinates`

An array of `{latitude: number, longitude: number}` objects. This creates a route passing through all the given coordinates. Requires at least 2 points for start and end destinations.

#### `waypointIndices`

An array of indices representing which of the coordinates is to be considered a waypoint/destination. By default all coordinates are considered waypoints (and show a waypoint indicator), passing this prop allows choosing which of the coordinates are waypoints. At least the first and last element need to be included in the array for a route to render.

#### `useRouteMatchingApi`

When enabled, uses Mapbox's Map Matching API to generate the route instead of the regular navigation route generation APIs. Enable this when you want a more explicit path determined by the coordinates. [Mapbox Map Matching API](https://docs.mapbox.com/api/navigation/map-matching/)

#### `locale`

A string representation of a locale/language code that adjusts the Map labels, directions, and voice where possible. By default, uses the devices locale.

#### `routeProfile`

The profile to use for route generation. `mapbox/driving-traffic` by default. See [here](https://docs.mapbox.com/api/navigation/directions/#routing-profiles) for details

#### `routeExcludeList`

An array of road types and locations to exclude from the route. See the `exclude` param [here](https://docs.mapbox.com/api/navigation/directions/#optional-parameters) for details.

#### `mapStyle`

The style of the Mapbox map. See [here](https://docs.mapbox.com/api/maps/styles/) for details.

#### `onRouteProgressChanged`

Called when the user's progress on the route changes.
Provides an object in the `nativeEvent` of type:

```ts
{
  distanceRemaining: number;
  distanceTraveled: number;
  durationRemaining: number;
  fractionTraveled: number;
}
```

#### `onCancelNavigation`

Called when the cancel navigation button is clicked. The library does not handle cancellation automatically, use this callback to handle the cancellation behaviour.

#### `onWaypointArrival`

Called when arrived at one of the given waypoints.
On **Android ONLY** provides an object in the `nativeEvent` of type:

```ts
{
  distanceRemaining: number;
  distanceTraveled: number;
  durationRemaining: number;
  fractionTraveled: number;
}
```

#### `onFinalDestinationArrival`

Called when arrived at the final destination

#### `onRouteChanged`

Called when the route changes or reroutes

#### `onUserOffRoute`

Called when the user goes off route

## Running the example app

- Run `yarn` on the root directory
- `cd example`
- Run `yarn` on the example app
- Run the app using `npx expo run:android` / `npx expo run:ios`

## Note on Mapbox version updates (for collaborators)

The Android implmentation uses the gradle dependencies and can easily be updated to newer versions.

iOS, however, bundles the Mapbox Navigation SDK into the expo module to be used. As of the date of writing this, the Mapbox Navigation SDK v3 does not support cocoapods and only supports Swift package manager. There is no obvious way on how one can include a package from the Swift package manager into an Expo module, so I opted to bundle the `.xcframework` package instead.

> [!NOTE]  
> Cocoapods support is apparently comming soon. When that day comes, this process can be made much easier.

### Getting the `.xcframework` files

To get the `.xcframework` files, I needed to use the mapbox api authenticated with my download token.

The API follows this format:
`https://api.mapbox.com/downloads/v2/<PATH>/releases/ios/packages/<VERSION>/<BINARY_NAME>.xcframework.zip`

- `PATH`: Different parts of the sdk are stored under different categories/folders in which this path determines
- `VERSION`: The version of the package to download
- `BINARY_NAME`: The name of the specfic binary to download

Specficially for navigation we need the binaries for:

- MapboxDirections
- MapboxMaps
- Turf
- MapboxNavigationCore
- \_MapboxNavigationUXPrivate
- MapboxNavigationUIKit

These all live under the `navsdk-v3-ios` as the `PATH`. For example:
https://api.mapbox.com/downloads/v2/navsdk-v3-ios/releases/ios/packages/3.1.1/MapboxDirections.xcframework.zip
downloads the MapboxDirections binary for the version `3.1.1`

To complete the api request, Basic authentication is required with the username `mapbox` and the password as the download token.

All this is based on the `Package.swift` file here: https://github.com/mapbox/mapbox-navigation-ios/blob/v3.1.1/Package.swift

Binary locations can change between each version on the next, so a slightly different set of steps might be needed
