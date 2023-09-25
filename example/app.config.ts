import { ExpoConfig, ConfigContext } from '@expo/config';
import * as dotenv from 'dotenv';

// initialize dotenv
dotenv.config();

export default ({ config }: ConfigContext): ExpoConfig => ({
  ...config,
  name: "expo-mapbox-navigation-example",
  slug: "expo-mapbox-navigation-example",
  version: "1.0.0",
  orientation: "portrait",
  icon: "./assets/icon.png",
  userInterfaceStyle: "light",
  splash: {
    image: "./assets/splash.png",
    resizeMode: "contain",
    backgroundColor: "#ffffff"
  },
  assetBundlePatterns: [
    "**/*"
  ],
  ios: {
    supportsTablet: true,
    bundleIdentifier: "com.ismael.expomapboxnavigation.example",
    infoPlist: {
      MBXAccessToken: process.env.MBXAccessToken,
      locationAlwaysAndWhenInUsePermission: "Allow $(PRODUCT_NAME) to use your location",
      locationAlwaysPermission: "Allow $(PRODUCT_NAME) to use your location",
      locationWhenInUsePermission: "Allow $(PRODUCT_NAME) to use your location",

    }
  },
  android: {
    adaptiveIcon: {
    foregroundImage: "./assets/adaptive-icon.png",
    backgroundColor: "#ffffff"
    },
    package: "com.ismael.expomapboxnavigation.example"
  },
  web: {
    favicon: "./assets/favicon.png"
  },
  plugins: [
    [
      "expo-location",
      {
        locationAlwaysAndWhenInUsePermission: "Allow $(PRODUCT_NAME) to use your location",
        locationAlwaysPermission: "Allow $(PRODUCT_NAME) to use your location",
        locationWhenInUsePermission: "Allow $(PRODUCT_NAME) to use your location",
      }
    ]
  ]
  
});
