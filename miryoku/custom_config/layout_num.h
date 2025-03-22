#include "variables.h"

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,          &kp HRW_0,         &kp HRW_1,         &kp HRW_2,         &kp HRW_3,         &kp HRW_4,         \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,           U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,          U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_NUM( \
     K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04            U_MS_U           K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R   K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  U_VMT     U_MS_D           K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                             K35  K36  K37
