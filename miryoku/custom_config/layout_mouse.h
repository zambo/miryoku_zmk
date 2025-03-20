#include "variables.h"

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp HRW_4,         &kp HRW_3,         &kp HRW_2,         &kp HRW_1,         &kp HRW_0,         U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,                            K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                            K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                            K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                            K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04            U_MS_U           K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14    U_MS_L  U_BTN1  U_MS_R   K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  U_VMT     U_MS_D           K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                             K35  K36  K37