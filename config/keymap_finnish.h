/* Copied from QMK, adapted for ZMK by Anodynous
 * 
 * Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#ifndef KEYMAP_FINNISH
#define KEYMAP_FINNISH

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FI_SECT (GRAVE)  // §
#define FI_1    (N1)    // 1
#define FI_2    (N2)    // 2
#define FI_3    (N3)    // 3
#define FI_4    (N4)    // 4
#define FI_5    (N5)    // 5
#define FI_6    (N6)    // 6
#define FI_7    (N7)    // 7
#define FI_8    (N8)    // 8
#define FI_9    (N9)    // 9
#define FI_0    (N0)    // 0
#define FI_PLUS (MINUS) // +
#define FI_ACUT (EQUAL) // ´ (dead)
// Row 2
#define FI_Q    (Q)    // Q
#define FI_W    (W)    // W
#define FI_E    (E)    // E
#define FI_R    (R)    // R
#define FI_T    (T)    // T
#define FI_Y    (Y)    // Y
#define FI_U    (U)    // U
#define FI_I    (I)    // I
#define FI_O    (O)    // O
#define FI_P    (P)    // P
#define FI_ARNG (LBKT) // Å
#define FI_DIAE (RBKT) // ¨ (dead)
// Row 3
#define FI_A    (A)    // A
#define FI_S    (S)    // S
#define FI_D    (D)    // D
#define FI_F    (F)    // F
#define FI_G    (G)    // G
#define FI_H    (H)    // H
#define FI_J    (J)    // J
#define FI_K    (K)    // K
#define FI_L    (L)    // L
#define FI_ODIA (SEMICOLON) // Ö
#define FI_ADIA (SINGLE_QUOTE) // Ä
#define FI_QUOT (NON_US_HASH) // '
// Row 4
#define FI_LABK (NON_US_BSLH) // <
#define FI_Z    (Z)    // Z
#define FI_X    (X)    // X
#define FI_C    (C)    // C
#define FI_V    (V)    // V
#define FI_B    (B)    // B
#define FI_N    (N)    // N
#define FI_M    (M)    // M
#define FI_COMM (COMMA) // ,
#define FI_DOT  (DOT)  // .
#define FI_MINS (SLASH) // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FI_HALF (LS(FI_SECT)) // ½
#define FI_EXLM (LS(FI_1))    // !
#define FI_DQUO (LS(FI_2))    // "
#define FI_HASH (LS(FI_3))    // #
#define FI_CURR (LS(FI_4))    // ¤
#define FI_PERC (LS(FI_5))    // %
#define FI_AMPR (LS(FI_6))    // &
#define FI_SLSH (LS(FI_7))    // /
#define FI_LPRN (LS(FI_8))    // (
#define FI_RPRN (LS(FI_9))    // )
#define FI_EQL  (LS(FI_0))    // =
#define FI_QUES (LS(FI_PLUS)) // ?
#define FI_GRV  (LS(FI_ACUT)) // ` (dead)
// Row 2
#define FI_CIRC (LS(FI_DIAE)) // ^ (dead)
// Row 3
#define FI_ASTR (LS(FI_QUOT)) // *
// Row 4
#define FI_RABK (LS(FI_LABK)) // >
#define FI_SCLN (LS(FI_COMM)) // ;
#define FI_COLN (LS(FI_DOT))  // :
#define FI_UNDS (LS(FI_MINS)) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FI_AT   (RA(FI_2))    // @
#define FI_PND  (RA(FI_3))    // £
#define FI_DLR  (RA(FI_4))    // $
#define FI_EURO (RA(FI_5))    // €
#define FI_LCBR (RA(FI_7))    // {
#define FI_LBRC (RA(FI_8))    // [
#define FI_RBRC (RA(FI_9))    // ]
#define FI_RCBR (RA(FI_0))    // }
#define FI_BSLS (RA(FI_PLUS)) // (backslash)
// Row 2
#define FI_TILD (RA(FI_DIAE)) // ~ (dead)
// Row 4
#define FI_PIPE (RA(FI_LABK)) // |
#define FI_MICR (RA(FI_M))    // µ

#endif