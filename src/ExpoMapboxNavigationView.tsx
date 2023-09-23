import { requireNativeViewManager } from 'expo-modules-core';
import * as React from 'react';
import * as Location from "expo-location"

import { ExpoMapboxNavigationViewProps } from './ExpoMapboxNavigation.types';

const NativeView: React.ComponentType<ExpoMapboxNavigationViewProps> =
  requireNativeViewManager('ExpoMapboxNavigation');

export default function ExpoMapboxNavigationView(props: ExpoMapboxNavigationViewProps) {
  const [location, setLocation] = React.useState<Location.LocationObject>();
  const [errorMsg, setErrorMsg] = React.useState<string>();

  React.useEffect(() => {
    (async () => {
      try {
        let { status } = await Location.requestForegroundPermissionsAsync();
        if (status !== Location.PermissionStatus.GRANTED) {
          setErrorMsg("Permission to access location was denied");
          console.error("Permission to access location was denied")
          return;
        }
        let location = await Location.getCurrentPositionAsync({});
        setLocation(location);
        
      } catch (error) {
        console.error(error)
      }
    })();
  }, []);


  React.useEffect(()=>{
    if (location){
      console.log(`LOCATION : ${location.coords}`)
    }
  },[location])

  return <NativeView {...props} />;
}
