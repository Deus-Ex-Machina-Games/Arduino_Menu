const uint8_t Bat7pt7bBitmaps[] PROGMEM = {
  0xFF, 0xFF, 0xBF, 0xFF, 0xEC, 0x00, 0x1F, 0x00, 0x07, 0xC0, 0x00, 0xF0,
  0x00, 0x7C, 0x00, 0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xBF,
  0xFF, 0xEC, 0x00, 0x1F, 0xF0, 0x07, 0xFC, 0x00, 0xFF, 0x00, 0x7C, 0x00,
  0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xBF, 0xFF, 0xEC, 0x00,
  0x1F, 0x7E, 0x07, 0xDF, 0x80, 0xF7, 0xE0, 0x7C, 0x00, 0x1F, 0xFF, 0xFE,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xBF, 0xFF, 0xEC, 0x00, 0x1F, 0xFF, 0x87,
  0xFF, 0xE0, 0xFF, 0xF8, 0x7C, 0x00, 0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0x80,
  0xFF, 0xFF, 0xBF, 0xFF, 0xEC, 0x00, 0x1F, 0x7F, 0xF7, 0xDF, 0xFC, 0xF7,
  0xFF, 0x7C, 0x00, 0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0x80 };

const GFXglyph Bat7pt7bGlyphs[] PROGMEM = {
  {     0,  18,   9,  18,    0,   -9 },   // 0x30 '0'
  {    21,  18,   9,  18,    0,   -9 },   // 0x31 '1'
  {    42,  18,   9,  18,    0,   -9 },   // 0x32 '2'
  {    63,  18,   9,  18,    0,   -9 },   // 0x33 '3'
  {    84,  18,   9,  18,    0,   -9 } }; // 0x34 '4'

const GFXfont Bat7pt7b PROGMEM = {
  (uint8_t  *)Bat7pt7bBitmaps,
  (GFXglyph *)Bat7pt7bGlyphs,
  0x30, 0x34, 14 };

// Approx. 147 bytes