/*
 * Use with Swiss German Keyboard macOS Setting
 *
 * 1. Build firmware: $ make niu_mini:isubotic
 * 2. Open QMK Toolbox App
 * 3. Set keyboard in DFU mode: RESET key combination or button on bottom of keyboad
 * 4. Flash created firmware
 *
 * Keycodes Table: https://docs.qmk.fm/#/keycodes
 */

#include QMK_KEYBOARD_H

#define ESCTL LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Z  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | ESCTL|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   $  |Enter |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Y  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |Shift |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Caps |  CTL | ALT  |  CMD |Layer1|    Space    |Layer2| Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
  [0] = LAYOUT_ortho_4x12(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    ESCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSLS, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
    MO(2),   KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(3),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

	/* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |      |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  10  |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |  §   |      |      |      |      |      |      |      |  '   |   ^  |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |  <   |      |      |      |      |      |      |      |  ü   |   ¨  |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |  ö   |  ä   |   $  |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_ortho_4x12(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    KC_CAPS, KC_GRV,  _______, _______, _______, KC_TRNS, _______, _______, _______, KC_MINS, KC_EQL,  _______,
    KC_TRNS, KC_COMM, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______,
    _______, _______, KC_TRNS, _______, KC_TRNS, _______, _______, _______, KC_SCLN, KC_QUOT, KC_BSLS, _______
	),

	/* Layer 2 (shifted numbers)
	 * ,-----------------------------------------------------------------------------------.
	 * |      | S1   |  S2  |  S3  |  S4  |  S5  |  S6  |  S7  |  S8  |  S9  |  S0  |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_ortho_4x12(
   _______, S(KC_1),    S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8),    S(KC_9),    S(KC_0),    _______,
   _______, S(KC_GRV),  _______, _______, _______, _______, _______, _______, _______,    S(KC_MINS), S(KC_EQL),  _______,
   _______, _______,    _______, _______, _______, _______, _______, _______, _______,    S(KC_LBRC), S(KC_RBRC), _______,
   KC_TRNS, _______,    _______, _______, _______, _______, _______, _______, S(KC_SCLN), S(KC_QUOT), S(KC_BSLS), _______
  ),

	/* Layer 3 (alted numbers)
	 * ,-----------------------------------------------------------------------------------.
	 * |      | ALT1 | ALT2 | ALT3 | ALT4 | ALT5 | ALT6 | ALT7 | ALT8 | ALT9 | ALT0 |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |      |      |      |      | ALTG | Left | Down |  Up  |Right |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  | F8   |  F9  |  F10 |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |  F11 |  F12 |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[3] = LAYOUT_ortho_4x12(
   _______, A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5), A(KC_6), A(KC_7), A(KC_8), A(KC_9), A(KC_0), _______,
   _______, _______, _______, _______, _______, A(KC_G), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
   _______, _______, _______, _______, _______, _______, _______, KC_TRNS, _______, KC_F11,  KC_F12,  _______
  )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
