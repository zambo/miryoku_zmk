// solasta
#define MIRYOKU_LAYER_GAME \
&kp Q,          &kp W,          &kp E,  &kp M,  &kp B,          U_NU,   U_NU,   U_NU,   U_NU,   U_NU,      \
&kp A,          &kp S,          &kp D,  &kp J,  &kp SQT,        U_NU,   U_NU,   U_NU,   U_NU,   U_NU,    \
&kp PG_UP,      &kp PG_DN,      &kp C,  &kp I,  &kp F5,         U_NU,   U_NU,   U_NU,   U_NU,   U_NU,  \
U_NP,           U_NP,           U_LAL,  U_LCM,  U_SPC,          U_NU,   U_NU,   U_NU,   U_NP,   U_NP

#define MIRYOKU_LAYERMAPPING_GAME( \
      K00, K01, K02, K03, K04,                              K05, K06, K07, K08, K09, \
      K10, K11, K12, K13, K14,                              K15, K16, K17, K18, K19, \
      K20, K21, K22, K23, K24,                              K25, K26, K27, K28, K29, \
      N30, N31, K32, K33, K34,                              K35, K36, K37, N38, N39 \
) \
U_ESC   K00  K01  K02  K03  K04            U_DR_U           K05  K06  K07  K08  K09  XXX \
U_TAB   K10  K11  K12  K13  K14    U_DR_L  U_DR_E  U_DR_R   K15  K16  K17  K18  K19  XXX \
U_LSH   K20  K21  K22  K23  K24  U_VMT     U_DR_D           K25  K26  K27  K28  K29  &to U_BASE \
                  K32  K33  K34                             K35  K36  K37
