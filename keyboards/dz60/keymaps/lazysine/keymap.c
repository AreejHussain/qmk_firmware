#include QMK_KEYBOARD_H

#define _QWERTY 0

/*
 * LAYOUT_Lazy1                                                Row Keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │  0e   │ 14
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │ 14
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │ 13
 * ├───┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┬───┤
 * │30 | 31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c │3d│3e │ 15
 * ├───┴┬───┴┬──┴─┬─┴───┴┬──┴──┬┴───┴───┴──┬┴───┼───┼───┼──┼───┤
 * │40  │41  │43  │  44  | 46  |    48     │4a  │4b |4c |4d│4e │ 11
 * └────┴────┴────┴──────┴─────┴───────────┴────┴───┴───┴──┴───┘
 *
*/
#define LAYOUT_Lazy1( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,      k0e, \
    k10,      k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,      \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41,      k43, k44,      k46,      k48,      k4a, k4b, k4c, k4d, k4e \
) { \
    { k00, k01,   k02,   k03, k04,   k05,   k06, k07,   k08,   k09,   k0a, k0b, k0c,   KC_NO, k0e   }, \
    { k10, KC_NO, k12,   k13, k14,   k15,   k16, k17,   k18,   k19,   k1a, k1b, k1c,   k1d,   k1e   }, \
    { k20, KC_NO, k22,   k23, k24,   k25,   k26, k27,   k28,   k29,   k2a, k2b, k2c,   k2d,   KC_NO }, \
    { k30, k31,   k32,   k33, k34,   k35,   k36, k37,   k38,   k39,   k3a, k3b, k3c,   k3d,   k3e   }, \
    { k40, k41,   KC_NO, k43, k44,   KC_NO, k46, KC_NO, k48,   KC_NO, k4a, k4b, k4c,   k4d,   k4e   }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY
   * ,-----------------------------------------------------------------------------------------.
   * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Escape  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl|Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
   * |-----------------------------------------------------------------------------------------+
   * | Caps| Alt | Gui |   MO(1)   | Space |      MO(2)      | MO(3) | MO(4) |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

    [_QWERTY] = LAYOUT_Lazy1(
      KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_ESC,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LCTL, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
      KC_CAPS, KC_LALT, KC_LGUI,         MO(_1),         KC_SPC,        MO(_2),           MO(_3),  MO(_4),  KC_LEFT, KC_DOWN, KC_RIGHT
    ),
