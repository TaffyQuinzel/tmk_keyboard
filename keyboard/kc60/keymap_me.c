#include "keymap_me.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap 0: Default Layer
   * ,-----------------------------------------------------------.
   * |Fn1|  &|  [|  {|  }|  (|  =|  *|  )|  +|  ]|  !|  #|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  ;|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  @|    \|
   * |-----------------------------------------------------------|
   * |Esc   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
   * |-----------------------------------------------------------|
   * |L-Shift |  '|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|R-Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Alt |Gui |          Space         |Alt |Gui |Fn0 |Ctrl|
   * `-----------------------------------------------------------'
   */
  [0] = {
    KC_ESC, LSFT(KC_7),KC_LBRC,LSFT(KC_LBRC),LSFT(KC_RBRC),LSFT(KC_9),KC_EQL,LSFT(KC_8),LSFT(KC_0),LSFT(KC_EQL),KC_RBRC,LSFT(KC_1),LSFT(KC_3),KC_BSPC, \
    KC_TAB, KC_SCLN,KC_COMM,KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,   KC_C,   KC_R, KC_L,KC_SLSH,LSFT(KC_2),KC_BSLS, \
    KC_FN0, KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N, KC_S, KC_MIN,KC_ENT, \
    KC_LSFT,KC_QUOT,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V, KC_Z,       KC_RSFT, \
    KC_LCTL,KC_LALT,KC_LGUI,          KC_SPC,                       KC_RALT,KC_RGUI,KC_FN1, KC_RCTL},

  /* Keymap 1: Fn0 Layer
   * ,-----------------------------------------------------------.
   * |  ~|  %|  7|  5|  3|  1|  9|  0|  2|  4|  6|  8|  `|Delete |
   * |-----------------------------------------------------------|
   * |  $  |Vmu|V- |V+ |   |   |   |PgD|PgU|Hom|End|   |   |Ins  |
   * |-----------------------------------------------------------|
   * |Caps  |Mpp|Mst|Mne|Mpr|   |   |Dow|Up |Lef|Rig|   |        |
   * |-----------------------------------------------------------|
   * |        |Bof|Bdo|Bup|   |   |   |Pcr|Lck|Bre|   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  [1] = {
    LSFT(KC_GRV), 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   KC_FN0, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS},

  /* Overlay 1: Fn1
   * ,-----------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |Fn2     |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  [2] = {
    TRNS,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,TRNS,  \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   KC_FN2, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS},

  /* Overlay 1: Fn2
   * ,-----------------------------------------------------------.
   * |Fn1|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  /|  @|    \|
   * |-----------------------------------------------------------|
   * |Esc   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
   * |-----------------------------------------------------------|
   * |L-Shift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|R-Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Alt |Gui |          Space         |Alt |Gui |Fn0 |Ctrl|
   * `-----------------------------------------------------------'
   */
  [3] = {
    KC_ESC, KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MIN,KC_EQL,KC_BSPC, \
    KC_TAB, KC_Q,KC_W,KC_E, KC_R,   KC_T,   KC_Y,   KC_G,   KC_C,   KC_R, KC_L,KC_SLSH,KC_2,KC_BSLS, \
    KC_FN0, KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N, KC_S, KC_MIN,KC_ENT, \
    KC_LSFT,KC_QUOT,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V, KC_Z,       KC_RSFT, \
    KC_LCTL,KC_LALT,KC_LGUI,          KC_SPC,                       KC_RALT,KC_RGUI,KC_FN1, KC_RCTL},
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
  [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
