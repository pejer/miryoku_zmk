/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ å │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SE_CIRC     GRAVE              // ^ (dead)
#define SE_SS       MINUS              // ß
#define SE_ACUT     EQUAL              // ´ (dead)

// Row 2
#define SE_Q        Q                  // Q
#define SE_W        W                  // W
#define SE_E        E                  // E
#define SE_R        R                  // R
#define SE_T        T                  // T
#define SE_Z        Z                  // Z
#define SE_U        U                  // U
#define SE_I        I                  // I
#define SE_O        O                  // O
#define SE_P        P                  // P
#define SE_UE       LEFT_BRACKET       // Ü
#define SE_PLUS     RIGHT_BRACKET      // +

// Row 3
#define SE_A        A                  // A
#define SE_S        S                  // S
#define SE_D        D                  // D
#define SE_F        F                  // F
#define SE_G        G                  // G
#define SE_H        H                  // H
#define SE_J        J                  // J
#define SE_K        K                  // K
#define SE_L        L                  // L
#define SE_OE       SEMICOLON          // Ö
#define SE_AE       SINGLE_QUOTE       // Ä
#define SE_HASH     NON_US_HASH        // #

// Row 4
#define SE_LABK     NON_US_BACKSLASH   // <
#define SE_Y        Y                  // Y
#define SE_X        X                  // X
#define SE_C        C                  // C
#define SE_V        V                  // V
#define SE_B        B                  // B
#define SE_N        N                  // N
#define SE_M        M                  // M
#define SE_COMM     COMMA              // ,
#define SE_DOT      PERIOD             // .
#define SE_MINS     SLASH              // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SE_DEG      LS(SE_CIRC)       // °
#define SE_EXLM     LS(NUMBER_1)      // !
#define SE_DQUO     LS(NUMBER_2)      // "
#define SE_SECT     LS(NUMBER_3)      // §
#define SE_DLR      LS(NUMBER_4)      // $
#define SE_PERC     LS(NUMBER_5)      // %
#define SE_AMPR     LS(NUMBER_6)      // &
#define SE_SLSH     LS(NUMBER_7)      // /
#define SE_LPRN     LS(NUMBER_8)      // (
#define SE_RPRN     LS(NUMBER_9)      // )
#define SE_EQL      LS(NUMBER_0)      // =
#define SE_QUES     LS(SE_SS)         // ?
#define SE_GRV      LS(SE_ACUT)       // ` (dead)
// Row 2
#define SE_ASTR     LS(SE_PLUS)       // *
// Row 3
#define SE_QUOT     NUHS       // '
// Row 4
#define SE_RABK     LS(SE_LABK)       // >
#define SE_SCLN     LS(SE_COMM)       // ;
#define SE_COLN     LS(SE_DOT)        // :
#define SE_UNDS     LS(SE_MINS)       // _

/* Alted symbols (Mac)
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SE_EURO     RA(SE_E)          // €
// Win
#define SE_W_LBRC   RA(NUMBER_8)      // [
#define SE_W_RBRC   RA(NUMBER_9)      // ]
#define SE_W_PIPE   RA(SE_LABK)       // |
#define SE_W_LCBR   RA(NUMBER_7)      // {
#define SE_W_RCBR   RA(NUMBER_0)      // }
#define SE_W_AT     RA(SE_Q)          // @
#define SE_W_TILD   RA(SE_PLUS)       // ~
// Mac
#define SE_M_LBRC   LA(NUMBER_5)      // [
#define SE_M_RBRC   LA(NUMBER_6)      // ]
#define SE_M_PIPE   LA(NUMBER_7)      // |
#define SE_M_LCBR   LA(NUMBER_8)      // {
#define SE_M_RCBR   LA(NUMBER_9)      // }
#define SE_M_AT     LA(SE_L)          // @
#define SE_M_TILD   LA(SE_N)          // ~

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
// Win
#define SE_W_BSLS   RA(SE_SS)         // (backslash)
// Mac
#define SE_M_BSLS   LS(LA(NUMBER_7))  // (backslash)

