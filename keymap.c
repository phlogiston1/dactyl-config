/*missing snhit
change desktops
close window
f11/f12
percent
one handed copy/paste and save and command palate
backtick
thing to bring up terminal [done ig]
change which keys have modifiers [done]
put symbols in better places
layer with html tags, java snippets, and other universal keywords
numlock [done]
move scroll to pinky
reverse launch keys
*/
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _DVORAK 0
#define _QWERTY 1
#define _NAV 2
#define _SYMBOLS 3
#define _NUMPAD 4
#define _CONTROL 5
#define _LAUNCH 6
#define _CODE 7


// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define CTL_TAB  CTL_T(KC_TAB)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define QWERTY  MO(_QWERTY)
#define NAV MO(_NAV)
#define SYMBOLS MO(_SYMBOLS)
#define NUMPAD MO(_NUMPAD)
#define CONTROL MO(_CONTROL)
#define LAUNCH MO(_LAUNCH)
#define CODE MO(_CODE)

//change all the definitions to enums:
enum custom_keycodes {
  PUBLIC = SAFE_RANGE,
  PRIVATE,
  PROTECTED,

  STATIC,
  FINAL,

  CLASS,
  EXTENDS,
  IMPLEMENTS,
  INTERFACE,

  INT,
  DOUBLE,
  FLOAT,
  CHAR,
  STRING,
  BOOL,
  BOOLEAN,
  VOID,

  TRU,
  FALS,

  NEW,
  MAIN,

  IF,
  ELSE,
  FOR,
  WHILE,
  DO,
  SWITCH,
  CASE,
  BREAK,
  DEFAULT,
  RETURN,
  INCLUDE,
  DEFINE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case PUBLIC:
        if (record->event.pressed) {
          SEND_STRING("public ");
        }
        break;
      case PRIVATE:
        if (record->event.pressed) {
          SEND_STRING("private ");
        }
        break;
      case PROTECTED:
        if (record->event.pressed) {
          SEND_STRING("protected ");
        }
        break;
      case STATIC:
        if (record->event.pressed) {
          SEND_STRING("static ");
        }
        break;
      case FINAL:
        if (record->event.pressed) {
          SEND_STRING("final ");
        }
        break;
      case CLASS:
        if (record->event.pressed) {
          SEND_STRING("class ");
        }
        break;
      case EXTENDS:
        if (record->event.pressed) {
          SEND_STRING("extends ");
        }
        break;
      case IMPLEMENTS:
        if (record->event.pressed) {
          SEND_STRING("implements ");
        }
        break;
      case INTERFACE:
        if (record->event.pressed) {
          SEND_STRING("interface ");
        }
        break;
      case INT:
        if (record->event.pressed) {
          SEND_STRING("int ");
        }
        break;
      case DOUBLE:
        if (record->event.pressed) {
          SEND_STRING("double ");
        }
        break;
      case FLOAT:
        if (record->event.pressed) {
          SEND_STRING("float ");
        }
        break;
      case CHAR:
        if (record->event.pressed) {
          SEND_STRING("char ");
        }
        break;
      case STRING:
        if (record->event.pressed) {
          SEND_STRING("String ");
        }
        break;
      case BOOL:
        if (record->event.pressed) {
          SEND_STRING("bool ");
        }
        break;
      case BOOLEAN:
        if (record->event.pressed) {
          SEND_STRING("boolean ");
        }
        break;
      case VOID:
        if (record->event.pressed) {
          SEND_STRING("void ");
        }
        break;
      case TRU:
        if (record->event.pressed) {
          SEND_STRING("true");
        }
        break;
      case FALS:
        if (record->event.pressed) {
          SEND_STRING("false");
        }
        break;
      case NEW:
        if (record->event.pressed) {
          SEND_STRING("new ");
        }
        break;
      case MAIN:
        if (record->event.pressed) {
          SEND_STRING("main (");
        }
        break;
      case IF:
        if (record->event.pressed) {
          SEND_STRING("if (");
        }
        break;
      case ELSE:
        if (record->event.pressed) {
          SEND_STRING("else {");
        }
        break;
      case FOR:
        if (record->event.pressed) {
          SEND_STRING("for (");
        }
        break;
      case WHILE:
        if (record->event.pressed) {
          SEND_STRING("while (");
        }
        break;
      case DO:
        if (record->event.pressed) {
          SEND_STRING("do {");
        }
        break;
      case SWITCH:
        if (record->event.pressed) {
          SEND_STRING("switch (");
        }
        break;
      case CASE:
        if (record->event.pressed) {
          SEND_STRING("case ");
        }
        break;
      case BREAK:
        if (record->event.pressed) {
          SEND_STRING("break;");
        }
        break;
      case DEFAULT:
        if (record->event.pressed) {
          SEND_STRING("default:");
        }
        break;
      case RETURN:
        if (record->event.pressed) {
          SEND_STRING("return ");
        }
        break;
      case INCLUDE:
        if (record->event.pressed) {
          SEND_STRING("#include ");
        }
        break;
      case DEFINE:
        if (record->event.pressed) {
          SEND_STRING("#define ");
        }
        break;
    }
    return true;
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DVORAK] = LAYOUT(
  KC_QUOT, KC_COMM, KC_DOT,  KC_P, KC_Y,                                     KC_F, KC_G, KC_C,    KC_R,   KC_Z,
  KC_A,    KC_O,    KC_E,    KC_U, KC_I,                                     KC_D, KC_H, KC_T,    KC_N,   KC_S,
  KC_SCLN, KC_Q,    KC_J,    KC_K, KC_X,                                     KC_B, KC_M, KC_W,    KC_V,   KC_L,
           KC_LALT, KC_LCTL,                                                             KC_LGUI, KC_ESC,
                                         CONTROL,  SYMBOLS,   NAV,     NUMPAD,
                                         KC_LSFT,  CTL_TAB,    CODE, KC_SPC,
                                         KC_BSPC, LAUNCH,   KC_RALT,  SFT_ENT
),

