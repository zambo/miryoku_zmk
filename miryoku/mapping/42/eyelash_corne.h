// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUT_MAPPING_EYELASH_CORNE)

#define XXX &none

#define SCROLL_ENCODER_CONFIG \
scroll_encoder: scroll_encoder { \
     compatible = "zmk,behavior-sensor-rotate"; \
     #sensor-binding-cells = <0>; \
     bindings = <&msc SCRL_DOWN>, <&msc SCRL_UP>; \
     tap-ms = <30>; \
};

// For volume control
#define VOLUME_ENCODER_CONFIG \
volume_encoder: volume_encoder { \
     compatible = "zmk,behavior-sensor-rotate"; \
     #sensor-binding-cells = <0>; \
     bindings = <&kp C_VOL_DN>, <&kp C_VOL_UP>; \
};

// Define the entire sensor-bindings assignment as a variable
#define SENSOR_BINDING_ASSIGNMENT sensor-bindings=&scroll_encoder

// For page up/down
#define PAGE_ENCODER_CONFIG \
page_encoder: page_encoder { \
     compatible = "zmk,behavior-sensor-rotate"; \
     #sensor-binding-cells = <0>; \
     bindings = <&kp PAGE_DOWN>, <&kp PAGE_UP>; \
};


#define MIRYOKU_LAYOUT_MAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,                     K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                     K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                     K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                     K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04             U_MS_U          K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14     U_MS_L  U_BTN1  U_MS_R  K15  K16  K17  K18  K19  XXX \
               K32  K33  K34  XXX        U_MS_D          K35  K36  K37                \
               SENSOR_BINDING_ASSIGNMENT

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUT_MAPPING_EYELASH_CORNE
