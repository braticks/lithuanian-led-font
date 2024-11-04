#include <Adafruit_NeoPixel.h>
#include "lithuanian_font.h"

#define LED_PIN     6
#define MATRIX_WIDTH  32
#define MATRIX_HEIGHT 16
#define NUM_LEDS    (MATRIX_WIDTH * MATRIX_HEIGHT)

Adafruit_NeoPixel matrix(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

// Convert x,y coordinates to LED index
uint16_t xy(uint8_t x, uint8_t y) {
    if (y & 0x01) {
        // Odd rows run backwards
        uint8_t reverseX = (MATRIX_WIDTH - 1) - x;
        return (y * MATRIX_WIDTH) + reverseX;
    } else {
        // Even rows run forwards
        return (y * MATRIX_WIDTH) + x;
    }
}

void renderChar(const FontChar* ch, int xOffset, int yOffset, uint32_t color) {
    for(int col = 0; col < ch->width; col++) {
        for(int row = 0; row < ch->height; row++) {
            uint16_t columnData = ch->data[col * 2] | (ch->data[col * 2 + 1] << 8);
            if(columnData & (1 << row)) {
                int x = xOffset + col;
                int y = yOffset + row;
                if(x >= 0 && x < MATRIX_WIDTH && y >= 0 && y < MATRIX_HEIGHT) {
                    matrix.setPixelColor(xy(x, y), color);
                }
            }
        }
    }
}

void setup() {
    matrix.begin();
    matrix.setBrightness(50);
    matrix.clear();
    
    // Display "LABAS" in rainbow colors
    const char* text = "LABAS";
    int xOffset = 0;
    uint32_t colors[] = {
        matrix.Color(255, 0, 0),    // Red
        matrix.Color(255, 127, 0),  // Orange
        matrix.Color(255, 255, 0),  // Yellow
        matrix.Color(0, 255, 0),    // Green
        matrix.Color(0, 0, 255)     // Blue
    };
    
    for(int i = 0; text[i] != '\0'; i++) {
        const FontChar* ch = getLithuanianChar(text[i]);
        if(ch) {
            renderChar(ch, xOffset, 0, colors[i]);
            xOffset += ch->width + 1;
        }
    }
    
    matrix.show();
}

void loop() {
    // Empty loop
}
