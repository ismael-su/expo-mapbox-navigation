import { StyleSheet, Text, View } from 'react-native';
import React from "react"
import {ExpoMapboxNavigationView} from "expo-mapbox-navigation"

export default function App() {
  return (
    <View style={styles.container}>
      <ExpoMapboxNavigationView origin={[44, 7]} destination={[44.05, 7]} accessToken={''} />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
