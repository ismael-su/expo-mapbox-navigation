import { ViewProps } from "react-native";

type Coordinate = [number, number];

export type NavigationViewProps = {
  /* Origin [longitude, latitude] */
  origin: Coordinate;
  /* Destination [longitude, latitude] */
  destination: Coordinate;
  // Your mapbox public access token
  accessToken: string;
  /*  Whether to show map in dark mode */
  darkMode?: boolean
  /* Whether drawRoute or no, might cause crash on android because 
  NDK mismatch between React native greater than 0.70.X */
  drawRoute?: boolean;
} & ViewProps;
