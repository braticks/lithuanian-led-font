# Lithuanian LED Matrix Font Format Documentation

## Overview

The font is designed for LED matrix displays with the following specifications:
- Column-major bitmap format
- Little-endian byte order
- Three character widths: 4px, 8px, and 16px
- Consistent height of 16px
- Support for Lithuanian diacritical marks

## Bitmap Format Details

### Data Structure

Each character is stored as a series of bytes representing vertical columns:
For 8x16 character:
[Column 0 Low Byte][Column 0 High Byte]
[Column 1 Low Byte][Column 1 High Byte]
...
[Column 7 Low Byte][Column 7 High Byte]

### Bit Layout

Each pair of bytes represents a 16-pixel vertical column:
Low Byte (First byte):
Bit 7 ┐
Bit 6 │
Bit 5 │ Bottom 8 pixels
Bit 4 │ (0-7)
Bit 3 │
Bit 2 │
Bit 1 │
Bit 0 ┘
High Byte (Second byte):
Bit 7 ┐
Bit 6 │
Bit 5 │ Top 8 pixels
Bit 4 │ (8-15)
Bit 3 │
Bit 2 │
Bit 1 │
Bit 0 ┘

### Character Widths

1. Narrow Characters (4px wide):
   - I, Į
   - 8 bytes total (4 columns × 2 bytes)

2. Standard Characters (8px wide):
   - Most letters (A, B, C, etc.)
   - 16 bytes total (8 columns × 2 bytes)

3. Wide Characters (16px wide):
   - M, N, O
   - 32 bytes total (16 columns × 2 bytes)

## Memory Layout Example

For the letter 'A' (8x16):
Hex: 0xf0,0x3f,0xf8,0x3f,0x1c,0x06,0x0c,0x06,0x0c,0x06,0x1c,0x06,0xf8,0x3f,0xf0,0x3f
Visual representation:
Column 0: 11110000 00111111
Column 1: 11111000 00111111
Column 2: 00011100 00000110
Column 3: 00001100 00000110
Column 4: 00001100 00000110
Column 5: 00011100 00000110
Column 6: 11111000 00111111
Column 7: 11110000 00111111

## Usage Guidelines

1. Character Spacing:
   - Recommended minimum spacing: 1 pixel
   - For proportional spacing, use character width + 1

2. Baseline Alignment:
   - All characters align to top
   - Diacritical marks fit within 16px height

3. Memory Requirements:
   - Standard character: 16 bytes
   - Narrow character: 8 bytes
   - Wide character: 32 bytes
