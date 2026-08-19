#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
                 KC_PGUP,            // SW5 (Top Middle)
        KC_LEFT, KC_PGDN, KC_RGHT    // SW1, SW2, SW3 (Bottom Row)
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BL:
            oled_write_P(PSTR("Default\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif