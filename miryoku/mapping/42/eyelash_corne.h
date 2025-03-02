// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,                               K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                               K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                               K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                               K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04                   XXX          K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14              XXX  XXX  XXX     K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  XXX              XXX          K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                                K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40


// Default settings for the Eyelash Corne
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
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

#define CONFIG_ZMK_DISPLAY_STATUS_SCREEN_BUILT_IN
#define CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_26
#define CONFIG_LV_FONT_DEFAULT_MONTSERRAT_26

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CORNE
