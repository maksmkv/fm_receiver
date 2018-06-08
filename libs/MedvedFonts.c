#include <avr/pgmspace.h>
#define fontdatatype const uint8_t

fontdatatype IconsFont[] PROGMEM = {
        0x09, 0x08, 0x27, 0x11,
        0x21, 0x03, 0x21, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20,  // Code for char '
        0x21, 0x03, 0x31, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20,  // Code for char (
        0x21, 0x03, 0x31, 0x00, 0x38, 0x00, 0x20, 0x00, 0x20,  // Code for char )
        0x21, 0x03, 0x31, 0x00, 0x38, 0x00, 0x3C, 0x00, 0x30,  // Code for char *
        0x21, 0x03, 0x31, 0x00, 0x38, 0x00, 0x3C, 0x00, 0x3E,  // Code for char +
        0x00, 0x0E, 0x11, 0x1F, 0x00, 0x11, 0x0E, 0x00, 0x00,  // Code for char ,
        0x3E, 0x04, 0x08, 0x04, 0x3E, 0x00, 0x00, 0x00, 0x00,  // Code for char -
        0x1C, 0x22, 0x22, 0x22, 0x14, 0x00, 0x00, 0x00, 0x00,  // Code for char .
        0x1F, 0x05, 0x01, 0x00, 0x1F, 0x02, 0x04, 0x02, 0x1F,  // Code for char /
        0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 0
        0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
        0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x00, 0x00,  // Code for char 2
};

