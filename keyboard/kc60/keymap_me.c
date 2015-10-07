#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: dvorak */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
        ESC, A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             RSFT, \
        LCTL,LALT,LGUI,          SPC,                     RALT,RGUI,FN0, RCTL),
    /* 1: qwerty */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        ESC, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LALT,LGUI,          SPC,                     RALT,RGUI,FN0, RCTL),
    /* 2: Fn0 Layer
     * ,-----------------------------------------------------------.
     * |  ~|  %|  7|  5|  3|  1|  9|  0|  2|  4|  6|  8|  `|Delete |
     * |-----------------------------------------------------------|
     * |  $  |Vmu|V- |V+ |   |   |   |PgD|PgU|Hom|End|   |FnL|Ins  |
     * |-----------------------------------------------------------|
     * |Caps  |Mpp|Mst|Mne|Mpr|   |   |Dow|Up |Lef|Rig|   |        |
     * |-----------------------------------------------------------|
     * |        |FnO|FnD|FnI|   |   |   |Pcr|Lck|Bre|   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     *
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   |   |   |Cal|   |Hom|Ins|FnL  |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|   |   |Psc|Slk|Pau|   |Tsk|End|        |
     * |-----------------------------------------------------------|
     * |        |Del|   |Web|Mut|VoU|VoD|   |PgU|PgD|Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnL: to Layout selector overaly
     * FnO: backlight on/off
     * FnD: backlight decrease
     * FnI: backlight increase
     */
    KEYMAP_ANSI(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,TRNS,PGDN,PGUP,HOME, END,TRNS,FN1, INS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,  UP,LEFT,RGHT,TRNS,     TRNS, \
        TRNS, FN5, FN6, FN7,TRNS,TRNS,TRNS,PSCR,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
    /* 3: Layout selector
     * ,-----------------------------------------------------------.
     * | Ld| Lq|   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Ld: set Dvorak layout
     * Lq: set Qwerty layout
     */
    KEYMAP_ANSI(
         FN2, FN3,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [1] = ACTION_LAYER_MOMENTARY(3),  // to Layout selector
    [2] = ACTION_DEFAULT_LAYER_SET(0),  // set dvorak layout
    [3] = ACTION_DEFAULT_LAYER_SET(1),  // set qwerty layout

    [4] = ACTION_BACKLIGHT_TOGGLE(),
    [5] = ACTION_BACKLIGHT_DECREASE(),
    [6] = ACTION_BACKLIGHT_INCREASE()
};

/*
 * Fn action definition
 */
/* const uint16_t PROGMEM fn_actions[] = { */
/*   [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE), */
/*   [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde */
/* }; */
