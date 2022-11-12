#include QMK_KEYBOARD_H
char wpm_str[10];

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_h(
		KC_A)
};

#ifdef OLED_ENABLE
bool oled_task_user(void)
{
	oled_write_P(PSTR("Hello World"),false);
	return false;
}

#endif