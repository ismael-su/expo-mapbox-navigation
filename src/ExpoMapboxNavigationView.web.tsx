import * as React from "react";

import { ExpoMapboxNavigationViewProps } from "./ExpoMapboxNavigation.types";

export default function ExpoMapboxNavigationView(
  props: ExpoMapboxNavigationViewProps
) {
  return (
    <div>
      <span>Mapbox navigation not supported on web</span>
    </div>
  );
}
