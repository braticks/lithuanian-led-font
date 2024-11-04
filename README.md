# Lithuanian LED Matrix Font Library / LED Matricos Lietuviškų Šriftų Biblioteka

[English](#english) | [Lietuviškai](#lietuviškai)

---

## English

### Overview
A specialized bitmap font library for LED matrix displays, featuring the complete Lithuanian alphabet and numbers. Designed for optimal readability on LED matrices with support for all Lithuanian diacritical marks.

### Features
- Complete Lithuanian alphabet support (A-Z with Ą, Č, Ę, Ė, Į, Š, Ų, Ū, Ž)
- Numbers 0-9
- Multiple character widths (4px, 8px, and 16px)
- Consistent 16px height
- Column-major, little-endian format
- Helper functions for text rendering
- Examples for popular LED matrix displays

### Installation
1. Download this repository
2. Place it in your Arduino libraries folder:
   - Windows: `Documents/Arduino/libraries/LithuanianFont/`
   - Linux: `~/Arduino/libraries/LithuanianFont/`
   - Mac: `~/Documents/Arduino/libraries/LithuanianFont/`

### Usage 
cpp
#include <lithuanian_font.h>
#include <lithuanian_text_helper.h>
// Basic usage
const FontChar charA = getLithuanianChar('A');
// Using text helper
TextConfig config = LithuanianTextHelper::createConfig(0, 0);
LithuanianTextHelper::renderText("LABAS", config, setPixelCallback, userData);

### Supported Displays
- MAX7219 LED Matrix
- HUB75 LED Matrix
- WS2812B LED Strip (arranged as matrix)
- Any other pixel-addressable display

### Documentation
- [Font Format Documentation](docs/FONT_FORMAT.md)
- [Example Projects](examples/)

### License
MIT License - see [LICENSE](LICENSE) file

---

## Lietuviškai

### Apžvalga
Specializuota dvejetainių šriftų biblioteka LED matricoms, turinti pilną lietuvišką abėcėlę ir skaičius. Sukurta optimaliam skaitomumui LED matricose su visų lietuviškų diakritinių ženklų palaikymu.

### Savybės
- Pilnas lietuviškos abėcėlės palaikymas (A-Z su Ą, Č, Ę, Ė, Į, Š, Ų, Ū, Ž)
- Skaičiai 0-9
- Keli simbolių pločiai (4px, 8px ir 16px)
- Vienodas 16px aukštis
- Stulpelinis, mažojo galo formatas
- Pagalbinės teksto atvaizdavimo funkcijos
- Pavyzdžiai populiarioms LED matricoms

### Diegimas
1. Atsisiųskite šią saugyklą
2. Įdėkite ją į Arduino bibliotekų aplanką:
   - Windows: `Documents/Arduino/libraries/LithuanianFont/`
   - Linux: `~/Arduino/libraries/LithuanianFont/`
   - Mac: `~/Documents/Arduino/libraries/LithuanianFont/`

### Naudojimas 
cpp
#include <lithuanian_font.h>
#include <lithuanian_text_helper.h>
// Paprastas naudojimas
const FontChar raidėA = getLithuanianChar('A');
// Naudojant teksto pagalbininką
TextConfig config = LithuanianTextHelper::createConfig(0, 0);
LithuanianTextHelper::renderText("LABAS", config, setPixelCallback, userData);

### Palaikomi Ekranai
- MAX7219 LED Matrica
- HUB75 LED Matrica
- WS2812B LED Juosta (išdėstyta kaip matrica)
- Bet kuris kitas pikseliais valdomas ekranas

### Dokumentacija
- [Šrifto Formato Dokumentacija](docs/FONT_FORMAT.md)
- [Pavyzdiniai Projektai](examples/)

### Licencija
MIT Licencija - žr. [LICENSE](LICENSE) failą

---

## Examples / Pavyzdžiai
cpp
// Display "LABAS" on MAX7219 matrix
void setup() {
// Initialize display
matrix.begin();
// Display text
TextConfig config = LithuanianTextHelper::createConfig(0, 0);
LithuanianTextHelper::renderText("LABAS", config, setPixel, &matrix);
}

## Contributing / Prisidėjimas

Contributions are welcome! Please feel free to submit a Pull Request.

Prisidėjimai yra laukiami! Drąsiai siųskite Pull Request.
