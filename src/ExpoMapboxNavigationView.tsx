import { requireNativeViewManager } from 'expo-modules-core';
import * as React from 'react';
import * as Location from "expo-location";
import {
  ActivityIndicator,
  Platform,
  StyleSheet,
  Text,
  View,
} from "react-native";
import { NavigationViewProps } from './ExpoMapboxNavigation.types';

const NativeView: React.ComponentType<NavigationViewProps> =
  requireNativeViewManager('ExpoMapboxNavigation');

export default function ExpoMapboxNavigationView(props: NavigationViewProps) {
  return <NativeView {...props} />;
}
