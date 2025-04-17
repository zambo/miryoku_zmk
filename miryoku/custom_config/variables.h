
#define XXX &none

// Super key
#define SUP LG(LS(LC(LALT)))
// #define STD &studio_unlock

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1250
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

// Media keys
#define U_VUP         &kp C_VOL_UP
#define U_VDN         &kp C_VOLUME_DOWN
#define U_VMT         &kp C_MUTE

// Direction keys
#define U_DR_E        &kp ENTER
#define U_DR_D        &kp DOWN
#define U_DR_L        &kp LEFT
#define U_DR_R        &kp RIGHT
#define U_DR_U        &kp UP

// MOD keys
#define U_ESC         &gresc
#define U_RET         &kp RET
#define U_BPC         &bspc_del
#define U_DEL         &kp DEL
#define U_SPC         &kp SPACE
#define U_TAB         &kp TAB
#define U_LSH         &kp LSHFT
#define U_LCT         &kp LCTRL
#define U_LAL         &kp LALT
#define U_LCM         &kp LGUI

// Left Outer Pinky keys
#define LOPT          &kp LG(LS(LC(LA(HASH))))
#define LOPM          &kp LG(LS(LC(LA(EXCLAMATION))))
#define LOPB          &kp GLOBE

// Righp Outer Pinky keys
#define ROPT          &kp LG(LS(LC(LA(DOLLAR))))
#define ROPM          &kp COLON
#define ROPB          &kp LG(LS(LC(LA(AT))))

// Layer switching keys
#define U_LG          &to U_GAME
#define U_LB          &to U_BASE

// Mouse keys
#define U_BTN1        &mkp MB1
#define U_BTN2        &mkp MB2
#define U_BTN3        &mkp MB3
#define U_MS_D        &mmv MOVE_DOWN
#define U_MS_L        &mmv MOVE_LEFT
#define U_MS_R        &mmv MOVE_RIGHT
#define U_MS_U        &mmv MOVE_UP
#define U_WH_D        &msc SCRL_DOWN
#define U_WH_L        &msc SCRL_LEFT
#define U_WH_R        &msc SCRL_RIGHT
#define U_WH_U        &msc SCRL_UP

// MacOS Window Management
#define U_AFW         &kp LG(TAB)         // Tab Forward
#define U_ABW         &kp LG(LS(TAB))     //  Tab Backward
#define U_WFW         &kp LG(GRAVE)       //  Current App Window Forward
#define U_WBW         &kp LG(LS(GRAVE))   //  Current App Window Backward
#define U_TFW         &kp LC(TAB)         //  Current App Tab Forward
#define U_BFW         &kp LC(LS(TAB))     //  Current App Tab Backward

// Homerow keys
// Index (1) to Pinky (4)
// Zero can be used as the Super key
// 4 3 2 1 0    0 1 2 3 4
#define HRW_0         SUP
#define HRW_1         LGUI
#define HRW_2         LALT
#define HRW_3         LCTRL
#define HRW_4         LSHFT
