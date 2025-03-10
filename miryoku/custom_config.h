// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

// #define STD &studio_unlock

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1250
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

// Media keys
#define U_VUP         &kp C_VOL_UP
#define U_VDN         &kp C_VOLUME_DOWN
#define U_VMT         &kp C_MUTE

// Direction keys
#define U_DR_E        &kp ENTER
#define U_DR_D        &kp DOWN
#define U_DR_L        &kp LEFT
#define U_DR_R        &kp RIGHT
#define U_DR_U        &kp UP

// MOD keys
#define U_ESC         &kp ESC
#define U_RET         &kp RET
#define U_BPC         &kp BSPC
#define U_DEL         &kp DEL
#define U_SPC         &kp SPACE
#define U_TAB         &kp TAB
#define U_LSH         &kp LSHFT
#define U_LCT         &kp LCTRL
#define U_LAL         &kp LALT
#define U_LCM         &kp LGUI

// Layer switching keys
#define U_LG          &to U_GAME
#define U_LB          &to U_BASE

// Mouse keys
#define U_BTN1        &mkp MB1
#define U_BTN2        &mkp MB2
#define U_BTN3        &mkp MB3
#define U_MS_D        &mmv MOVE_DOWN
#define U_MS_L        &mmv MOVE_LEFT
#define U_MS_R        &mmv MOVE_RIGHT
#define U_MS_U        &mmv MOVE_UP
#define U_WH_D        &msc SCRL_DOWN
#define U_WH_L        &msc SCRL_LEFT
#define U_WH_R        &msc SCRL_RIGHT
#define U_WH_U        &msc SCRL_UP

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
        K00, K01, K02, K03, K04,                           K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                           K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                           K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                           K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U          K05  K06  K07  K08  K09  XXX \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R  K15  K16  K17  K18  K19  XXX \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D          K25  K26  K27  K28  K29  XXX \
                  K32  K33  K34                            K35  K36  K37

#define MIRYOKU_LAYERMAPPING_BASE( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  U_BPC \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  U_LG \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  U_LB \
                  K32  K33  K34                             K35  K36  K37

#define MIRYOKU_LAYERMAPPING_MOUSE( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_MS_U           K05  K06  K07  K08  K09  U_BPC \
U_TAB   K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R   K15  K16  K17  K18  K19  U_LG \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_MS_D           K25  K26  K27  K28  K29  U_LB \
                  K32  K33  K34                             K35  K36  K37

#define MIRYOKU_LAYERMAPPING_NAV( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  U_DEL \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  U_LG \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  U_LB \
                  K32  K33  K34                             K35  K36  K37


// For now, it's simply a QWERTY without home row mods, need to experiment before update
#define MIRYOKU_LAYER_GAME \
U_ESC,    &kp Q,    &kp W,    &kp E,      &kp R,      &kp T,              U_DR_U,             &kp Y,    &kp U,     &kp I,       &kp O,    &kp P,      U_NP,      \
U_TAB,    &kp A,    &kp S,    &kp D,      &kp F,      &kp G,    U_DR_L,   U_DR_E,   U_DR_R,   &kp H,    &kp J,     &kp K,       &kp L,    &kp SQT,    U_NP,      \
U_LSH,    &kp Z,    &kp X,    &kp C,      &kp V,      &kp B,  U_VMT,      U_DR_D,             &kp N,    &kp M,     &kp COMMA,   &kp DOT,  &kp SLASH,  U_LB,      \
          U_NP,     U_NP,     U_LCT,      U_LAL,      U_LCM,                                  U_NU,     U_NU,      U_NU,        U_NP,     U_NP


#define MIRYOKU_LAYERMAPPING_GAME( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  U_DEL \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  U_LG \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  U_LB \
                  K32  K33  K34                             K35  K36  K37


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",       sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(EXTRA,  "Extra",      sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(TAP,    "Tap",        sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(BUTTON, "Button",     sensor-bindings = <&rgb_encoder>; ) \
MIRYOKU_X(NAV,    "Nav",        sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(MOUSE,  "Mouse",      sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(MEDIA,  "Media",      sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(NUM,    "Num",        sensor-bindings = <&left_right_encoder>; ) \
MIRYOKU_X(SYM,    "Sym",        sensor-bindings = <&undo_redo_encoder>; ) \
MIRYOKU_X(FUN,    "Fun",        sensor-bindings = <&up_down_encoder>; )

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