[_QWERTY] = LAYOUT(
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT,
                        ____, ____,                                                        ____, ____,
                                                    ____, ____, ____, ____,
                                                    ____,  ____,  ____,  ____,
                                                    ____,   ____,   ____, ____
  ),

[_NAV] = LAYOUT(
  ____,KC_WH_L,KC_MU,KC_WH_R,KC_WH_U,                       KC_HOME, C(KC_LEFT),KC_UP,C(KC_RIGHT),KC_PGUP,
  ____, KC_ML, KC_MD, KC_MR, KC_WH_D,                       KC_END , KC_LEFT, KC_DOWN, KC_RIGHT,  KC_PGDN,
  ____, ____,  ____,  ____,  ____,                          ____, C(G(KC_LEFT)), G(KC_TAB), C(G(KC_RIGHT)),  ____,
        ____,  ____,                                                          KC_MB1,  KC_MB2,
                                 KC_MB2,KC_MB1, ____, ____,
                                   ____, ____,  ____, ____,
                                   ____, ____,  ____, ____
),

//[{}(=*)+]!~$/<#:>?/--/?>?\_\@|?>~$/<<#:

[_SYMBOLS] = LAYOUT(
  KC_7,    KC_5,   KC_3,    KC_1,   KC_9,                             KC_0,    KC_2,     KC_4,    KC_6,    KC_8,
  KC_LBRC, KC_LCBR,KC_RCBR, KC_LPRN,KC_EQL,                           KC_ASTR, KC_RPRN,  KC_PLUS, KC_RBRC, KC_EXLM,
  KC_TILD, KC_DLR, KC_SLSH, KC_LABK,KC_HASH,                          KC_COLN, KC_RABK,  KC_QUES, KC_SLSH, KC_MINS,
           KC_AT , KC_PIPE,                                                               KC_BSLS, KC_UNDS,
                                             ____, ____,  KC_PERC, ____,
                                             ____,____,  ____, KC_CIRC,
                                             ____, ____,  ____, KC_GRV
),

