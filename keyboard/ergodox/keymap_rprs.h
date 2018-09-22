/*
 * File with my layout.
 * To compile:
 *  sudo make -f Makefile.lufa clean
 *  sudo make -f Makefile.lufa rprs
 */

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layer 0
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  | Esc  |           |   =  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Esc    |   Q  |   W  |   E  |   R  |   T  |  LS  |           |  LS  |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Tab    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| LGui |           |  \   |------+------+------+------+------+--------|
     * | LS/Cps |   Z  |   X  |   C  |   V  |   B  |      |           | RGui |   N  |   M  |   ,  |   .  |   /  |   ]    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtl | ~+L1 | ~+L2 |      | F10  |                                       |  Lft |  Up  |  Dn  | Rght | RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LCtl | LAlt |       | RAlt | RCtl |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  Hm  |       | PgUp |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Layer 1
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |      |      |      |      |      |  +L2 |           |  -L1 |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Trans  |      |      |      |      |      |Trans |           |      |      |  F1  |  F2  |  F3  | F4   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Trans  |      |      |      |      |      |------|           |------|      |  F5  |  F6  |  F7  | F5   |        |
     * |--------+------+------+------+------+------|Trans |           |PtrScn|------+------+------+------+------+--------|
     * | Trans  |PtrScn|      |      |      |      |      |           |      |      |  F9  | F10  | F11  | F12  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Trans|      | LGui | LCtl | LAlt |                                       | Vol+ | Vol- | Mut  |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Trans| Trans|       | Trans| Trans|
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Trans|       | Trans|      |      |
     *                                 | Trans| Trans|------|       |------| Trans| Trans|
     *                                 |      |      | Trans|       | Trans|      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Layer 2
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |      |      |      |      |      |      |           |  -L2 |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Trans  |      |      |      |      |      |Trans |           |      |      | MwL  | MwD  | MwU  | MwR  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Trans  |      |      |      |      |      |------|           |------|      | McL  | McD  | McU  | McR  |        |
     * |--------+------+------+------+------+------|Trans |           |      |------+------+------+------+------+--------|
     * | Trans  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Trans| LGui |      | LCtl | LAlt |                                       | Vol+ | Vol- | Mut  |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Trans| Trans|       | Trans| Trans|
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Trans|       | Trans|      |      |
     *                                 | Trans| Trans|------|       |------| Mb1  | Mb2  |
     *                                 |      |      | Trans|       | Trans|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layer 0 : default
        // left hand
        GRV, 1,   2,   3,   4,   5,   ESC,
        ESC, Q,   W,   E,   R,   T,   FN1,
        TAB, A,   S,   D,   F,   G,
        FN1, Z,   X,   C,   V,   B,   LGUI,
        LCTL,FN2, FN4, NO,  F10,
                                      LCTL,LALT,
                                           HOME,
                                 BSPC,DEL, END,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
             FN1, Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN6, N,   M,   COMM,DOT, SLSH,RBRC,
                       LEFT,DOWN,UP,  RGHT,RGUI,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function, volume  and print screen keys.
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  FN4,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,PSCR,NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LCTL,LALT,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN3, NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  TRNS,
                  NO,  F5,  F6,  F7,  F8,  TRNS,
             PSCR,NO,  F9,  F10, F11, F12,  TRNS,
                       MUTE,VOLD,VOLU,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2: Mouse.
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LCTL,LALT,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN5, NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,WH_L,WH_D,WH_U,WH_R,NO,  TRNS,
                  MS_L,MS_D,MS_U,MS_R,NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       MUTE,VOLD,VOLU,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,BTN1,BTN2
    ),
    /*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    [1] =   ACTION_MODS_TAP_TOGGLE(MOD_LSFT),               // FN1 = Hold: L Shift, Tap: Caps
    [2] =   ACTION_LAYER_TAP_TOGGLE(1),                     // FN2 = Hold: Toggle L1, Tap: Push L1
    [3] =   ACTION_LAYER_TOGGLE(1),                         // FN3 = Toggle L1
    [4] =   ACTION_LAYER_TAP_TOGGLE(2),                     // FN4 = Hold: Toggle L2, Tap: Push L2
    [5] =   ACTION_LAYER_TOGGLE(2),                         // FN5 = Toggle L2
    [6] =   ACTION_MODS_TAP_KEY(MOD_RGUI, KC_BSLS)          // FN6 = Hold: Super (right), Tap: Backlash
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");

    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }

}
