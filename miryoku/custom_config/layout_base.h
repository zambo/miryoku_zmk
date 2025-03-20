#include "variables.h"

#define MIRYOKU_LAYER_BASE \
&kp Q,                  &kp W,            &kp F,             &kp P,             &kp B,             &kp J,               &kp L,              &kp U,             &kp Y,             &kp SQT,              \
U_MT(HRW_4, A),         U_MT(HRW_3, R),   U_MT(HRW_2, S),    U_MT(HRW_1, T),    U_MT(HRW_0, G),    U_MT(HRW_0, M),      U_MT(HRW_1, N),     U_MT(HRW_2, E),    U_MT(HRW_3, I),     U_MT(HRW_4, O),      \
U_LT(U_BUTTON, Z),      &kp X,            &kp C,             &kp D,             &kp V,             &kp K,               &kp H,              &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,                   U_NP,             U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),    U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
U_LT(U_FUN, U_ESC)  K00  K01  K02  K03  K04            U_MS_U           K05  K06  K07  K08  K09  U_LT(U_NUM, BSPC) \
U_LT(U_NUM, U_TAB)  K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R   K15  K16  K17  K18  K19  U_LT(U_FUN, DEL) \
U_LT(U_SYM, U_LSH)  K20  K21  K22  K23  K24  U_VMT     U_MS_D           K25  K26  K27  K28  K29  U_LT(U_SYM, RET) \
                    K32  K33  K34                                       K35  K36  K37