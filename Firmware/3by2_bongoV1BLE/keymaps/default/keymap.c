#include QMK_KEYBOARD_H
#include <stdio.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* ,-------------------.-----
   * | 10 | 11 | 12 | 13 | 14 |
   * |----|----|----|----|----|
   * | 20 | 21 | 22 |    | 24 |
   * |----|----|----| 23 |----|
   * | 30 | 31 | 32 |    | 34 |
   * |----|----|----|----|----|
   * | 40 | 41 | 42 |    | 44 |
   * |----|----|----| 43 |----|
   * |    50   | 52 |    | 54 |
   * `------------------------'
   */
	[0] = LAYOUT_h(
		KC_A,
		KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_B,
		KC_P7, KC_P8, KC_P9,KC_PPLS, KC_C,
		KC_P4, KC_P5, KC_P6, KC_D,
		KC_P1, KC_P2, KC_P3, KC_PENT, KC_E,
		KC_P0, KC_PDOT, KC_F
		
		)
};


