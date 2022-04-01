#include "testscreen.h"

#include "raw_hid.h"
bool test_led_flip = false;
uint8_t test_data[32];

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
			raw_hid_send(test_data, sizeof(test_data));
			test_led_flip = false;
		} else {
			raw_hid_send(test_data, sizeof(test_data));
			test_led_flip = true;
		}
	}
	return false;
}

void raw_hid_receive(uint8_t *data, uint8_t length) {
	test_led_flip = !test_led_flip;
	raw_hid_send(data, length);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_A)
};
