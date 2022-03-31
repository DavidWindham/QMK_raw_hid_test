#include "testscreen.h"

#include "raw_hid.h"
bool test_led_flip = false;

void matrix_scan_user(void) {
	setPinOutput(B6);
	if (test_led_flip) {
		writePinHigh(B6);
	} else {
		writePinLow(B6);
	}
}

bool encoder_update_user(uint8_t idx, bool clockwise) {
	if (idx == 0) {
		if (clockwise) {
			test_led_flip = false;
		} else {
			test_led_flip = true;
		}
	}
	return false;
}

void raw_hid_receive(uint8_t *data, uint8_t length) {
	test_led_flip = !test_led_flip;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_A)
};
