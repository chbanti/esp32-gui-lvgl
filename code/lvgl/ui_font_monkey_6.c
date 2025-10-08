/*******************************************************************************
 * Size: 6 px
 * Bpp: 8
 * Opts: --bpp 8 --size 6 --font C:/Users/DELL/SquareLine/assets/moncky.otf -o C:/Users/DELL/SquareLine/assets\ui_font_monkey_6.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_MONKEY_6
#define UI_FONT_MONKEY_6 1
#endif

#if UI_FONT_MONKEY_6

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x78, 0x6c, 0x3b, 0x56,

    /* U+0022 "\"" */
    0x8, 0x7, 0x68, 0x58, 0xf, 0x10,

    /* U+0023 "#" */
    0x0, 0x50, 0x43, 0x35, 0x8f, 0x50, 0x57, 0x8c,
    0x32, 0x49, 0x4d, 0x0,

    /* U+0024 "$" */
    0x0, 0x31, 0x0, 0x59, 0x96, 0x41, 0x7b, 0x9d,
    0xc, 0x1d, 0x9d, 0x72, 0x71, 0x91, 0x4c, 0x0,
    0x3a, 0x0,

    /* U+0025 "%" */
    0x4a, 0x42, 0x48, 0x27, 0x62, 0xc, 0xb, 0x65,
    0x2b, 0x51, 0x42, 0x4b,

    /* U+0026 "&" */
    0xe, 0xa5, 0x3b, 0x0, 0xd, 0xc1, 0x3c, 0x28,
    0x83, 0x8c, 0x7b, 0x0, 0x90, 0x65, 0x9a, 0x2f,

    /* U+0027 "'" */
    0x7, 0x5f, 0xf,

    /* U+0028 "(" */
    0x0, 0xd, 0x37, 0x20, 0x74, 0x0, 0x80, 0x0,
    0x6e, 0x3, 0xe, 0x2d,

    /* U+0029 ")" */
    0xd, 0x0, 0x57, 0x0, 0x5c, 0x19, 0x50, 0x31,
    0x68, 0x8, 0x3b, 0x0,

    /* U+002A "*" */
    0x65, 0x6b, 0x62, 0x65, 0x6, 0x7,

    /* U+002B "+" */
    0x0, 0x3c, 0x0, 0x45, 0x84, 0xb, 0x0, 0x2f,
    0x0,

    /* U+002C "," */
    0x3b, 0x38,

    /* U+002D "-" */
    0x66, 0x3c,

    /* U+002E "." */
    0x56,

    /* U+002F "/" */
    0x0, 0x40, 0x0, 0x0, 0x42, 0x0, 0x23, 0x20,
    0x0, 0x46, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x45, 0x71, 0x64, 0x0, 0x0, 0x99, 0x3,
    0xa1, 0x0, 0x0, 0x95, 0x0, 0x9a, 0x0, 0x0,
    0x44, 0x64, 0x5b, 0x0,

    /* U+0031 "1" */
    0x79, 0x4a, 0x49, 0x4b, 0x47, 0x4b, 0x72, 0x72,

    /* U+0032 "2" */
    0x57, 0x75, 0x32, 0x5, 0x4b, 0x47, 0x3, 0x85,
    0xf, 0x8b, 0xa9, 0x5b,

    /* U+0033 "3" */
    0x5e, 0x83, 0x1f, 0x10, 0x91, 0x18, 0x5, 0x4b,
    0x3b, 0x5f, 0x80, 0x21,

    /* U+0034 "4" */
    0x0, 0xac, 0x3, 0x3b, 0xa7, 0xa, 0x5e, 0xb3,
    0x4e, 0x0, 0xbc, 0x2f,

    /* U+0035 "5" */
    0x4, 0xb, 0x0, 0x4e, 0x6f, 0x0, 0x68, 0x4f,
    0x0, 0x12, 0x8f, 0x5, 0x61, 0x80, 0x0,

    /* U+0036 "6" */
    0x0, 0x38, 0x63, 0x40, 0x0, 0x92, 0x5f, 0x21,
    0x0, 0x99, 0x19, 0x80, 0x0, 0x5b, 0x67, 0x3e,

    /* U+0037 "7" */
    0x7e, 0xb8, 0x2c, 0x6, 0x69, 0x0, 0x12, 0x74,
    0x0, 0x65, 0x25, 0x0,

    /* U+0038 "8" */
    0x53, 0x6a, 0x1f, 0x6e, 0xab, 0xd, 0x6e, 0x7a,
    0x58, 0x60, 0x57, 0x30,

    /* U+0039 "9" */
    0x0, 0x5a, 0x6c, 0x3a, 0x0, 0x0, 0x99, 0x1b,
    0x7f, 0x0, 0x0, 0x34, 0x68, 0x6c, 0x0, 0x0,
    0x4f, 0x71, 0x1a, 0x0,

    /* U+003A ":" */
    0x56, 0x0, 0x56,

    /* U+003B ";" */
    0x56, 0x3c, 0x39,

    /* U+003D "=" */
    0x40, 0x4f, 0x8, 0x40, 0x4f, 0x8,

    /* U+003F "?" */
    0x61, 0x32, 0x5a, 0x3b, 0x1c, 0x0, 0x56, 0x0,

    /* U+0040 "@" */
    0x10, 0x6b, 0x49, 0x4f, 0x0, 0x76, 0x36, 0x52,
    0x5b, 0x17, 0x7e, 0x88, 0x62, 0x57, 0x10, 0x6a,
    0x67, 0x56, 0x43, 0x0, 0x3, 0x51, 0x53, 0x40,
    0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x93, 0x4, 0x0, 0x0, 0x6, 0x83,
    0x45, 0x0, 0x0, 0x3c, 0x54, 0x93, 0x0, 0x1,
    0x8c, 0xc, 0xd3, 0x21,

    /* U+0042 "B" */
    0x9f, 0x70, 0x7b, 0x0, 0x83, 0x84, 0x77, 0x0,
    0x83, 0x17, 0x97, 0x3, 0xa5, 0x60, 0x77, 0x0,

    /* U+0043 "C" */
    0x0, 0x42, 0x73, 0x92, 0x7, 0x0, 0xa5, 0x3,
    0x1c, 0x2, 0x0, 0xa7, 0x1, 0x0, 0x0, 0x0,
    0x4b, 0x71, 0x60, 0xe,

    /* U+0044 "D" */
    0x9f, 0x6c, 0x78, 0x0, 0x83, 0x17, 0x88, 0xe,
    0x83, 0x17, 0x85, 0xf, 0xa5, 0x5a, 0x78, 0x0,

    /* U+0045 "E" */
    0x9e, 0x5e, 0x74, 0x7f, 0x92, 0x18, 0x7f, 0x2e,
    0x14, 0xa1, 0x65, 0x89,

    /* U+0046 "F" */
    0x9e, 0x5e, 0x74, 0x7f, 0x92, 0x18, 0x7f, 0x2e,
    0xc, 0xa1, 0x40, 0x0,

    /* U+0047 "G" */
    0x0, 0x42, 0x73, 0x92, 0x7, 0x0, 0xa5, 0x3,
    0x85, 0x32, 0x0, 0xa7, 0x1, 0x78, 0x18, 0x0,
    0x4b, 0x72, 0x93, 0x17,

    /* U+0048 "H" */
    0x9f, 0x3a, 0x86, 0x53, 0x7f, 0x6a, 0x9c, 0x33,
    0x7f, 0x1b, 0x67, 0x33, 0xa1, 0x44, 0x93, 0x55,

    /* U+0049 "I" */
    0x9f, 0x3c, 0x7f, 0x1b, 0x7f, 0x1b, 0xa1, 0x3f,

    /* U+004A "J" */
    0x0, 0x84, 0x55, 0x0, 0x5f, 0x33, 0x1b, 0x60,
    0x30, 0x82, 0x81, 0x4,

    /* U+004B "K" */
    0x9d, 0x44, 0x97, 0x3, 0x7b, 0x83, 0x6, 0x0,
    0x7b, 0xa9, 0x3d, 0x0, 0xa1, 0x4a, 0xd6, 0x1b,

    /* U+004C "L" */
    0x9f, 0x3e, 0x0, 0x7f, 0x1b, 0x0, 0x7f, 0x1b,
    0x8, 0xa2, 0x60, 0x8a,

    /* U+004D "M" */
    0x97, 0x7f, 0x3, 0xe4, 0x23, 0x50, 0xa8, 0x3b,
    0xb1, 0x0, 0x4f, 0x85, 0x74, 0x93, 0x0, 0x8e,
    0x49, 0x79, 0xc1, 0x27,

    /* U+004E "N" */
    0x99, 0x7f, 0x44, 0x5c, 0x50, 0xb0, 0x32, 0x33,
    0x4f, 0x2f, 0xad, 0x33, 0x8f, 0x14, 0x9c, 0x33,

    /* U+004F "O" */
    0x0, 0x45, 0x54, 0x76, 0xa, 0x0, 0x0, 0x96,
    0x0, 0x45, 0x51, 0x0, 0x0, 0x95, 0x0, 0x44,
    0x50, 0x0, 0x0, 0x47, 0x51, 0x74, 0xa, 0x0,

    /* U+0050 "P" */
    0x9f, 0x69, 0x62, 0x0, 0x7f, 0x1b, 0x94, 0x0,
    0x7f, 0x66, 0x2b, 0x0, 0xa1, 0x45, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x45, 0x54, 0x77, 0x8, 0x0, 0x0, 0x9d,
    0x0, 0x43, 0x56, 0x0, 0x0, 0x9a, 0x0, 0x47,
    0x4e, 0x0, 0x0, 0x2d, 0x70, 0x67, 0x16, 0x0,
    0x0, 0x9, 0x26, 0x88, 0x33, 0x0,

    /* U+0052 "R" */
    0x9f, 0x6a, 0x66, 0x0, 0x7f, 0x1b, 0x9a, 0x0,
    0x7f, 0xa1, 0x45, 0x0, 0xa1, 0x6f, 0xb4, 0xa,

    /* U+0053 "S" */
    0x56, 0x55, 0x2f, 0x90, 0x63, 0x5, 0x18, 0x92,
    0x57, 0x69, 0x56, 0x2f,

    /* U+0054 "T" */
    0x7e, 0xc5, 0x82, 0x3, 0x6, 0x9b, 0x5, 0x1,
    0x0, 0x9b, 0x0, 0x0, 0x16, 0xcc, 0x19, 0x0,

    /* U+0055 "U" */
    0xb1, 0x32, 0x8b, 0x2a, 0x8f, 0x7, 0x57, 0x0,
    0x8c, 0xc, 0x52, 0x0, 0x48, 0x6d, 0x54, 0x0,
    0x0, 0x1a, 0x1, 0x0,

    /* U+0056 "V" */
    0x2, 0xaf, 0x48, 0x7d, 0x29, 0x0, 0x38, 0x67,
    0x54, 0x0, 0x0, 0x1, 0x9b, 0x4b, 0x0, 0x0,
    0x0, 0x8f, 0x10, 0x0,

    /* U+0057 "W" */
    0x2, 0xae, 0x56, 0xcf, 0x27, 0x91, 0x0, 0x3f,
    0x5b, 0xc9, 0x45, 0x29, 0x0, 0x6, 0xae, 0x61,
    0x9e, 0x0, 0x0, 0x0, 0x94, 0x5, 0x92, 0x0,

    /* U+0058 "X" */
    0x93, 0x77, 0x87, 0x23, 0x7, 0xba, 0x36, 0x0,
    0x3, 0x96, 0x6d, 0x0, 0x8e, 0x1d, 0xd5, 0x2e,

    /* U+0059 "Y" */
    0x1, 0xbb, 0x32, 0x8e, 0xf, 0x0, 0x33, 0x84,
    0x42, 0x0, 0x0, 0x0, 0xb4, 0x1, 0x0, 0x0,
    0x8, 0xc6, 0x15, 0x0,

    /* U+005A "Z" */
    0x6c, 0x5b, 0xb2, 0x0, 0x1, 0x96, 0x2a, 0x0,
    0x2c, 0x94, 0xb, 0x3, 0xb7, 0x62, 0x91, 0x6,

    /* U+005B "[" */
    0x5c, 0x1b, 0x7f, 0x0, 0x7f, 0x0, 0x7f, 0x0,
    0x7f, 0x0, 0x5d, 0x1d,

    /* U+005C "\\" */
    0x41, 0x0, 0x0, 0x27, 0x1d, 0x0, 0x0, 0x47,
    0x0, 0x0, 0x49, 0x0,

    /* U+005D "]" */
    0x15, 0x62, 0x0, 0x7f, 0x0, 0x7f, 0x0, 0x7f,
    0x0, 0x7f, 0x17, 0x64,

    /* U+005E "^" */
    0x61, 0x46,

    /* U+005F "_" */
    0x49, 0x67, 0x4a,

    /* U+0061 "a" */
    0x0, 0x0, 0x93, 0x4, 0x0, 0x0, 0x6, 0x83,
    0x45, 0x0, 0x0, 0x3c, 0x54, 0x93, 0x0, 0x1,
    0x8c, 0xc, 0xd3, 0x21,

    /* U+0062 "b" */
    0x9f, 0x70, 0x7b, 0x0, 0x83, 0x84, 0x77, 0x0,
    0x83, 0x17, 0x97, 0x3, 0xa5, 0x60, 0x77, 0x0,

    /* U+0063 "c" */
    0x0, 0x42, 0x73, 0x92, 0x7, 0x0, 0xa5, 0x3,
    0x1c, 0x2, 0x0, 0xa7, 0x1, 0x0, 0x0, 0x0,
    0x4b, 0x71, 0x60, 0xe,

    /* U+0064 "d" */
    0x9f, 0x6c, 0x78, 0x0, 0x83, 0x17, 0x88, 0xe,
    0x83, 0x17, 0x85, 0xf, 0xa5, 0x5a, 0x78, 0x0,

    /* U+0065 "e" */
    0x9e, 0x5e, 0x74, 0x7f, 0x92, 0x18, 0x7f, 0x2e,
    0x14, 0xa1, 0x65, 0x89,

    /* U+0066 "f" */
    0xa2, 0x5b, 0x74, 0x83, 0x91, 0x14, 0x83, 0x2b,
    0x9, 0xa5, 0x3e, 0x0,

    /* U+0067 "g" */
    0x0, 0x42, 0x73, 0x92, 0x7, 0x0, 0xa5, 0x3,
    0x85, 0x32, 0x0, 0xa7, 0x1, 0x78, 0x18, 0x0,
    0x4b, 0x72, 0x95, 0x17,

    /* U+0068 "h" */
    0x9f, 0x3a, 0x86, 0x53, 0x7f, 0x6a, 0x9c, 0x33,
    0x7f, 0x1b, 0x67, 0x33, 0xa1, 0x44, 0x93, 0x55,

    /* U+0069 "i" */
    0x9f, 0x3c, 0x7f, 0x1b, 0x7f, 0x1b, 0xa1, 0x3f,

    /* U+006A "j" */
    0x0, 0x84, 0x55, 0x0, 0x5f, 0x33, 0x1b, 0x60,
    0x30, 0x82, 0x81, 0x4,

    /* U+006B "k" */
    0x9d, 0x44, 0x97, 0x3, 0x7b, 0x83, 0x6, 0x0,
    0x7b, 0xa9, 0x3d, 0x0, 0xa1, 0x4a, 0xd6, 0x1b,

    /* U+006C "l" */
    0x9f, 0x3e, 0x0, 0x7f, 0x1b, 0x0, 0x7f, 0x1b,
    0x8, 0xa2, 0x60, 0x8a,

    /* U+006D "m" */
    0x97, 0x7f, 0x3, 0xe4, 0x23, 0x50, 0xa8, 0x3b,
    0xb1, 0x0, 0x4f, 0x85, 0x74, 0x93, 0x0, 0x8e,
    0x49, 0x79, 0xc1, 0x27,

    /* U+006E "n" */
    0x99, 0x7f, 0x44, 0x5c, 0x50, 0xb0, 0x32, 0x33,
    0x4f, 0x2f, 0xad, 0x33, 0x8f, 0x14, 0x9c, 0x33,

    /* U+006F "o" */
    0x0, 0x45, 0x54, 0x76, 0xa, 0x0, 0x0, 0x96,
    0x0, 0x45, 0x51, 0x0, 0x0, 0x95, 0x0, 0x44,
    0x50, 0x0, 0x0, 0x47, 0x51, 0x74, 0xa, 0x0,

    /* U+0070 "p" */
    0x9f, 0x69, 0x62, 0x0, 0x7f, 0x1b, 0x94, 0x0,
    0x7f, 0x66, 0x2b, 0x0, 0xa1, 0x45, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x45, 0x54, 0x77, 0x8, 0x0, 0x0, 0x9d,
    0x0, 0x43, 0x56, 0x0, 0x0, 0x9a, 0x0, 0x47,
    0x4e, 0x0, 0x0, 0x2d, 0x70, 0x67, 0x16, 0x0,
    0x0, 0x9, 0x26, 0x88, 0x33, 0x0,

    /* U+0072 "r" */
    0x9f, 0x6a, 0x66, 0x0, 0x7f, 0x1b, 0x9a, 0x0,
    0x7f, 0xa1, 0x45, 0x0, 0xa1, 0x6f, 0xb4, 0xa,

    /* U+0073 "s" */
    0x56, 0x55, 0x2f, 0x90, 0x63, 0x5, 0x18, 0x92,
    0x57, 0x69, 0x56, 0x2f,

    /* U+0074 "t" */
    0x7e, 0xc5, 0x82, 0x3, 0x6, 0x9b, 0x5, 0x1,
    0x0, 0x9b, 0x0, 0x0, 0x16, 0xcc, 0x19, 0x0,

    /* U+0075 "u" */
    0xb1, 0x32, 0x8b, 0x2a, 0x8f, 0x7, 0x57, 0x0,
    0x8c, 0xc, 0x52, 0x0, 0x48, 0x6d, 0x54, 0x0,
    0x0, 0x1a, 0x1, 0x0,

    /* U+0076 "v" */
    0x2, 0xaf, 0x48, 0x7d, 0x29, 0x0, 0x38, 0x67,
    0x54, 0x0, 0x0, 0x1, 0x9b, 0x4b, 0x0, 0x0,
    0x0, 0x8f, 0x10, 0x0,

    /* U+0077 "w" */
    0x2, 0xae, 0x56, 0xcf, 0x27, 0x91, 0x0, 0x3f,
    0x5b, 0xc9, 0x45, 0x29, 0x0, 0x6, 0xae, 0x61,
    0x9e, 0x0, 0x0, 0x0, 0x94, 0x5, 0x92, 0x0,

    /* U+0078 "x" */
    0x93, 0x77, 0x87, 0x23, 0x7, 0xba, 0x36, 0x0,
    0x3, 0x96, 0x6d, 0x0, 0x8e, 0x1d, 0xd5, 0x2e,

    /* U+0079 "y" */
    0x1, 0xbb, 0x32, 0x8e, 0xf, 0x0, 0x33, 0x84,
    0x42, 0x0, 0x0, 0x0, 0xb4, 0x1, 0x0, 0x0,
    0x8, 0xc6, 0x15, 0x0,

    /* U+007A "z" */
    0x6c, 0x5b, 0xb2, 0x0, 0x1, 0x96, 0x2a, 0x0,
    0x2c, 0x94, 0xb, 0x3, 0xb7, 0x62, 0x91, 0x6,

    /* U+007B "{" */
    0x4f, 0x34, 0x68, 0x17, 0x7e, 0x5, 0x68, 0x17,
    0x50, 0x35,

    /* U+007C "|" */
    0x35, 0x6b, 0x6b, 0x6b, 0x6b, 0x6b,

    /* U+007D "}" */
    0x83, 0x0, 0x7f, 0x0, 0x71, 0x11, 0x80, 0x0,
    0x85, 0x0,

    /* U+007E "~" */
    0x4d, 0x52
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 30, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 19, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 26, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 10, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 45, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 14, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 71, .adv_w = 24, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 24, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 95, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 101, .adv_w = 37, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 16, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 112, .adv_w = 27, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 114, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 38, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 50, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 31, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 37, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 46, .box_w = 4, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 39, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 43, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 46, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 17, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 17, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 272, .adv_w = 37, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 278, .adv_w = 27, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 311, .adv_w = 54, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 53, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 57, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 59, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 72, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 59, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 58, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 46, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 59, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 597, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 49, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 661, .adv_w = 54, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 78, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 51, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 18, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 769, .adv_w = 38, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 18, .box_w = 2, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 793, .adv_w = 29, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 795, .adv_w = 48, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 798, .adv_w = 54, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 53, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 57, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 59, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 72, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 59, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 58, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 46, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 59, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1084, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 42, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 49, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1148, .adv_w = 54, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 78, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1208, .adv_w = 51, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1228, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1244, .adv_w = 23, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1254, .adv_w = 17, .box_w = 1, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1260, .adv_w = 23, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1270, .adv_w = 33, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 28, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 61, .range_length = 1, .glyph_id_start = 29,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 63, .range_length = 33, .glyph_id_start = 30,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 30, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 2, 3, 4, 5, 6, 7,
    0, 4, 1, 0, 0, 0, 0, 0,
    8, 9, 10, 11, 12, 13, 14, 15,
    15, 16, 17, 18, 15, 19, 11, 20,
    21, 22, 23, 24, 25, 26, 26, 27,
    28, 29, 0, 0, 0, 0, 0, 8,
    9, 10, 11, 12, 13, 14, 15, 15,
    16, 17, 18, 15, 19, 11, 20, 21,
    22, 23, 24, 25, 26, 26, 27, 28,
    29, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 3, 4, 5, 0, 6, 0, 6,
    7, 8, 9, 10, 11, 12, 13, 8,
    14, 15, 16, 17, 17, 0, 18, 0,
    19, 20, 21, 20, 20, 20, 21, 20,
    20, 22, 23, 20, 23, 23, 21, 20,
    21, 20, 24, 25, 26, 27, 27, 28,
    29, 30, 0, 31, 0, 0, 0, 19,
    20, 21, 20, 20, 20, 21, 20, 20,
    22, 23, 20, 23, 23, 21, 20, 21,
    20, 24, 25, 26, 27, 27, 28, 29,
    30, 32, 0, 33, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -4, -3, -2, -2, -3, -2, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -2, -4, -2, -4, -4,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -3, 0, -1, -1, -1, -2,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -4, -4, 0, -1, -2,
    -3, -1, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -4, -4, -2, 0,
    -2, -4, -2, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -4, -4, -2,
    -1, 0, -4, -2, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -4, -4,
    -2, -1, -2, -4, -2, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -2, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, -4,
    -6, -9, 1, -7, 0, -5, -3, 0,
    -1, -3, 0, -4, -3, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -1, -2, 0, 0, -2, 0,
    -2, -1, -4, -2, -4, -1, -4, -1,
    -1, 0, 0, 0, -1, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -3, -1, -1, -2, 0, -4, 0, -3,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -5, -2, 0, 0,
    -3, 0, 0, -1, -5, -5, -5, -2,
    -4, 0, -1, 0, 0, -1, -2, -1,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -3, -1, 0, 0, -2, 0,
    0, -4, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -7, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -1, -3, 0,
    -4, 0, -1, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -1,
    -1, 0, -1, -2, -1, -2, -1, -2,
    -1, -2, -2, -4, 0, -2, 0, 0,
    -3, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -3, 0, 0,
    0, -3, 0, 0, -3, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -4, 0, -1, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -1, -3, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, -5, 0, 0, 0,
    0, 0, 0, 1, 0, 0, -3, -3,
    0, 0, -6, 0, -3, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -2, -9, 0, -9, 0, -5,
    -3, 0, 0, 0, -3, 0, 0, -2,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, -3, 0,
    -5, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -2, -7, -1, 0,
    -7, -2, 0, 0, 0, 0, -1, 0,
    0, -4, -3, 0, 0, -4, 0, -3,
    -1, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, -1, -2, -6, 0,
    -6, 0, -4, -1, -2, 0, -2, -3,
    -1, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, -2, 0, 0, 0, -1, -4, -4,
    0, -4, 0, -5, -4, 0, -1, -1,
    0, -4, -2, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -1, -1, 0, 0, -1, 0, 0, -1,
    0, -1, 0, -1, -4, -2, -1, 0,
    0, -2, 0, 0, -4, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -5, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -3, 0, 0, -4, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -7, 0, -2, -2, 0, -2,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -4, 0, 0, -5, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -9, 0, -5, -8, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, -3, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -4, 0, 0, 0, -4, 0, 0,
    -4, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -8, 0, -5,
    -8, 0, -1, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, -1,
    -3, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 29,
    .right_class_cnt     = 33,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 8,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_monkey_6 = {
#else
lv_font_t ui_font_monkey_6 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 6,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_MONKEY_6*/

