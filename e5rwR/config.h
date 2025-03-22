#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 250

#define PERMISSIVE_HOLD

#define COMBO_TERM 70

#define USB_SUSPEND_WAKEUP_DELAY 0
#define NO_AUTO_SHIFT_ALPHA
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "e5rwR/bvgJ6x"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 3

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

#undef ENABLE_RGB_MATRIX_HUE_BREATHING


/*
 * Begin custom configuration
 */

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
// Timeout for caps word to turn off when no keys are pressed
#define CAPS_WORD_IDLE_TIMEOUT 3000 // in ms
// Temporarily un-shift characters in the middle of caps word
#define CAPS_WORD_INVERT_ON_SHIFT
// Allow shifted state to repeat by holding key beyond AUTO_SHIFT_TIMEOUT
#define AUTO_SHIFT_REPEAT