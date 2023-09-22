import { NativeModulesProxy, EventEmitter, Subscription } from 'expo-modules-core';

// Import the native module. On web, it will be resolved to ExpoMapboxNavigation.web.ts
// and on native platforms to ExpoMapboxNavigation.ts
import ExpoMapboxNavigationModule from './ExpoMapboxNavigationModule';
import ExpoMapboxNavigationView from './ExpoMapboxNavigationView';
import { ChangeEventPayload, ExpoMapboxNavigationViewProps } from './ExpoMapboxNavigation.types';

// Get the native constant value.
export const PI = ExpoMapboxNavigationModule.PI;

export function hello(): string {
  return ExpoMapboxNavigationModule.hello();
}

export async function setValueAsync(value: string) {
  return await ExpoMapboxNavigationModule.setValueAsync(value);
}

const emitter = new EventEmitter(ExpoMapboxNavigationModule ?? NativeModulesProxy.ExpoMapboxNavigation);

export function addChangeListener(listener: (event: ChangeEventPayload) => void): Subscription {
  return emitter.addListener<ChangeEventPayload>('onChange', listener);
}

export { ExpoMapboxNavigationView, ExpoMapboxNavigationViewProps, ChangeEventPayload };
