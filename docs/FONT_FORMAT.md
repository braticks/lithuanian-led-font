# Font Format Documentation

## Overview
The Lithuanian LED Font uses a custom bitmap format optimized for LED matrix displays. Each character is stored in PROGMEM to save RAM on Arduino devices.

## Technical Specifications
- Font Height: 16 pixels
- Character Width: Variable (4-16 pixels, see LETTER_WIDTHS array)
- Storage: PROGMEM (Program Memory)
- Encoding: UTF-8 support for Lithuanian characters

## Data Structure
Each character is stored as a 32-byte array representing a 16x16 pixel grid:
- First 16 bytes: Left half of character
- Last 16 bytes: Right half of character

## Supported Characters
- Lithuanian uppercase letters: A-Z with diacritics (Ą, Č, Ę, Ė, Į, Š, Ų, Ū, Ž)
- Numbers: 0-9
- Space character
