// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_WORKMAN
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_MAPPING_EXTENDED_THUMBS
#include "../swedish_keymap.h"


// redefine base QWERTY to include semicolon - thus swedish keyboard layout (boooring I know but still)
#define MIRYOKU_LAYER_BASE \
&kp SE_Q,             &kp SE_W,             &kp SE_E,             &kp SE_R,             &kp SE_T,             &kp SE_Y,             &kp SE_U,             &kp SE_I,             &kp SE_O,             &kp SE_P,             \
U_MT(LGUI, SE_A),     U_MT(LALT, SE_S),     U_MT(LCTRL, SE_D),    U_MT(LSHFT, SE_F),    &kp SE_G,             &kp SE_H,             U_MT(LSHFT, SE_J),    U_MT(LCTRL, SE_K),    U_MT(LALT, SE_L),     U_MT(LGUI, SE_OE),   \
U_LT(U_BUTTON, SE_Z), U_MT(RALT, SE_X),     &kp SE_C,             &kp SE_V,             &kp SE_B,             &kp SE_N,             &kp SE_M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SE_SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_SYM \
&kp LS(RA(NUM_8)),  &kp CRRT,       &kp LS(BSLH), &kp LS(NUM_8), &kp LS(RA(NUM_9)), U_NA,  &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SE_QUOT,          &kp RA(NUM_4),  &kp LS(NUM_5),&kp LS(RBKT),  &kp MINUS,         U_NA,  &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp RA(RBKT),       &kp LS(NUM_1),  &kp RA(NUM_2),&kp LS(NUM_3), &kp RA(NUM_7),     U_NA,  &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,                &kp LS(NUM_8),           &kp LS(NUM_9),     &kp UNDER,  U_NA,              U_NA,              U_NA,     U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp  COLON,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp SLASH,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

