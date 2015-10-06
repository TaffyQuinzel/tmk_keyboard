#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  &|  [|  {|  }|  (|  =|  *|  )|  +|  ]|  !|  #|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  ;|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  @|    \|
     * |-----------------------------------------------------------|
     * |Fn1   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Fn0     |  '|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Fn0       |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Gui |      Space             |Alt |Gui |App |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, SCLN,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   LBRC,RBRC,BSLS, \
        CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S    ,,     ENT, \
        LSFT,QUOT,Q,   J,   K,   X,   B,   M,   ,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP, RCTL),

    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  &|  [|  {|  }|  (|  =|  *|  )|  +|  ]|  !|  #|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  ;|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  @|    \|
     * |-----------------------------------------------------------|
     * |Fn1   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Fn0     |  '|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Fn0       |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Gui |      Space             |Alt |Gui |App |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, SCLN,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   LBRC,RBRC,BSLS, \
        CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S    ,,     ENT, \
        LSFT,QUOT,Q,   J,   K,   X,   B,   M,   ,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP, RCTL),

    /* Overlay 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |~  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |Caps  |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|`  |~  |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,TRNS,TRNS,ESC, TRNS,TRNS,TRNS,HOME,UP,  END, PSCR,SLCK,PAUS,INS,  \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,SPC, PGDN,GRV, FN1, TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