fontdatatype MedvedFont[] PROGMEM = {
        0x06, 0x08, 0x20, 0xE0,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // sp
        0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,   // !
        0x00, 0x00, 0x07, 0x00, 0x07, 0x00,   // "
        0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,   // #
        0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,   // $
        0x00, 0x23, 0x13, 0x08, 0x64, 0x62,   // %
        0x00, 0x36, 0x49, 0x55, 0x22, 0x50,   // &
        0x00, 0x00, 0x05, 0x03, 0x00, 0x00,   // '
        0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,   // (
        0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,   // )
        0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,   // *
        0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,   // +
        0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,   // ,
        0x00, 0x08, 0x08, 0x08, 0x08, 0x08,   // -
        0x00, 0x00, 0x60, 0x60, 0x00, 0x00,   // .
        0x00, 0x20, 0x10, 0x08, 0x04, 0x02,   // /
        0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,   // 0
        0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,   // 1
        0x00, 0x42, 0x61, 0x51, 0x49, 0x46,   // 2
        0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,   // 3
        0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,   // 4
        0x00, 0x27, 0x45, 0x45, 0x45, 0x39,   // 5
        0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,   // 6
        0x00, 0x01, 0x71, 0x09, 0x05, 0x03,   // 7
        0x00, 0x36, 0x49, 0x49, 0x49, 0x36,   // 8
        0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,   // 9
        0x00, 0x00, 0x36, 0x36, 0x00, 0x00,   // :
        0x00, 0x00, 0x56, 0x36, 0x00, 0x00,   // ;
        0x00, 0x08, 0x14, 0x22, 0x41, 0x00,   // <
        0x00, 0x14, 0x14, 0x14, 0x14, 0x14,   // =
        0x00, 0x00, 0x41, 0x22, 0x14, 0x08,   // >
        0x00, 0x02, 0x01, 0x51, 0x09, 0x06,   // ?
        0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,   // @
        0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,   // A
        0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,   // B
        0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,   // C
        0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,   // D
        0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,   // E
        0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,   // F
        0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,   // G
        0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,   // H
        0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,   // I
        0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,   // J
        0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,   // K
        0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,   // L
        0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,   // M
        0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,   // N
        0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,   // O
        0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,   // P
        0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,   // Q
        0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,   // R
        0x00, 0x46, 0x49, 0x49, 0x49, 0x31,   // S
        0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,   // T
        0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,   // U
        0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,   // V
        0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,   // W
        0x00, 0x63, 0x14, 0x08, 0x14, 0x63,   // X
        0x00, 0x07, 0x08, 0x70, 0x08, 0x07,   // Y
        0x00, 0x61, 0x51, 0x49, 0x45, 0x43,   // Z
        0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,   // [
        0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,   // Backslash (Checker pattern)
        0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,   // ]
        0x00, 0x04, 0x02, 0x01, 0x02, 0x04,   // ^
        0x00, 0x40, 0x40, 0x40, 0x40, 0x40,   // _
        0x00, 0x00, 0x03, 0x05, 0x00, 0x00,   // `
        0x00, 0x20, 0x54, 0x54, 0x54, 0x78,   // a
        0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,   // b
        0x00, 0x38, 0x44, 0x44, 0x44, 0x20,   // c
        0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,   // d
        0x00, 0x38, 0x54, 0x54, 0x54, 0x18,   // e
        0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,   // f
        0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,   // g
        0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,   // h
        0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,   // i
        0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,   // j
        0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,   // k
        0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,   // l
        0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,   // m
        0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,   // n
        0x00, 0x38, 0x44, 0x44, 0x44, 0x38,   // o
        0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,   // p
        0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,   // q
        0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,   // r
        0x00, 0x48, 0x54, 0x54, 0x54, 0x20,   // s
        0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,   // t
        0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,   // u
        0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,   // v
        0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,   // w
        0x00, 0x44, 0x28, 0x10, 0x28, 0x44,   // x
        0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,   // y
        0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,   // z
        0x00, 0x00, 0x10, 0x7C, 0x82, 0x00,   // {
        0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,   // |
        0x00, 0x00, 0x82, 0x7C, 0x10, 0x00,   // }
        0x00, 0x00, 0x06, 0x09, 0x09, 0x06,   // ~ (Degrees)
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // €
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ‚
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ƒ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // „
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // …
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // †
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ‡
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ˆ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ‰
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // Š
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ‹
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // Œ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // Ž
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ‘
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ’
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // “
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ”
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // •
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // –
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // —
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ˜
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ™
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // š
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ›
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // œ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ž
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // Ÿ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   //  
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¡
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¢
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // £
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¤
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¥
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¦
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // §
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¨
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ©
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ª
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // «
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¬
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ­
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ®
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¯
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // °
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ±
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ²
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ³
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ´
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // µ
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¶
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ·
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¸
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¹
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // º
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // »
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¼
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ½
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ¾
        0x00, 0x7E, 0x11, 0x11, 0x11, 0x7E,   // À
        0x00, 0x7F, 0x49, 0x49, 0x49, 0x30,   // Á
        0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,   // Â
        0x00, 0x7F, 0x01, 0x01, 0x01, 0x03,   // Ã
        0x00, 0x60, 0x3E, 0x21, 0x21, 0x7E,   // Ä
        0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,   // Å
        0x00, 0x77, 0x08, 0x7F, 0x08, 0x77,   // Æ
        0x00, 0x41, 0x49, 0x49, 0x49, 0x36,   // Ç
        0x00, 0x7F, 0x20, 0x10, 0x08, 0x7F,   // È
        0x00, 0x7F, 0x20, 0x13, 0x08, 0x7F,   // É
        0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,   // Ê
        0x00, 0x40, 0x3E, 0x01, 0x01, 0x7F,   // Ë
        0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,   // Ì
        0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,   // Í
        0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,   // Î
        0x00, 0x7F, 0x01, 0x01, 0x01, 0x7F,   // Ï
        0x00, 0x7F, 0x11, 0x11, 0x11, 0x0E,   // Ð
        0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,   // Ñ
        0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,   // Ò
        0x00, 0x07, 0x48, 0x48, 0x48, 0x3F,   // Ó
        0x00, 0x1E, 0x21, 0x7F, 0x21, 0x1E,   // Ô
        0x00, 0x63, 0x14, 0x08, 0x14, 0x63,   // Õ
        0x00, 0x3F, 0x40, 0x40, 0x7F, 0xC0,   // Ö
        0x00, 0x0F, 0x10, 0x10, 0x10, 0x7F,   // ×
        0x00, 0x7F, 0x40, 0x7F, 0x40, 0x7F,   // Ø
        0x00, 0x7F, 0x40, 0x7F, 0x40, 0xFF,   // Ù
        0x00, 0x01, 0x7F, 0x44, 0x44, 0x38,   // Ú
        0x00, 0x7F, 0x44, 0x44, 0x38, 0x7F,   // Û
        0x00, 0x7F, 0x44, 0x44, 0x44, 0x38,   // Ü
        0x00, 0x22, 0x49, 0x49, 0x49, 0x3E,   // Ý
        0x00, 0x7F, 0x08, 0x3E, 0x41, 0x3E,   // Þ
        0x00, 0x46, 0x29, 0x19, 0x09, 0x7F,   // ß
        0x00, 0x20, 0x54, 0x54, 0x54, 0x78,   // à
        0x00, 0x3C, 0x4A, 0x4A, 0x49, 0x31,   // á
        0x00, 0x7C, 0x54, 0x54, 0x54, 0x28,   // â
        0x00, 0x7C, 0x04, 0x04, 0x04, 0x0C,   // ã
        0x00, 0x60, 0x38, 0x24, 0x3C, 0x60,   // ä
        0x00, 0x38, 0x54, 0x54, 0x54, 0x18,   // å
        0x00, 0x6C, 0x10, 0x7C, 0x10, 0x6C,   // æ
        0x00, 0x44, 0x54, 0x54, 0x54, 0x28,   // ç
        0x00, 0x7C, 0x40, 0x20, 0x10, 0x7C,   // è
        0x00, 0x7C, 0x40, 0x23, 0x10, 0x7C,   // é
        0x00, 0x7C, 0x10, 0x10, 0x28, 0x44,   // ê
        0x00, 0x40, 0x38, 0x04, 0x04, 0x7C,   // ë
        0x00, 0x7C, 0x08, 0x10, 0x08, 0x7C,   // ì
        0x00, 0x7C, 0x10, 0x10, 0x10, 0x7C,   // í
        0x00, 0x38, 0x44, 0x44, 0x44, 0x38,   // î
        0x00, 0x7C, 0x04, 0x04, 0x04, 0x7C,   // ï
        0x00, 0x7C, 0x14, 0x14, 0x14, 0x08,   // ð
        0x00, 0x38, 0x44, 0x44, 0x44, 0x48,   // ñ
        0x00, 0x04, 0x04, 0x7C, 0x04, 0x04,   // ò
        0x00, 0x1C, 0x50, 0x50, 0x50, 0x3C,   // ó
        0x00, 0x18, 0x24, 0xFC, 0x24, 0x18,   // ô
        0x00, 0x44, 0x28, 0x10, 0x28, 0x44,   // õ
        0x00, 0x7C, 0x40, 0x40, 0x7C, 0xC0,   // ö
        0x00, 0x0C, 0x10, 0x10, 0x10, 0x7C,   // ÷
        0x00, 0x7C, 0x40, 0x7C, 0x40, 0x7C,   // ø
        0x00, 0x7C, 0x40, 0x7C, 0x40, 0xFC,   // ù
        0x00, 0x04, 0x7C, 0x50, 0x50, 0x20,   // ú
        0x00, 0x7C, 0x50, 0x50, 0x20, 0x7C,   // û
        0x00, 0x7C, 0x50, 0x50, 0x50, 0x20,   // ü
        0x00, 0x28, 0x44, 0x54, 0x54, 0x38,   // ý
        0x00, 0x7C, 0x10, 0x38, 0x44, 0x38,   // þ
        0x00, 0x48, 0x34, 0x14, 0x14, 0x7C    // ÿ
};