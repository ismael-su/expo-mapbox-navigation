import { ConfigPlugin, withGradleProperties,
  withSettingsGradle, 
  withPlugins, withProjectBuildGradle, withAppBuildGradle } from "expo/config-plugins";


const maven = (secretKey: string) => `
allprojects {
  repositories {
      mavenCentral()
      maven {
          url 'https://api.mapbox.com/downloads/v2/releases/maven'
          authentication {
              basic(BasicAuthentication)
          }
          credentials {
              // Do not change the username below.
              // This should always be "mapbox" (not your username).
              username = "mapbox"
              // Use the secret token you stored in gradle.properties as the password
              password = "${secretKey}"
          }
      }
  }
}
`

const withAndroidMapbox: ConfigPlugin<{secretKey: string}> = (config, { secretKey }) => {
return withProjectBuildGradle(config, async (config) => {
  
  config.modResults.contents = config.modResults.contents + maven(secretKey)
  return config
})
};

export default withAndroidMapbox