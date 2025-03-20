#include "variables.h"

#define MIRYOKU_LAYER_EXTRA \
&kp Q,                  &kp W,            &kp E,            &kp R,              &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,              &kp P,                \
U_MT(HRW_4, A),         U_MT(HRW_3, S),   U_MT(HRW_2, D),    U_MT(HRW_1, F),    U_MT(HRW_0, G),    U_MT(HRW_0, H),    U_MT(HRW_1, J),    U_MT(HRW_2, K),    U_MT(HRW_3, L),     U_MT(HRW_4, SQT),     \
U_LT(U_BUTTON, Z),      &kp X,            &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH),\
U_NP,                   U_NP,             U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_EXTRA( \
     K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04            U_MS_U           K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R   K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  U_VMT     U_MS_D           K25  K26  K27  K28  K29  &to U_BASE \
               K32  K33  K34                             K35  K36  K37