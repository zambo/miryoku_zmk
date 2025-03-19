// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "custom_config/variables.h"

// just making it obvious and decluttered
// so I can curtomize layer by layer
// and add / exclude layers as needed
#include "custom_config/layout_base.h"
#include "custom_config/layout_extra.h"
#include "custom_config/layout_tap.h"
#include "custom_config/layout_button.h"
#include "custom_config/layout_nav.h"
#include "custom_config/layout_mouse.h"
#include "custom_config/layout_media.h"
#include "custom_config/layout_num.h"
#include "custom_config/layout_sym.h"
#include "custom_config/layout_fun.h"
#include "custom_config/layout_game.h"


#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
  K00, K01, K02, K03, K04,                           K05, K06, K07, K08, K09, \
  K10, K11, K12, K13, K14,                           K15, K16, K17, K18, K19, \
  K20, K21, K22, K23, K24,                           K25, K26, K27, K28, K29, \
  N30, N31, K32, K33, K34,                           K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  U_BPC \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  XXX \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  XXX \
                  K32  K33  K34                             K35  K36  K37

#define MIRYOKU_LAYERMAPPING_MOUSE( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
XXX   K00  K01  K02  K03  K04            U_MS_U             K05  K06  K07  K08  K09  XXX \
XXX   K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R     K15  K16  K17  K18  K19  XXX \
XXX   K20  K21  K22  K23  K24  U_VMT     U_MS_D             K25  K26  K27  K28  K29  XXX \
                  K32  K33  K34                             K35  K36  K37


#define MIRYOKU_LAYERMAPPING_NAV( \
        K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
        K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
        K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
        N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
XXX   K00  K01  K02  K03  K04            U_DR_U            K05  K06  K07  K08  K09  U_BPC \
XXX   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R    K15  K16  K17  K18  K19  XXX \
XXX   K20  K21  K22  K23  K24  U_VMT     U_DR_D            K25  K26  K27  K28  K29  XXX \
                  K32  K33  K34                            K35  K36  K37


#define MIRYOKU_LAYERMAPPING_SYM( \
      K00, K01, K02, K03, K04,                              K05, K06, K07, K08, K09, \
      K10, K11, K12, K13, K14,                              K15, K16, K17, K18, K19, \
      K20, K21, K22, K23, K24,                              K25, K26, K27, K28, K29, \
      N30, N31, K32, K33, K34,                              K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  U_BPC \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  XXX \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  XXX \
                  K32  K33  K34                             K35  K36  K37

#define MIRYOKU_LAYER_NUMPAD \
&kp LBKT,          &kp KP_N7,           &kp KP_N8,              &kp KP_N9,            &kp RBKT,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp KP_N4,           &kp KP_N5,              &kp KP_N6,            &kp KP_EQUAL,     U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp KP_N1,           &kp KP_N2,              &kp KP_N3,            &kp BSLH,         U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,                &kp KP_DOT,             &kp KP_N0,            &kp KP_MINUS,     U_NA,              U_NA,              U_NA,              U_NP,              U_NP



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
MIRYOKU_X(FUN,    "Fun",        sensor-bindings = <&up_down_encoder>; ) \
MIRYOKU_X(GAME,   "Game",       sensor-bindings = <&up_down_encoder>; )

#define U_BASE    0
#define U_EXTRA   1
#define U_TAP     2
#define U_BUTTON  3
#define U_NAV     4
#define U_MOUSE   5
#define U_MEDIA   6
#define U_NUM     7
#define U_SYM     8
#define U_FUN     9
#define U_GAME   10

