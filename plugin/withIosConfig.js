const { withDangerousMod } = require("@expo/config-plugins");
const fs = require("fs/promises");
const path = require("path");

/**
 * This plugin adds a post-install step to the Podfile that addresses linking issues between pods and xcframeworks.
 * In this case, the navigation library is added as an xcframework, and the maps library is added as a pod
 *
 * See https://github.com/CocoaPods/CocoaPods/issues/11079#issuecomment-984670700
 */

const applyPodfilePostInstallModifications = (src) => {
  return src.replace(
    "post_install do |installer|",
    `post_install do |installer|
      installer.pods_project.targets.each do |target|
          if (target.name.include? 'MapboxMaps' or target.name.include? 'Turf')
            target.build_configurations.each do |config|
              config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
            end
          end
        end`
  );
};

const withIosPostInstallStep = (config) =>
  withDangerousMod(config, [
    "ios",
    async (exportedConfig) => {
      const file = path.join(
        exportedConfig.modRequest.platformProjectRoot,
        "Podfile"
      );

      const contents = await fs.readFile(file, "utf8");
      await fs.writeFile(
        file,
        applyPodfilePostInstallModifications(contents),
        "utf-8"
      );

      return exportedConfig;
    },
  ]);

const withIosTokenInfoPlist = (config, accessToken) => {
  if (!config.ios) {
    config.ios = {};
  }
  if (!config.ios.infoPlist) {
    config.ios.infoPlist = {};
  }

  config.ios.infoPlist["MBXAccessToken"] = accessToken;

  return config;
};

const withIosConfig = (config, { accessToken }) => {
  const configWithPostInstallStep = withIosPostInstallStep(config);
  const configWithAccessToken = withIosTokenInfoPlist(
    configWithPostInstallStep,
    accessToken
  );
  return configWithAccessToken;
};

module.exports = withIosConfig;
