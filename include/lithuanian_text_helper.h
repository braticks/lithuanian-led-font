#ifndef LITHUANIAN_TEXT_HELPER_H
#define LITHUANIAN_TEXT_HELPER_H

#include "lithuanian_font.h"

typedef struct {
    int16_t x;
    int16_t y;
    uint8_t spacing;
    uint8_t scale;
    bool wrap;
    uint16_t wrapWidth;
} TextConfig;

typedef void (*SetPixelCallback)(int16_t x, int16_t y, void* userData);

class LithuanianTextHelper {
public:
    // Initialize with default configuration
    static TextConfig createConfig(int16_t x = 0, int16_t y = 0) {
        TextConfig config;
        config.x = x;
        config.y = y;
        config.spacing = 1;
        config.scale = 1;
        config.wrap = false;
        config.wrapWidth = 0;
        return config;
    }

    // Calculate text width in pixels
    static uint16_t getTextWidth(const char* text, uint8_t spacing = 1) {
        uint16_t width = 0;
        while (*text) {
            const FontChar* ch = getLithuanianChar(*text);
            if (ch) {
                width += ch->width + spacing;
            }
            text++;
        }
        return width > 0 ? width - spacing : 0;
    }

    // Render text using callback function
    static void renderText(const char* text, TextConfig config, 
                         SetPixelCallback setPixel, void* userData) {
        int16_t currentX = config.x;
        int16_t currentY = config.y;
        
        while (*text) {
            const FontChar* ch = getLithuanianChar(*text);
            if (ch) {
                // Check if we need to wrap
                if (config.wrap && config.wrapWidth > 0) {
                    uint16_t nextWidth = ch->width * config.scale + config.spacing;
                    if (currentX + nextWidth > config.x + config.wrapWidth) {
                        currentX = config.x;
                        currentY += 16 * config.scale + config.spacing;
                    }
                }

                // Render character
                renderScaledChar(ch, currentX, currentY, config.scale, 
                               setPixel, userData);
                
                currentX += ch->width * config.scale + config.spacing;
            }
            text++;
        }
    }

    // Center text horizontally
    static int16_t getCenteredX(const char* text, uint16_t displayWidth, 
                               uint8_t spacing = 1) {
        uint16_t textWidth = getTextWidth(text, spacing);
        return (displayWidth - textWidth) / 2;
    }

    // Get text height including wrapping
    static uint16_t getTextHeight(const char* text, TextConfig config) {
        if (!config.wrap || config.wrapWidth == 0) {
            return 16 * config.scale;
        }

        int16_t currentX = 0;
        uint16_t lines = 1;

        while (*text) {
            const FontChar* ch = getLithuanianChar(*text);
            if (ch) {
                uint16_t nextWidth = ch->width * config.scale + config.spacing;
                if (currentX + nextWidth > config.wrapWidth) {
                    currentX = 0;
                    lines++;
                }
                currentX += nextWidth;
            }
            text++;
        }

        return lines * 16 * config.scale + (lines - 1) * config.spacing;
    }

private:
    // Render single character with scaling
    static void renderScaledChar(const FontChar* ch, int16_t x, int16_t y, 
                                uint8_t scale, SetPixelCallback setPixel, 
                                void* userData) {
        for (int col = 0; col < ch->width; col++) {
            for (int row = 0; row < ch->height; row++) {
                uint16_t columnData = ch->data[col * 2] | 
                                    (ch->data[col * 2 + 1] << 8);
                if (columnData & (1 << row)) {
                    // Scale up the pixel
                    for (int sx = 0; sx < scale; sx++) {
                        for (int sy = 0; sy < scale; sy++) {
                            setPixel(x + col * scale + sx, 
                                   y + row * scale + sy, userData);
                        }
                    }
                }
            }
        }
    }
};

#endif // LITHUANIAN_TEXT_HELPER_H
