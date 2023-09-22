import * as React from 'react';

import { ExpoMapboxNavigationViewProps } from './ExpoMapboxNavigation.types';

export default function ExpoMapboxNavigationView(props: ExpoMapboxNavigationViewProps) {
  return (
    <div>
      <span>{props.name}</span>
    </div>
  );
}
