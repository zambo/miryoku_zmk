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
U_LT(U_FUN, U_ESC)  K00  K01  K02  K03  K04            U_DR_U          K05  K06  K07  K08  K09  U_LT(U_MEDIA, U_BPC) \
U_LT(U_NUM, U_TAB)  K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R  K15  K16  K17  K18  K19  U_LT(U_NAV, XXX) \
U_LT(U_SYM, U_LSH)  K20  K21  K22  K23  K24  U_VMT     U_DR_D          K25  K26  K27  K28  K29  U_LT(U_MOUSE, XXX) \
                    K32  K33  K34                                      K35  K36  K37

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

