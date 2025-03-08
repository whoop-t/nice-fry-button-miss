# nice-fry-button-miss

![Preview](https://github.com/whoop-t/nice-fry-button-miss/blob/main/.github/assets/frybuttonmiss.gif?raw=true)

## Quick setup

In your ZMK firmware, add the following:

Add remote to `west.yaml`
```yaml
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: whoop-t #new entry
      url-base: https://github.com/whoop-t #new entry
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: nice-fry-button-miss #new entry
      remote: whoop-t #new entry
      revision: main #new entry
  self:
    path: config
```

Add this module to `build.yaml`(this is for corne, but change for your keyboard if needed)
```yaml
include:
  - board: nice_nano_v2
    shield: corne_left nice_view_adapter nice_fry_button_miss #update entry
  - board: nice_nano_v2
    shield: corne_right nice_view_adapter nice_fry_button_miss #update entry
```

Also make sure to enable the custom status screen in your ZMK configuration, this would be your keyboards .conf file in the config directory:

```
CONFIG_ZMK_DISPLAY=y
CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM=y
```

## Configuration

Modify the behavior of this shield by adjusting these options in your personal configuration files. For a more detailed explanation, refer to [Configuration in the ZMK documentation](https://zmk.dev/docs/config).

| Option                                     | Type | Description                                                                                                                                                                                                                                                       | Default |
| ------------------------------------------ | ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------- |
| `CONFIG_NICE_RIGHT_ANIMATION`           | bool | If you find the animation distracting (or want to save on battery usage), you can turn it off by setting this option to `n`. This will use the last frame where fry missing the button.                                           | y       |
| `CONFIG_NICE_RIGHT_ANIMATION_MS`        | int  | Alternatively, you can slow down the animation. A high value, such as 96000, slows the animation considerably, showing the next frame every couple of seconds. The animation consists of 16 frames, and the default value of 960 milliseconds. | 960     |

## Acknowledgements
### Base Repo
https://github.com/M165437/nice-view-gem

### Making the art
https://www.pixilart.com

### Coverting art to C code
https://javl.github.io/image2cpp/

### Other image processing
https://www.iloveimg.com/
