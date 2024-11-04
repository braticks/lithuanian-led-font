#ifndef LITHUANIAN_TEXT_HELPER_H
#define LITHUANIAN_TEXT_HELPER_H

#include "lithuanian_font.h"
#include <string>

class LithuanianTextHelper {
public:
    static int getLetterIndex(uint8_t c1, uint8_t c2 = 0, uint8_t c3 = 0) {
        // Single byte characters (ASCII)
        if (c2 == 0) {
            switch (c1) {
                case 'A': return 0;
                case 'B': return 2;
                case 'C': return 3;
                case 'D': return 5;
                case 'E': return 6;
                case 'I': return 9;
                case 'K': return 11;
                case 'L': return 12;
                case 'M': return 13;
                case 'N': return 14;
                case 'O': return 15;
                case 'P': return 16;
                case 'R': return 17;
                case 'S': return 18;
                case 'T': return 20;
                case 'U': return 21;
                case 'V': return 24;
                case 'Y': return 25;
                case 'Z': return 26;
                case ' ': return 28;
                // Add numbers
                case '0': return 29;
                case '1': return 30;
                case '2': return 31;
                case '3': return 32;
                case '4': return 33;
                case '5': return 34;
                case '6': return 35;
                case '7': return 36;
                case '8': return 37;
                case '9': return 38;
                default: return -1;
            }
        }
        
        // Two byte UTF-8 sequences
        if (c2 != 0 && c3 == 0) {
            // Ą = 0xC4 0x84
            if (c1 == 0xC4) {
                switch (c2) {
                    case 0x84: return 1;  // Ą
                    case 0x8C: return 4;  // Č
                    case 0x96: return 8;  // Ė
                    case 0x98: return 7;  // Ę
                    case 0xAE: return 10; // Į
                    case 0xA0: return 19; // Š
                    case 0xB2: return 22; // Ų
                    case 0xAA: return 23; // Ū
                    case 0xBD: return 27; // Ž
                    default: return -1;
                }
            }
        }
        
        return -1;
    }

    static int getNextCharacter(const char*& text, uint8_t& c1, uint8_t& c2, uint8_t& c3) {
        c1 = c2 = c3 = 0;
        
        if (*text == 0) return 0;
        
        c1 = (uint8_t)*text++;
        
        // ASCII character
        if (c1 < 0x80) {
            return 1;
        }
        
        // UTF-8 sequence
        if ((c1 & 0xE0) == 0xC0 && *text) {  // 2-byte sequence
            c2 = (uint8_t)*text++;
            return 2;
        }
        
        if ((c1 & 0xF0) == 0xE0 && *text && *(text + 1)) {  // 3-byte sequence
            c2 = (uint8_t)*text++;
            c3 = (uint8_t)*text++;
            return 3;
        }
        
        return 1;  // Invalid sequence, skip one byte
    }
};

#endif // LITHUANIAN_TEXT_HELPER_H
