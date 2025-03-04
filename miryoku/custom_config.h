// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define CVU &kp C_VOL_UP
#define CVD &kp C_VOLUME_DOWN
#define CMU &kp C_MUTE
#define CEN &kp KP_ENTER
#define CLE &kp LEFT
#define CRI &kp RIGHT
#define CUP &kp UP
#define CDN &kp DOWN

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1250
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3
#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_MS_U &mmv MOVE_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT
#define U_WH_U &msc SCRL_UP

#define CML &mmv_input_listener { input-processors = <&zip_xy_scaler 2 1>; };
#define CSL &msc_input_listener { input-processors = <&zip_xy_scaler 2 1>; };

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,                     K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                     K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                     K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                     K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04            CUP       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       CLE  CEN  CRI  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  CMU       CDN       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                      K35  K36  K37

#define MIRYOKU_ALTERNATIVES_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,                          U_MS_U,                  U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,                 U_MS_U,  U_BTN1,  U_MS_U,         U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,          CMU,            U_MS_U,                  U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                                                   U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MCUSTOMMAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE
#define MCUSTOMMAPPING MIRYOKU_LAYER_MOUSE

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",       sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(EXTRA,  "Extra",      sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(TAP,    "Tap",        sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(BUTTON, "Button",     sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(NAV,    "Nav",        sensor-bindings = <&left_right_encoder>; ) \
MIRYOKU_X(MOUSE,  "Mouse",      sensor-bindings = <&undo_redo_encoder>; ) \
MIRYOKU_X(MEDIA,  "Media",      sensor-bindings = <&volume_encoder>; ) \
MIRYOKU_X(NUM,    "Num",        sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(SYM,    "Sym",        sensor-bindings = <&scroll_encoder>; ) \
MIRYOKU_X(FUN,    "Fun",        sensor-bindings = <&scroll_encoder>; )

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

