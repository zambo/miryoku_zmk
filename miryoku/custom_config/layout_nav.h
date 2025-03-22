#include "variables.h"

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp HRW_4,          &kp HRW_3,        &kp HRW_2,         &kp HRW_1,         &kp HRW_0,         &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_NAV( \
     K00, K01, K02, K03, K04,                              K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                              K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                              K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                              K35, K36, K37, N38, N39 \
) \
&kp LG(GRAVE)  K00  K01  K02  K03  K04            U_DR_U            K05  K06  K07  K08  K09  XXX \
XXX            K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R    K15  K16  K17  K18  K19  XXX \
XXX            K20  K21  K22  K23  K24  U_VMT     U_DR_D            K25  K26  K27  K28  K29  &to U_GAME \
                         K32  K33  K34                              K35  K36  K37
