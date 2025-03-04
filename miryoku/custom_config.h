// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define XXX &none

#define CVU &kp C_VOL_UP
#define CVD &kp C_VOLUME_DOWN
#define CMU &kp C_MUTE
#define CEN &kp KP_ENTER
#define CLE &kp LEFT
#define CRI &kp RIGHT
#define CUP &kp UP
#define CDN &kp DOWN


#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,                     K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                     K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                     K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                     K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04            CUP       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       CLE  CEN  CRI  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  CMU       CDN       K25  K26  K27  K28  K29  XXX \
      CVD CVU  K32  K33  K34                      K35  K36  K37


#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE
