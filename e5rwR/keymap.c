#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LT(6,KC_ESCAPE),KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    CW_TOGG,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),ALL_T(KC_G),                                    ALL_T(KC_H),    MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    TD(DANCE_0),    LT(2,KC_TAB),                                   LT(3,KC_ENTER), KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    TD(DANCE_1),    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_F12,         KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_SLASH,       
    KC_TILD,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,                                        KC_BSPC,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_ASTR,        
    KC_LABK,        KC_RABK,        KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,                                        KC_ENTER,       KC_1,           KC_2,           KC_3,           KC_DOT,         KC_EQUAL,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [2] = LAYOUT_voyager(
    TD(DANCE_2),    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_PAGE_UP,     LCTL(KC_TAB),   KC_TRANSPARENT, KC_PSCR,        
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 LCTL(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_LBRC),  KC_PGDN,        LGUI(KC_RBRC),  KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TD(DANCE_3),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_MS_BTN3,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TD(DANCE_4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TD(DANCE_5),    MT(MOD_LGUI, KC_TAB),                                MT(MOD_LALT, KC_ENTER),MT(MOD_LSFT, KC_SPACE)
  ),
  [5] = LAYOUT_voyager(
    TD(DANCE_6),    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    CW_TOGG,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_DELETE,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,       
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_HYPR,                                        KC_HYPR,        KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_EQUAL,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(1),          TO(2),          TO(3),          TO(4),          TO(5),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_SAI,        RGB_HUI,        RGB_VAI,        RGB_SPI,        RGB_TOG,        TOGGLE_LAYER_COLOR,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_SAD,        RGB_HUD,        RGB_VAD,        RGB_SPD,        RGB_MODE_FORWARD,RGB_SLD,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_C, KC_Z, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_X, KC_Z, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LCTL(KC_C)),
    COMBO(combo1, LCTL(KC_V)),
    COMBO(combo2, LCTL(KC_X)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return TAPPING_TERM -50;
        case LT(2,KC_TAB):
            return TAPPING_TERM -120;
        case LT(3,KC_ENTER):
            return TAPPING_TERM -120;
        case KC_SPACE:
            return TAPPING_TERM -50;
        case TD(DANCE_5):
            return TAPPING_TERM -50;
        case MT(MOD_LGUI, KC_TAB):
            return TAPPING_TERM -120;
        case MT(MOD_LALT, KC_ENTER):
            return TAPPING_TERM -120;
        case MT(MOD_LSFT, KC_SPACE):
            return TAPPING_TERM -120;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,245,245}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,245,245}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {41,255,255}, {131,255,255}, {0,0,0}, {31,218,204}, {0,0,0}, {41,255,255}, {74,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {41,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[7];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD:
          layer_off(1);
        break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[6].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
};
