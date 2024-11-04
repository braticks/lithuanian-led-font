/**
 * Lithuanian LED Matrix Font Library
 * Copyright (c) 2024
 */

#ifndef LITHUANIAN_FONT_H
#define LITHUANIAN_FONT_H

#include <stdint.h>

// Store font data in PROGMEM
static const PROGMEM uint8_t LETTERS[][32] = {
    // A
    {0xf0,0x3f,0xf8,0x3f,0x0c,0x03,0x0c,0x03,0x0c,0x03,0x0c,0x03,0xf8,0x3f,0xf0,0x3f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ą
    {0xf0,0x3f,0xf8,0x3f,0x0c,0x03,0x0c,0x03,0x0c,0x03,0x0c,0x43,0xf8,0xbf,0xf0,0x3f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // B
    {0xfc,0x3f,0xfc,0x3f,0xcc,0x30,0xcc,0x30,0xcc,0x30,0xcc,0x30,0x30,0x0f,0x30,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // C
    {0xf0,0x0f,0xf8,0x1f,0x0c,0x30,0x0c,0x30,0x0c,0x30,0x0c,0x30,0x38,0x1c,0x30,0x0c,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Č
    {0xf0,0x0f,0xf8,0x1f,0x0d,0x30,0x0e,0x30,0x0e,0x30,0x0d,0x30,0x38,0x1c,0x30,0x0c,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // D
    {0xfc,0x3f,0xfc,0x3f,0x0c,0x30,0x0c,0x30,0x0c,0x30,0x30,0x0c,0xf0,0x0f,0xc0,0x03,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // E
    {0xfc,0x3f,0xfc,0x3f,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x0c,0x30,0x0c,0x30,0x0c,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ę
    {0xfc,0x3f,0xfc,0x3f,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x0c,0x30,0x0c,0xb0,0x0c,0x70,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ė
    {0xfc,0x3f,0xfc,0x3f,0x8c,0x31,0x8a,0x31,0x8a,0x31,0x0c,0x30,0x0c,0x30,0x0c,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // I
    {0x00,0x00,0xfc,0x3f,0xfc,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Į
    {0x00,0x40,0xfc,0xbf,0xfc,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // K
    {0xfc,0x3f,0xfc,0x3f,0x80,0x01,0xc0,0x03,0x30,0x0c,0x30,0x0c,0x0c,0x30,0x0c,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // L
    {0xfc,0x3f,0xfc,0x3f,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // M
    {0xfc,0x3f,0xfc,0x3f,0x38,0x00,0x60,0x00,0xc0,0x01,0xc0,0x01,0x60,0x00,0x38,0x00,
     0xfc,0x3f,0xfc,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // N
    {0xfc,0x3f,0xfc,0x3f,0x18,0x00,0x30,0x00,0xc0,0x00,0x80,0x01,0x00,0x06,0x00,0x0c,
     0xfc,0x3f,0xfc,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // O
    {0xf0,0x0f,0xf8,0x1f,0x0c,0x30,0x0c,0x30,0x0c,0x30,0x0c,0x30,0xf8,0x1f,0xf0,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // P
    {0xfc,0x3f,0xfc,0x3f,0x0c,0x03,0x0c,0x03,0x0c,0x03,0x0c,0x03,0xf8,0x01,0xf0,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // R
    {0xfc,0x3f,0xfc,0x3f,0x0c,0x03,0x0c,0x03,0x0c,0x07,0x0c,0x0f,0xf8,0x39,0xf0,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // S
    {0x30,0x18,0xf0,0x18,0xcc,0x30,0x8c,0x31,0x8c,0x31,0x0c,0x33,0x18,0x0f,0x18,0x0c,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Š
    {0x30,0x18,0xf0,0x18,0xcd,0x30,0x8a,0x31,0x8a,0x31,0x0d,0x33,0x18,0x0f,0x18,0x0c,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // T
    {0x0c,0x00,0x0c,0x00,0x0c,0x00,0xfc,0x3f,0xfc,0x3f,0x0c,0x00,0x0c,0x00,0x0c,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // U
    {0xfc,0x0f,0xfc,0x1f,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0xfc,0x1f,0xfc,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ų
    {0xfc,0x0f,0xfc,0x1f,0x00,0x30,0x00,0x30,0x00,0x70,0x00,0xb0,0xfc,0x1f,0xfc,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ū
    {0xf8,0x0f,0xf8,0x1f,0x02,0x30,0x02,0x30,0x02,0x30,0x02,0x30,0xf8,0x1f,0xf8,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // V
    {0xfc,0x00,0xfc,0x07,0x00,0x1f,0x00,0x30,0x00,0x30,0x00,0x1f,0xfc,0x07,0xfc,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Y
    {0x3c,0x00,0x7c,0x00,0xc0,0x00,0x80,0x3f,0x80,0x3f,0xc0,0x00,0x7c,0x00,0x3c,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Z
    {0x0c,0x38,0x0c,0x3c,0x0c,0x36,0x0c,0x33,0x8c,0x31,0xcc,0x30,0x6c,0x30,0x3c,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Ž
    {0x0c,0x38,0x0c,0x3c,0x0d,0x36,0x0a,0x33,0x8a,0x31,0xcd,0x30,0x6c,0x30,0x3c,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // Space
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 0
    {0xf0,0x0f,0xf8,0x1f,0x0c,0x30,0x0c,0x30,0x0c,0x30,0x0c,0x30,0xf8,0x1f,0xf0,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 1
    {0x00,0x00,0x18,0x30,0x1c,0x30,0xfc,0x3f,0xfc,0x3f,0x00,0x30,0x00,0x30,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 2
    {0x18,0x30,0x1c,0x38,0x0c,0x3c,0x0c,0x36,0x0c,0x33,0x8c,0x31,0xf8,0x30,0x70,0x30,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 3
    {0x18,0x0c,0x1c,0x1c,0x0c,0x30,0x8c,0x31,0x8c,0x31,0x8c,0x31,0xf8,0x1f,0x70,0x0e,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 4
    {0x80,0x03,0xc0,0x03,0x60,0x03,0x30,0x03,0x18,0x03,0xfc,0x3f,0xfc,0x3f,0x00,0x03,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 5
    {0xfc,0x0c,0xfc,0x1c,0x8c,0x30,0x8c,0x30,0x8c,0x30,0x8c,0x30,0x0c,0x1f,0x0c,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 6
    {0xf0,0x0f,0xf8,0x1f,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x18,0x1f,0x18,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 7
    {0x0c,0x00,0x0c,0x00,0x0c,0x3c,0x0c,0x3f,0xcc,0x03,0xfc,0x00,0x3c,0x00,0x0c,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 8
    {0x70,0x0e,0xf8,0x1f,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x8c,0x31,0xf8,0x1f,0x70,0x0e,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    // 9
    {0xf0,0x00,0xf8,0x18,0x8c,0x31,0x8c,0x31,0x8c,0x31,0x8c,0x31,0xf8,0x1f,0xf0,0x0f,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};

// Letter widths (in pixels)
static const uint8_t LETTER_WIDTHS[] = {
    8,  // A
    8,  // Ą
    8,  // B
    8,  // C
    8,  // Č
    8,  // D
    8,  // E
    8,  // Ę
    8,  // Ė
    4,  // I
    4,  // Į
    8,  // K
    6,  // L
    16, // M
    16, // N
    12, // O
    8,  // P
    8,  // R
    8,  // S
    8,  // Š
    8,  // T
    8,  // U
    8,  // Ų
    8,  // Ū
    8,  // V
    8,  // Y
    8,  // Z
    8,  // Ž
    4,  // Space
    8,  // 0
    6,  // 1
    8,  // 2
    8,  // 3
    8,  // 4
    8,  // 5
    8,  // 6
    8,  // 7
    8,  // 8
    8   // 9
};

static const uint8_t SPACE_WIDTH = 8;

#endif // LITHUANIAN_FONT_H
