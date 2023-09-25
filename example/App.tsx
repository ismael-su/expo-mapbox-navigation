import { StyleSheet, Text, View } from 'react-native';
import React from 'react';
import * as Location from "expo-location"

import * as ExpoMapboxNavigation from 'expo-mapbox-navigation';

export default function App() {
  // const [location, setLocation] = React.useState<Location.LocationObject>();
  // const [errorMsg, setErrorMsg] = React.useState<string>();

  // React.useEffect(() => {
  //   (async () => {
  //     try {
  //       let { status } = await Location.requestForegroundPermissionsAsync();
  //       if (status !== Location.PermissionStatus.GRANTED) {
  //         setErrorMsg("Permission to access location was denied");
  //         console.error("Permission to access location was denied")
  //         return;
  //       }
  //       let location = await Location.getCurrentPositionAsync({});
  //       setLocation(location);
        
  //     } catch (error) {
  //       console.error(error)
  //     }
  //   })();
  // }, []);


  // React.useEffect(()=>{
  //   if (location){
  //     console.log(`LOCATION : ${location.coords}`)
  //   }
  // },[location])

  return (
    <View style={styles.container}>
     <ExpoMapboxNavigation.NavigationView 
      style={{ flex:1, width: '100%', height: '100%'}} 
      destination={[33, -7]} />
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
