Lithuanian LED Font Library

Arduino library for displaying Lithuanian characters on LED matrix displays.

Features:
- Full Lithuanian alphabet support (including Ą, Č, Ę, Ė, Į, Š, Ų, Ū, Ž)
- Variable width characters (4-16 pixels)
- Memory efficient (PROGMEM storage)
- UTF-8 encoding support
- Numbers 0-9
- Easy to integrate with LED matrix displays

Installation:
1. Download this repository
2. Include in your Arduino libraries folder
3. Include the headers in your project:
   #include "lithuanian_font.h"
   #include "lithuanian_text_helper.h"

Usage:

Basic Character Display:
// Get character data
FontChar char = getLithuanianChar('A');

// Access bitmap data and width
const uint8_t* bitmap = char.data;
uint8_t width = char.width;

Text Processing:
LithuanianTextHelper textHelper;
const char* text = "LABAS";

uint8_t c1, c2, c3;
const char* ptr = text;
while (textHelper.getNextCharacter(ptr, c1, c2, c3) > 0) {
    int index = textHelper.getLetterIndex(c1, c2, c3);
    if (index >= 0) {
        // Process character...
    }
}

Font Specifications:
- Font Height: 16 pixels
- Character Width: Variable (4-16 pixels)
- Storage: PROGMEM (Program Memory)
- Encoding: UTF-8

License:
Copyright (c) 2024

Contributing:
Contributions are welcome! Please feel free to submit a Pull Request.
