//  Copyright (c) 2024 The ZMK Contributors
//  SPDX-License-Identifier: MIT

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE
#define MIRYOKU_CLIPBOARD_MAC

#define CONFIG_ZMK_DISPLAY

#define CONFIG_ZMK_SLEEP
#define CONFIG_ZMK_IDLE_SLEEP_TIMEOUT 1800000

#define CONFIG_WS2812_STRIP
#define CONFIG_ZMK_RGB_UNDERGLOW
#define CONFIG_ZMK_RGB_UNDERGLOW_ON_START 0

#define CONFIG_ZMK_RGB_UNDERGLOW_AUTO_OFF_IDLE
#define CONFIG_ZMK_RGB_UNDERGLOW_HUE_START 160
#define CONFIG_ZMK_RGB_UNDERGLOW_EFF_START 3

// https://zmk.dev/docs/config/bluetooth
// Enables a combination of settings that are planned to be default in future versions of ZMK to improve connection stability. Currently this only disables 2M PHY support.
#define CONFIG_ZMK_BLE_EXPERIMENTAL_CONN
#define CONFIG_ZMK_BLE_PASSKEY_ENTRY

// EC11 enable
#define CONFIG_EC11
#define CONFIG_EC11_TRIGGER_GLOBAL_THREAD

// Mouse enable
#define CONFIG_ZMK_MOUSE

#define CONFIG_ZMK_BACKLIGHT
#define CONFIG_ZMK_BACKLIGHT_BRT_START 100

// Uncomment the following line to increase the keyboard's wireless range
//#define CONFIG_BT_CTLR_TX_PWR_PLUS_8

// Enable eager debouncing
#define CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS
#define CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS 7