[_NUMPAD] = LAYOUT(
  ____,    ____,   ____,    ____,   ____,                             KC_PEQL, KC_P7, KC_P8, KC_P9, KC_CIRC,
  KC_Y,    KC_X,KC_LPRN, KC_RPRN,KC_PERC,                             KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS,
  ____,    ____,   ____,    ____,   ____,                             KC_PSLS, KC_P1, KC_P2, KC_P3, KC_PMNS,
           ____,   ____,                                                              KC_P0, KC_PDOT,
                                             ____, ____,  ____, ____,
                                             KC_NUM, ____,  ____, ____,
                                             ____, ____,  ____, ____
),

/*
copy/paste/cut/find/ (KC_<COPY/PASTE/CUT/FIND>)
fn keys (KC_F<N>)
mute/volup/voldown (KC_<MUTE/VOLU/VOLD>)
media next/prev/play/pause/stop (KC_<MSTP/MPLY/MNXT/MPRV>)
browser back/forward/reload (KC_<WBAK/WFWD/WREF>)
brightness up/down (KC_<BRIU/BRID>)
sleep/wake/ (KC_SLEP/WAKE)
autocorrect - AC_<ON/OFF>
bootloader mode (QK_BOOT)
tapping term (DT_PRNT, DT_UP, DT_DOWN)
*/

[_CONTROL] = LAYOUT(
  KC_F7,   KC_F5,   KC_F3,   KC_F1,  KC_F9,                            KC_F11,KC_F2,   KC_F4,   KC_F6,   KC_F8,
  C(KC_S), C(KC_X), C(KC_V), C(KC_C), C(KC_Z),                         KC_F12, KC_MNXT, KC_MPLY, KC_MPRV, KC_MSTP,
  C(S(KC_P)), KC_VOLD, KC_MUTE, KC_VOLU,KC_SLEP,                          G(S(KC_S)), KC_WFWD, KC_WREF, KC_WBAK, QK_BOOT,
            KC_BRID,   KC_BRIU,                                                             ____,   ____,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____
),

/*
Launch keys:
  calculator,
  mail,
  my computer,
  browser search/home/favorites
  (KC_<CALC/MAIL/MYCM/WSCH/WFAV>)
  ctrl+t (new tab)
  alt+enter (display properties)

  control panel,
  assistant,
  (KC_<CPNL/ASST>)

  windows launch key shortcuts
  alt+tab
  ctrl+shift+esc
*/

[_LAUNCH] = LAYOUT(
  ____,      ____,   ____,     ____,   ____,                          ____, G(KC_5), G(KC_6), G(KC_7), G(KC_8),
  KC_ASST, KC_CALC, KC_MAIL, KC_MYCM, KC_CPNL,                        A(KC_F4), G(KC_1), G(KC_2), G(KC_3), G(KC_4),
  KC_WHOM,KC_WFAV,KC_WSCH,C(KC_TAB),   ____,                          ____,    ____,    ____,    ____,    ____,
           ____,   ____,                                                          ____, ____,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____
),

[_CODE] = LAYOUT(
  ____,    BREAK,   ____,    ELSE,   FINAL,                             IMPLEMENTS,    EXTENDS,    CHAR,    FLOAT,    PROTECTED,
  TRU,    SWITCH,   FOR,    IF,   STATIC,                             MAIN,    NEW,    VOID,    INT,    PUBLIC,
  FALS,    CASE,   WHILE,    RETURN,   ____,                             INTERFACE,    CLASS,    STRING,    DOUBLE,    PRIVATE,
           DEFAULT,   DO,                                                              BOOLEAN,    BOOL,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____,
                                             ____, ____,  ____, ____
)

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

