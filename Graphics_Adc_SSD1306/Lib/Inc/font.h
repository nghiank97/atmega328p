

#ifndef FONT_H_
#define FONT_H_

typedef char PROGMEM prog_uchar;

// Big numbers font, from 0 to 9. 96 byte each.
const prog_uchar bigNumbers [][96] PROGMEM = {
{0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0,
0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC1, 0xC0, 0xC0, 0xC0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
0x03, 0x03, 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC1, 0xC0, 0xC0, 0xC0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x81, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x81, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

// const prog_uchar myFont[][6] PROGMEM = {
// {0x00,0x00,0x00,0x00,0x00,0x00},
// {0x00,0x5F,0x00,0x00,0x00,0x00},
// {0x00,0x07,0x00,0x07,0x00,0x00},
// {0x14,0x7F,0x14,0x7F,0x14,0x00},
// {0x24,0x2A,0x7F,0x2A,0x12,0x00},
// {0x23,0x13,0x08,0x64,0x62,0x00},
// {0x36,0x49,0x55,0x22,0x50,0x00},
// {0x00,0x05,0x03,0x00,0x00,0x00},
// {0x1C,0x22,0x41,0x00,0x00,0x00},
// {0x41,0x22,0x1C,0x00,0x00,0x00},
// {0x08,0x2A,0x1C,0x2A,0x08,0x00},
// {0x08,0x08,0x3E,0x08,0x08,0x00},
// {0xA0,0x60,0x00,0x00,0x00,0x00},
// {0x08,0x08,0x08,0x08,0x08,0x00},
// {0x60,0x60,0x00,0x00,0x00,0x00},
// {0x20,0x10,0x08,0x04,0x02,0x00},
// {0x3E,0x51,0x49,0x45,0x3E,0x00},
// {0x00,0x42,0x7F,0x40,0x00,0x00},
// {0x62,0x51,0x49,0x49,0x46,0x00},
// {0x22,0x41,0x49,0x49,0x36,0x00},
// {0x18,0x14,0x12,0x7F,0x10,0x00},
// {0x27,0x45,0x45,0x45,0x39,0x00},
// {0x3C,0x4A,0x49,0x49,0x30,0x00},
// {0x01,0x71,0x09,0x05,0x03,0x00},
// {0x36,0x49,0x49,0x49,0x36,0x00},
// {0x06,0x49,0x49,0x29,0x1E,0x00},
// {0x00,0x36,0x36,0x00,0x00,0x00},
// {0x00,0xAC,0x6C,0x00,0x00,0x00},
// {0x08,0x14,0x22,0x41,0x00,0x00},
// {0x14,0x14,0x14,0x14,0x14,0x00},
// {0x41,0x22,0x14,0x08,0x00,0x00},
// {0x02,0x01,0x51,0x09,0x06,0x00},
// {0x32,0x49,0x79,0x41,0x3E,0x00},
// {0x7E,0x09,0x09,0x09,0x7E,0x00},
// {0x7F,0x49,0x49,0x49,0x36,0x00},
// {0x3E,0x41,0x41,0x41,0x22,0x00},
// {0x7F,0x41,0x41,0x22,0x1C,0x00},
// {0x7F,0x49,0x49,0x49,0x41,0x00},
// {0x7F,0x09,0x09,0x09,0x01,0x00},
// {0x3E,0x41,0x41,0x51,0x72,0x00},
// {0x7F,0x08,0x08,0x08,0x7F,0x00},
// {0x41,0x7F,0x41,0x00,0x00,0x00},
// {0x20,0x40,0x41,0x3F,0x01,0x00},
// {0x7F,0x08,0x14,0x22,0x41,0x00},
// {0x7F,0x40,0x40,0x40,0x40,0x00},
// {0x7F,0x02,0x0C,0x02,0x7F,0x00},
// {0x7F,0x04,0x08,0x10,0x7F,0x00},
// {0x3E,0x41,0x41,0x41,0x3E,0x00},
// {0x7F,0x09,0x09,0x09,0x06,0x00},
// {0x3E,0x41,0x51,0x21,0x5E,0x00},
// {0x7F,0x09,0x19,0x29,0x46,0x00},
// {0x26,0x49,0x49,0x49,0x32,0x00},
// {0x01,0x01,0x7F,0x01,0x01,0x00},
// {0x3F,0x40,0x40,0x40,0x3F,0x00},
// {0x1F,0x20,0x40,0x20,0x1F,0x00},
// {0x3F,0x40,0x38,0x40,0x3F,0x00},
// {0x63,0x14,0x08,0x14,0x63,0x00},
// {0x03,0x04,0x78,0x04,0x03,0x00},
// {0x61,0x51,0x49,0x45,0x43,0x00},
// {0x7F,0x41,0x41,0x00,0x00,0x00},
// {0x02,0x04,0x08,0x10,0x20,0x00},
// {0x41,0x41,0x7F,0x00,0x00,0x00},
// {0x04,0x02,0x01,0x02,0x04,0x00},
// {0x80,0x80,0x80,0x80,0x80,0x00},
// {0x01,0x02,0x04,0x00,0x00,0x00},
// {0x20,0x54,0x54,0x54,0x78,0x00},
// {0x7F,0x48,0x44,0x44,0x38,0x00},
// {0x38,0x44,0x44,0x28,0x00,0x00},
// {0x38,0x44,0x44,0x48,0x7F,0x00},
// {0x38,0x54,0x54,0x54,0x18,0x00},
// {0x08,0x7E,0x09,0x02,0x00,0x00},
// {0x18,0xA4,0xA4,0xA4,0x7C,0x00},
// {0x7F,0x08,0x04,0x04,0x78,0x00},
// {0x00,0x7D,0x00,0x00,0x00,0x00},
// {0x80,0x84,0x7D,0x00,0x00,0x00},
// {0x7F,0x10,0x28,0x44,0x00,0x00},
// {0x41,0x7F,0x40,0x00,0x00,0x00},
// {0x7C,0x04,0x18,0x04,0x78,0x00},
// {0x7C,0x08,0x04,0x7C,0x00,0x00},
// {0x38,0x44,0x44,0x38,0x00,0x00},
// {0xFC,0x24,0x24,0x18,0x00,0x00},
// {0x18,0x24,0x24,0xFC,0x00,0x00},
// {0x00,0x7C,0x08,0x04,0x00,0x00},
// {0x48,0x54,0x54,0x24,0x00,0x00},
// {0x04,0x7F,0x44,0x00,0x00,0x00},
// {0x3C,0x40,0x40,0x7C,0x00,0x00},
// {0x1C,0x20,0x40,0x20,0x1C,0x00},
// {0x3C,0x40,0x30,0x40,0x3C,0x00},
// {0x44,0x28,0x10,0x28,0x44,0x00},
// {0x1C,0xA0,0xA0,0x7C,0x00,0x00},
// {0x44,0x64,0x54,0x4C,0x44,0x00},
// {0x08,0x36,0x41,0x00,0x00,0x00},
// {0x00,0x7F,0x00,0x00,0x00,0x00},
// {0x41,0x36,0x08,0x00,0x00,0x00},
// {0x02,0x01,0x01,0x02,0x01,0x00},
// {0x02,0x05,0x05,0x02,0x00,0x00}
// };

const prog_uchar console_font_5x7[][6] PROGMEM = {
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x3E, 0x5B, 0x4F, 0x5B, 0x3E, 0x00},
{0x3E, 0x6B, 0x4F, 0x6B, 0x3E, 0x00},
{0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 0x00},
{0x18, 0x3C, 0x7E, 0x3C, 0x18, 0x00},
{0x1C, 0x57, 0x7D, 0x57, 0x1C, 0x00},
{0x1C, 0x5E, 0x7F, 0x5E, 0x1C, 0x00},
{0x00, 0x18, 0x3C, 0x18, 0x00, 0x00},
{0xFF, 0xE7, 0xC3, 0xE7, 0xFF, 0x00},
{0x00, 0x18, 0x24, 0x18, 0x00, 0x00},
{0xFF, 0xE7, 0xDB, 0xE7, 0xFF, 0x00},
{0x30, 0x48, 0x3A, 0x06, 0x0E, 0x00},
{0x26, 0x29, 0x79, 0x29, 0x26, 0x00},
{0x40, 0x7F, 0x05, 0x05, 0x07, 0x00},
{0x40, 0x7F, 0x05, 0x25, 0x3F, 0x00},
{0x5A, 0x3C, 0xE7, 0x3C, 0x5A, 0x00},
{0x7F, 0x3E, 0x1C, 0x1C, 0x08, 0x00},
{0x08, 0x1C, 0x1C, 0x3E, 0x7F, 0x00},
{0x14, 0x22, 0x7F, 0x22, 0x14, 0x00},
{0x5F, 0x5F, 0x00, 0x5F, 0x5F, 0x00},
{0x06, 0x09, 0x7F, 0x01, 0x7F, 0x00},
{0x00, 0x66, 0x89, 0x95, 0x6A, 0x00},
{0x60, 0x60, 0x60, 0x60, 0x60, 0x00},
{0x94, 0xA2, 0xFF, 0xA2, 0x94, 0x00},
{0x08, 0x04, 0x7E, 0x04, 0x08, 0x00},
{0x10, 0x20, 0x7E, 0x20, 0x10, 0x00},
{0x08, 0x08, 0x2A, 0x1C, 0x08, 0x00},
{0x08, 0x1C, 0x2A, 0x08, 0x08, 0x00},
{0x1E, 0x10, 0x10, 0x10, 0x10, 0x00},
{0x0C, 0x1E, 0x0C, 0x1E, 0x0C, 0x00},
{0x30, 0x38, 0x3E, 0x38, 0x30, 0x00},
{0x06, 0x0E, 0x3E, 0x0E, 0x06, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x5F, 0x00, 0x00, 0x00},
{0x00, 0x07, 0x00, 0x07, 0x00, 0x00},
{0x14, 0x7F, 0x14, 0x7F, 0x14, 0x00},
{0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00},
{0x23, 0x13, 0x08, 0x64, 0x62, 0x00},
{0x36, 0x49, 0x56, 0x20, 0x50, 0x00},
{0x00, 0x08, 0x07, 0x03, 0x00, 0x00},
{0x00, 0x1C, 0x22, 0x41, 0x00, 0x00},
{0x00, 0x41, 0x22, 0x1C, 0x00, 0x00},
{0x2A, 0x1C, 0x7F, 0x1C, 0x2A, 0x00},
{0x08, 0x08, 0x3E, 0x08, 0x08, 0x00},
{0x00, 0x80, 0x70, 0x30, 0x00, 0x00},
{0x08, 0x08, 0x08, 0x08, 0x08, 0x00},
{0x00, 0x00, 0x60, 0x60, 0x00, 0x00},
{0x20, 0x10, 0x08, 0x04, 0x02, 0x00},
{0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00},
{0x00, 0x42, 0x7F, 0x40, 0x00, 0x00},
{0x72, 0x49, 0x49, 0x49, 0x46, 0x00},
{0x21, 0x41, 0x49, 0x4D, 0x33, 0x00},
{0x18, 0x14, 0x12, 0x7F, 0x10, 0x00},
{0x27, 0x45, 0x45, 0x45, 0x39, 0x00},
{0x3C, 0x4A, 0x49, 0x49, 0x31, 0x00},
{0x41, 0x21, 0x11, 0x09, 0x07, 0x00},
{0x36, 0x49, 0x49, 0x49, 0x36, 0x00},
{0x46, 0x49, 0x49, 0x29, 0x1E, 0x00},
{0x00, 0x00, 0x14, 0x00, 0x00, 0x00},
{0x00, 0x40, 0x34, 0x00, 0x00, 0x00},
{0x00, 0x08, 0x14, 0x22, 0x41, 0x00},
{0x14, 0x14, 0x14, 0x14, 0x14, 0x00},
{0x00, 0x41, 0x22, 0x14, 0x08, 0x00},
{0x02, 0x01, 0x59, 0x09, 0x06, 0x00},
{0x3E, 0x41, 0x5D, 0x59, 0x4E, 0x00},
{0x7C, 0x12, 0x11, 0x12, 0x7C, 0x00},
{0x7F, 0x49, 0x49, 0x49, 0x36, 0x00},
{0x3E, 0x41, 0x41, 0x41, 0x22, 0x00},
{0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00},
{0x7F, 0x49, 0x49, 0x49, 0x41, 0x00},
{0x7F, 0x09, 0x09, 0x09, 0x01, 0x00},
{0x3E, 0x41, 0x41, 0x51, 0x73, 0x00},
{0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00},
{0x00, 0x41, 0x7F, 0x41, 0x00, 0x00},
{0x20, 0x40, 0x41, 0x3F, 0x01, 0x00},
{0x7F, 0x08, 0x14, 0x22, 0x41, 0x00},
{0x7F, 0x40, 0x40, 0x40, 0x40, 0x00},
{0x7F, 0x02, 0x1C, 0x02, 0x7F, 0x00},
{0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00},
{0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00},
{0x7F, 0x09, 0x09, 0x09, 0x06, 0x00},
{0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00},
{0x7F, 0x09, 0x19, 0x29, 0x46, 0x00},
{0x26, 0x49, 0x49, 0x49, 0x32, 0x00},
{0x03, 0x01, 0x7F, 0x01, 0x03, 0x00},
{0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00},
{0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00},
{0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00},
{0x63, 0x14, 0x08, 0x14, 0x63, 0x00},
{0x03, 0x04, 0x78, 0x04, 0x03, 0x00},
{0x61, 0x59, 0x49, 0x4D, 0x43, 0x00},
{0x00, 0x7F, 0x41, 0x41, 0x41, 0x00},
{0x02, 0x04, 0x08, 0x10, 0x20, 0x00},
{0x00, 0x41, 0x41, 0x41, 0x7F, 0x00},
{0x04, 0x02, 0x01, 0x02, 0x04, 0x00},
{0x40, 0x40, 0x40, 0x40, 0x40, 0x00},
{0x00, 0x03, 0x07, 0x08, 0x00, 0x00},
{0x20, 0x54, 0x54, 0x78, 0x40, 0x00},
{0x7F, 0x28, 0x44, 0x44, 0x38, 0x00},
{0x38, 0x44, 0x44, 0x44, 0x28, 0x00},
{0x38, 0x44, 0x44, 0x28, 0x7F, 0x00},
{0x38, 0x54, 0x54, 0x54, 0x18, 0x00},
{0x00, 0x08, 0x7E, 0x09, 0x02, 0x00},
{0x18, 0xA4, 0xA4, 0x9C, 0x78, 0x00},
{0x7F, 0x08, 0x04, 0x04, 0x78, 0x00},
{0x00, 0x44, 0x7D, 0x40, 0x00, 0x00},
{0x20, 0x40, 0x40, 0x3D, 0x00, 0x00},
{0x7F, 0x10, 0x28, 0x44, 0x00, 0x00},
{0x00, 0x41, 0x7F, 0x40, 0x00, 0x00},
{0x7C, 0x04, 0x78, 0x04, 0x78, 0x00},
{0x7C, 0x08, 0x04, 0x04, 0x78, 0x00},
{0x38, 0x44, 0x44, 0x44, 0x38, 0x00},
{0xFC, 0x18, 0x24, 0x24, 0x18, 0x00},
{0x18, 0x24, 0x24, 0x18, 0xFC, 0x00},
{0x7C, 0x08, 0x04, 0x04, 0x08, 0x00},
{0x48, 0x54, 0x54, 0x54, 0x24, 0x00},
{0x04, 0x04, 0x3F, 0x44, 0x24, 0x00},
{0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00},
{0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00},
{0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00},
{0x44, 0x28, 0x10, 0x28, 0x44, 0x00},
{0x4C, 0x90, 0x90, 0x90, 0x7C, 0x00},
{0x44, 0x64, 0x54, 0x4C, 0x44, 0x00},
{0x00, 0x08, 0x36, 0x41, 0x00, 0x00},
{0x00, 0x00, 0x77, 0x00, 0x00, 0x00},
{0x00, 0x41, 0x36, 0x08, 0x00, 0x00},
{0x02, 0x01, 0x02, 0x04, 0x02, 0x00},
{0x3C, 0x26, 0x23, 0x26, 0x3C, 0x00},
{0x1E, 0xA1, 0xA1, 0x61, 0x12, 0x00},
{0x3A, 0x40, 0x40, 0x20, 0x7A, 0x00},
{0x38, 0x54, 0x54, 0x55, 0x59, 0x00},
{0x21, 0x55, 0x55, 0x79, 0x41, 0x00},
{0x21, 0x54, 0x54, 0x78, 0x41, 0x00},
{0x21, 0x55, 0x54, 0x78, 0x40, 0x00},
{0x20, 0x54, 0x55, 0x79, 0x40, 0x00},
{0x0C, 0x1E, 0x52, 0x72, 0x12, 0x00},
{0x39, 0x55, 0x55, 0x55, 0x59, 0x00},
{0x39, 0x54, 0x54, 0x54, 0x59, 0x00},
{0x39, 0x55, 0x54, 0x54, 0x58, 0x00},
{0x00, 0x00, 0x45, 0x7C, 0x41, 0x00},
{0x00, 0x02, 0x45, 0x7D, 0x42, 0x00},
{0x00, 0x01, 0x45, 0x7C, 0x40, 0x00},
{0xF0, 0x29, 0x24, 0x29, 0xF0, 0x00},
{0xF0, 0x28, 0x25, 0x28, 0xF0, 0x00},
{0x7C, 0x54, 0x55, 0x45, 0x00, 0x00},
{0x20, 0x54, 0x54, 0x7C, 0x54, 0x00},
{0x7C, 0x0A, 0x09, 0x7F, 0x49, 0x00},
{0x32, 0x49, 0x49, 0x49, 0x32, 0x00},
{0x32, 0x48, 0x48, 0x48, 0x32, 0x00},
{0x32, 0x4A, 0x48, 0x48, 0x30, 0x00},
{0x3A, 0x41, 0x41, 0x21, 0x7A, 0x00},
{0x3A, 0x42, 0x40, 0x20, 0x78, 0x00},
{0x00, 0x9D, 0xA0, 0xA0, 0x7D, 0x00},
{0x39, 0x44, 0x44, 0x44, 0x39, 0x00},
{0x3D, 0x40, 0x40, 0x40, 0x3D, 0x00},
{0x3C, 0x24, 0xFF, 0x24, 0x24, 0x00},
{0x48, 0x7E, 0x49, 0x43, 0x66, 0x00},
{0x2B, 0x2F, 0xFC, 0x2F, 0x2B, 0x00},
{0xFF, 0x09, 0x29, 0xF6, 0x20, 0x00},
{0xC0, 0x88, 0x7E, 0x09, 0x03, 0x00},
{0x20, 0x54, 0x54, 0x79, 0x41, 0x00},
{0x00, 0x00, 0x44, 0x7D, 0x41, 0x00},
{0x30, 0x48, 0x48, 0x4A, 0x32, 0x00},
{0x38, 0x40, 0x40, 0x22, 0x7A, 0x00},
{0x00, 0x7A, 0x0A, 0x0A, 0x72, 0x00},
{0x7D, 0x0D, 0x19, 0x31, 0x7D, 0x00},
{0x26, 0x29, 0x29, 0x2F, 0x28, 0x00},
{0x26, 0x29, 0x29, 0x29, 0x26, 0x00},
{0x30, 0x48, 0x4D, 0x40, 0x20, 0x00},
{0x38, 0x08, 0x08, 0x08, 0x08, 0x00},
{0x08, 0x08, 0x08, 0x08, 0x38, 0x00},
{0x2F, 0x10, 0xC8, 0xAC, 0xBA, 0x00},
{0x2F, 0x10, 0x28, 0x34, 0xFA, 0x00},
{0x00, 0x00, 0x7B, 0x00, 0x00, 0x00},
{0x08, 0x14, 0x2A, 0x14, 0x22, 0x00},
{0x22, 0x14, 0x2A, 0x14, 0x08, 0x00},
{0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00},
{0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x00},
{0x00, 0x00, 0x00, 0xFF, 0x00, 0x00},
{0x10, 0x10, 0x10, 0xFF, 0x00, 0x00},
{0x14, 0x14, 0x14, 0xFF, 0x00, 0x00},
{0x10, 0x10, 0xFF, 0x00, 0xFF, 0x00},
{0x10, 0x10, 0xF0, 0x10, 0xF0, 0x00},
{0x14, 0x14, 0x14, 0xFC, 0x00, 0x00},
{0x14, 0x14, 0xF7, 0x00, 0xFF, 0x00},
{0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00},
{0x14, 0x14, 0xF4, 0x04, 0xFC, 0x00},
{0x14, 0x14, 0x17, 0x10, 0x1F, 0x00},
{0x10, 0x10, 0x1F, 0x10, 0x1F, 0x00},
{0x14, 0x14, 0x14, 0x1F, 0x00, 0x00},
{0x10, 0x10, 0x10, 0xF0, 0x00, 0x00},
{0x00, 0x00, 0x00, 0x1F, 0x10, 0x00},
{0x10, 0x10, 0x10, 0x1F, 0x10, 0x00},
{0x10, 0x10, 0x10, 0xF0, 0x10, 0x00},
{0x00, 0x00, 0x00, 0xFF, 0x10, 0x00},
{0x10, 0x10, 0x10, 0x10, 0x10, 0x00},
{0x10, 0x10, 0x10, 0xFF, 0x10, 0x00},
{0x00, 0x00, 0x00, 0xFF, 0x14, 0x00},
{0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00},
{0x00, 0x00, 0x1F, 0x10, 0x17, 0x00},
{0x00, 0x00, 0xFC, 0x04, 0xF4, 0x00},
{0x14, 0x14, 0x17, 0x10, 0x17, 0x00},
{0x14, 0x14, 0xF4, 0x04, 0xF4, 0x00},
{0x00, 0x00, 0xFF, 0x00, 0xF7, 0x00},
{0x14, 0x14, 0x14, 0x14, 0x14, 0x00},
{0x14, 0x14, 0xF7, 0x00, 0xF7, 0x00},
{0x14, 0x14, 0x14, 0x17, 0x14, 0x00},
{0x10, 0x10, 0x1F, 0x10, 0x1F, 0x00},
{0x14, 0x14, 0x14, 0xF4, 0x14, 0x00},
{0x10, 0x10, 0xF0, 0x10, 0xF0, 0x00},
{0x00, 0x00, 0x1F, 0x10, 0x1F, 0x00},
{0x00, 0x00, 0x00, 0x1F, 0x14, 0x00},
{0x00, 0x00, 0x00, 0xFC, 0x14, 0x00},
{0x00, 0x00, 0xF0, 0x10, 0xF0, 0x00},
{0x10, 0x10, 0xFF, 0x10, 0xFF, 0x00},
{0x14, 0x14, 0x14, 0xFF, 0x14, 0x00},
{0x10, 0x10, 0x10, 0x1F, 0x00, 0x00},
{0x00, 0x00, 0x00, 0xF0, 0x10, 0x00},
{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00},
{0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00},
{0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00},
{0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00},
{0x38, 0x44, 0x44, 0x38, 0x44, 0x00},
{0x7C, 0x2A, 0x2A, 0x3E, 0x14, 0x00},
{0x7E, 0x02, 0x02, 0x06, 0x06, 0x00},
{0x02, 0x7E, 0x02, 0x7E, 0x02, 0x00},
{0x63, 0x55, 0x49, 0x41, 0x63, 0x00},
{0x38, 0x44, 0x44, 0x3C, 0x04, 0x00},
{0x40, 0x7E, 0x20, 0x1E, 0x20, 0x00},
{0x06, 0x02, 0x7E, 0x02, 0x02, 0x00},
{0x99, 0xA5, 0xE7, 0xA5, 0x99, 0x00},
{0x1C, 0x2A, 0x49, 0x2A, 0x1C, 0x00},
{0x4C, 0x72, 0x01, 0x72, 0x4C, 0x00},
{0x30, 0x4A, 0x4D, 0x4D, 0x30, 0x00},
{0x30, 0x48, 0x78, 0x48, 0x30, 0x00},
{0xBC, 0x62, 0x5A, 0x46, 0x3D, 0x00},
{0x3E, 0x49, 0x49, 0x49, 0x00, 0x00},
{0x7E, 0x01, 0x01, 0x01, 0x7E, 0x00},
{0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x00},
{0x44, 0x44, 0x5F, 0x44, 0x44, 0x00},
{0x40, 0x51, 0x4A, 0x44, 0x40, 0x00},
{0x40, 0x44, 0x4A, 0x51, 0x40, 0x00},
{0x00, 0x00, 0xFF, 0x01, 0x03, 0x00},
{0xE0, 0x80, 0xFF, 0x00, 0x00, 0x00},
{0x08, 0x08, 0x6B, 0x6B, 0x08, 0x00},
{0x36, 0x12, 0x36, 0x24, 0x36, 0x00},
{0x06, 0x0F, 0x09, 0x0F, 0x06, 0x00},
{0x00, 0x00, 0x18, 0x18, 0x00, 0x00},
{0x00, 0x00, 0x10, 0x10, 0x00, 0x00},
{0x30, 0x40, 0xFF, 0x01, 0x01, 0x00},
{0x00, 0x1F, 0x01, 0x01, 0x1E, 0x00},
{0x00, 0x19, 0x1D, 0x17, 0x12, 0x00},
{0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

const prog_uchar console_font_4x6[][4] PROGMEM = {
{0x00,0x00,0x00,0x00},	// 0x00
{0x00,0x0E,0x15,0x0E},	// 0x01
{0x00,0x0E,0x1B,0x0E},	// 0x02
{0x00,0x0E,0x1C,0x0E},	// 0x03
{0x00,0x0C,0x1E,0x0C},	// 0x04
{0x00,0x16,0x1F,0x16},	// 0x05
{0x00,0x14,0x1F,0x14},	// 0x06
{0x00,0x00,0x00,0x00},	// 0x07
{0x00,0x00,0x00,0x00},	// 0x08
{0x00,0x00,0x00,0x00},	// 0x09
{0x00,0x00,0x00,0x00},	// 0x0A
{0x00,0x18,0x1A,0x06},	// 0x0B
{0x00,0x0A,0x1D,0x0A},	// 0x0C
{0x00,0x00,0x00,0x00},	// 0x0D
{0x00,0x04,0x13,0x0E},	// 0x0E
{0x00,0x0E,0x1B,0x0E},	// 0x0F
{0x00,0x1F,0x0E,0x04},	// 0x10
{0x00,0x04,0x0E,0x1F},	// 0x11
{0x00,0x0A,0x1F,0x0A},	// 0x12
{0x00,0x17,0x00,0x17},	// 0x13
{0x00,0x00,0x3C,0x02},	// 0x14
{0x00,0x10,0x0F,0x00},	// 0x15
{0x00,0x10,0x10,0x10},	// 0x16
{0x00,0x2A,0x3F,0x2A},	// 0x17
{0x00,0x02,0x1F,0x02},	// 0x18
{0x00,0x08,0x1F,0x08},	// 0x19
{0x04,0x04,0x0E,0x04},	// 0x1A
{0x04,0x0E,0x04,0x04},	// 0x1B
{0x00,0x0C,0x08,0x08},	// 0x1C
{0x00,0x0E,0x04,0x0E},	// 0x1D
{0x00,0x0C,0x0E,0x0C},	// 0x1E
{0x00,0x06,0x0E,0x06},	// 0x1F
{0x00,0x00,0x00,0x00},	// 0x20
{0x00,0x00,0x17,0x00},	// 0x21
{0x00,0x03,0x00,0x03},	// 0x22
{0x00,0x1F,0x0A,0x1F},	// 0x23
{0x00,0x14,0x3F,0x0A},	// 0x24
{0x00,0x09,0x04,0x12},	// 0x25
{0x00,0x1A,0x15,0x1E},	// 0x26
{0x00,0x03,0x01,0x00},	// 0x27
{0x00,0x0E,0x11,0x00},	// 0x28
{0x00,0x11,0x0E,0x00},	// 0x29
{0x00,0x15,0x0E,0x15},	// 0x2A
{0x00,0x04,0x0E,0x04},	// 0x2B
{0x00,0x30,0x10,0x00},	// 0x2C
{0x00,0x04,0x04,0x04},	// 0x2D
{0x00,0x00,0x10,0x00},	// 0x2E
{0x00,0x18,0x04,0x03},	// 0x2F
{0x00,0x1E,0x11,0x0F},	// 0x30
{0x00,0x12,0x1F,0x10},	// 0x31
{0x00,0x19,0x15,0x12},	// 0x32
{0x00,0x11,0x15,0x0A},	// 0x33
{0x00,0x06,0x04,0x1F},	// 0x34
{0x00,0x17,0x15,0x09},	// 0x35
{0x00,0x0E,0x15,0x08},	// 0x36
{0x00,0x01,0x1D,0x07},	// 0x37
{0x00,0x0A,0x15,0x0A},	// 0x38
{0x00,0x02,0x15,0x0E},	// 0x39
{0x00,0x00,0x14,0x00},	// 0x3A
{0x00,0x30,0x14,0x00},	// 0x3B
{0x00,0x04,0x0A,0x11},	// 0x3C
{0x00,0x14,0x14,0x14},	// 0x3D
{0x00,0x11,0x0A,0x04},	// 0x3E
{0x00,0x01,0x15,0x02},	// 0x3F
{0x00,0x1F,0x11,0x17},	// 0x40
{0x00,0x1E,0x05,0x1E},	// 0x41
{0x00,0x1F,0x15,0x0A},	// 0x42
{0x00,0x0E,0x11,0x11},	// 0x43
{0x00,0x1F,0x11,0x0E},	// 0x44
{0x00,0x1F,0x15,0x11},	// 0x45
{0x00,0x1F,0x05,0x01},	// 0x46
{0x00,0x0E,0x11,0x1D},	// 0x47
{0x00,0x1F,0x04,0x1F},	// 0x48
{0x00,0x11,0x1F,0x11},	// 0x49
{0x00,0x08,0x10,0x0F},	// 0x4A
{0x00,0x1F,0x04,0x1B},	// 0x4B
{0x00,0x1F,0x10,0x10},	// 0x4C
{0x00,0x1F,0x06,0x1F},	// 0x4D
{0x00,0x1F,0x02,0x1F},	// 0x4E
{0x00,0x0E,0x11,0x0E},	// 0x4F
{0x00,0x1F,0x05,0x02},	// 0x50
{0x00,0x0E,0x19,0x1E},	// 0x51
{0x00,0x1F,0x05,0x1A},	// 0x52
{0x00,0x16,0x15,0x0D},	// 0x53
{0x00,0x01,0x1F,0x01},	// 0x54
{0x00,0x1F,0x10,0x1F},	// 0x55
{0x00,0x0F,0x10,0x0F},	// 0x56
{0x00,0x1F,0x0C,0x1F},	// 0x57
{0x00,0x1B,0x04,0x1B},	// 0x58
{0x00,0x03,0x1C,0x03},	// 0x59
{0x00,0x19,0x15,0x13},	// 0x5A
{0x00,0x1F,0x11,0x00},	// 0x5B
{0x00,0x03,0x04,0x18},	// 0x5C
{0x00,0x11,0x1F,0x00},	// 0x5D
{0x00,0x02,0x01,0x02},	// 0x5E
{0x20,0x20,0x20,0x20},	// 0x5F
{0x00,0x01,0x03,0x00},	// 0x60
{0x00,0x18,0x14,0x1C},	// 0x61
{0x00,0x1F,0x14,0x08},	// 0x62
{0x00,0x08,0x14,0x14},	// 0x63
{0x00,0x08,0x14,0x1F},	// 0x64
{0x00,0x0C,0x1C,0x14},	// 0x65
{0x00,0x04,0x1E,0x05},	// 0x66
{0x00,0x2C,0x24,0x3C},	// 0x67
{0x00,0x1F,0x04,0x18},	// 0x68
{0x00,0x00,0x1D,0x00},	// 0x69
{0x00,0x20,0x3D,0x00},	// 0x6A
{0x00,0x1F,0x08,0x14},	// 0x6B
{0x00,0x00,0x1F,0x00},	// 0x6C
{0x00,0x1C,0x0C,0x1C},	// 0x6D
{0x00,0x1C,0x04,0x18},	// 0x6E
{0x00,0x08,0x14,0x08},	// 0x6F
{0x00,0x3C,0x14,0x08},	// 0x70
{0x00,0x08,0x14,0x3C},	// 0x71
{0x00,0x1C,0x04,0x00},	// 0x72
{0x00,0x10,0x1C,0x04},	// 0x73
{0x00,0x04,0x1E,0x14},	// 0x74
{0x00,0x1C,0x10,0x1C},	// 0x75
{0x00,0x0C,0x10,0x0C},	// 0x76
{0x00,0x1C,0x18,0x1C},	// 0x77
{0x00,0x14,0x08,0x14},	// 0x78
{0x00,0x2C,0x10,0x0C},	// 0x79
{0x00,0x04,0x1C,0x10},	// 0x7A
{0x00,0x04,0x1F,0x11},	// 0x7B
{0x00,0x00,0x1F,0x00},	// 0x7C
{0x00,0x11,0x1F,0x04},	// 0x7D
{0x02,0x01,0x02,0x01},	// 0x7E
{0x00,0x0C,0x0A,0x0C},	// 0x7F
{0x00,0x2E,0x19,0x09},	// 0x80
{0x00,0x0D,0x10,0x1D},	// 0x81
{0x00,0x0C,0x1E,0x15},	// 0x82
{0x00,0x1A,0x15,0x1E},	// 0x83
{0x00,0x19,0x14,0x1D},	// 0x84
{0x00,0x19,0x16,0x1C},	// 0x85
{0x00,0x18,0x15,0x1C},	// 0x86
{0x00,0x2E,0x3A,0x0A},	// 0x87
{0x00,0x0E,0x1D,0x16},	// 0x88
{0x00,0x0D,0x1C,0x15},	// 0x89
{0x00,0x0D,0x1E,0x14},	// 0x8A
{0x00,0x01,0x1C,0x01},	// 0x8B
{0x00,0x02,0x19,0x02},	// 0x8C
{0x00,0x01,0x1A,0x00},	// 0x8D
{0x00,0x1D,0x0A,0x1D},	// 0x8E
{0x00,0x1C,0x0B,0x1C},	// 0x8F
{0x00,0x1C,0x1E,0x15},	// 0x90
{0x00,0x18,0x1C,0x0C},	// 0x91
{0x00,0x1E,0x1F,0x15},	// 0x92
{0x00,0x0A,0x15,0x0A},	// 0x93
{0x00,0x09,0x14,0x09},	// 0x94
{0x00,0x09,0x16,0x08},	// 0x95
{0x00,0x1A,0x11,0x1A},	// 0x96
{0x00,0x1D,0x12,0x1C},	// 0x97
{0x00,0x2D,0x10,0x0D},	// 0x98
{0x00,0x0D,0x12,0x0D},	// 0x99
{0x00,0x1D,0x10,0x1D},	// 0x9A
{0x00,0x0E,0x1B,0x0A},	// 0x9B
{0x00,0x14,0x1E,0x15},	// 0x9C
{0x00,0x0B,0x1E,0x0B},	// 0x9D
{0x00,0x1E,0x06,0x18},	// 0x9E
{0x00,0x10,0x1F,0x05},	// 0x9F
{0x00,0x18,0x16,0x1D},	// 0xA0
{0x00,0x00,0x1A,0x01},	// 0xA1
{0x00,0x1C,0x16,0x1D},	// 0xA2
{0x00,0x18,0x12,0x19},	// 0xA3
{0x00,0x1D,0x05,0x1D},	// 0xA4
{0x00,0x1D,0x09,0x1D},	// 0xA5
{0x00,0x16,0x15,0x17},	// 0xA6
{0x00,0x12,0x15,0x12},	// 0xA7
{0x00,0x08,0x15,0x10},	// 0xA8
{0x00,0x0E,0x02,0x02},	// 0xA9
{0x02,0x02,0x0E,0x00},	// 0xAA
{0x00,0x0B,0x14,0x1A},	// 0xAB
{0x00,0x0B,0x0C,0x1A},	// 0xAC
{0x00,0x00,0x1D,0x00},	// 0xAD
{0x04,0x0A,0x04,0x0A},	// 0xAE
{0x0A,0x04,0x0A,0x04},	// 0xAF
{0x00,0x15,0x00,0x2A},	// 0xB0
{0x2A,0x15,0x2A,0x15},	// 0xB1
{0x3F,0x2A,0x3F,0x15},	// 0xB2
{0x00,0x00,0x3F,0x00},	// 0xB3
{0x04,0x04,0x3F,0x00},	// 0xB4
{0x0A,0x0A,0x3F,0x00},	// 0xB5
{0x04,0x3F,0x00,0x3F},	// 0xB6
{0x04,0x3C,0x04,0x3C},	// 0xB7
{0x0A,0x0A,0x3E,0x00},	// 0xB8
{0x0A,0x3B,0x00,0x3F},	// 0xB9
{0x00,0x3F,0x00,0x3F},	// 0xBA
{0x0A,0x3A,0x02,0x3E},	// 0xBB
{0x0A,0x0B,0x08,0x0F},	// 0xBC
{0x04,0x07,0x04,0x07},	// 0xBD
{0x0A,0x0A,0x0F,0x00},	// 0xBE
{0x04,0x04,0x3C,0x00},	// 0xBF
{0x00,0x00,0x07,0x04},	// 0xC0
{0x04,0x04,0x07,0x04},	// 0xC1
{0x04,0x04,0x3C,0x04},	// 0xC2
{0x00,0x00,0x3F,0x04},	// 0xC3
{0x04,0x04,0x04,0x04},	// 0xC4
{0x04,0x04,0x3F,0x04},	// 0xC5
{0x00,0x00,0x3F,0x0A},	// 0xC6
{0x00,0x3F,0x00,0x3F},	// 0xC7
{0x00,0x0F,0x08,0x0B},	// 0xC8
{0x00,0x3E,0x02,0x3A},	// 0xC9
{0x0A,0x0B,0x08,0x0B},	// 0xCA
{0x0A,0x3A,0x02,0x3A},	// 0xCB
{0x00,0x3F,0x00,0x3B},	// 0xCC
{0x0A,0x0A,0x0A,0x0A},	// 0xCD
{0x0A,0x3B,0x00,0x3B},	// 0xCE
{0x0A,0x0A,0x0B,0x0A},	// 0xCF
{0x04,0x07,0x04,0x07},	// 0xD0
{0x0A,0x0A,0x3A,0x0A},	// 0xD1
{0x04,0x3C,0x04,0x3C},	// 0xD2
{0x00,0x07,0x04,0x07},	// 0xD3
{0x00,0x00,0x0F,0x0A},	// 0xD4
{0x00,0x00,0x3E,0x0A},	// 0xD5
{0x00,0x3C,0x04,0x3C},	// 0xD6
{0x04,0x3F,0x00,0x3F},	// 0xD7
{0x0A,0x0A,0x3B,0x0A},	// 0xD8
{0x04,0x04,0x07,0x00},	// 0xD9
{0x00,0x00,0x3C,0x04},	// 0xDA
{0x3F,0x3F,0x3F,0x3F},	// 0xDB
{0x38,0x38,0x38,0x38},	// 0xDC
{0x3F,0x3F,0x00,0x00},	// 0xDD
{0x00,0x00,0x3F,0x3F},	// 0xDE
{0x07,0x07,0x07,0x07},	// 0xDF
{0x00,0x1C,0x1C,0x14},	// 0xE0
{0x00,0x3E,0x15,0x0A},	// 0xE1
{0x00,0x1F,0x01,0x03},	// 0xE2
{0x00,0x1F,0x01,0x1F},	// 0xE3
{0x00,0x1B,0x15,0x11},	// 0xE4
{0x00,0x08,0x14,0x0C},	// 0xE5
{0x00,0x3C,0x10,0x1C},	// 0xE6
{0x00,0x04,0x1C,0x02},	// 0xE7
{0x00,0x15,0x1B,0x15},	// 0xE8
{0x00,0x0E,0x15,0x0E},	// 0xE9
{0x00,0x1C,0x02,0x1C},	// 0xEA
{0x00,0x0A,0x15,0x09},	// 0xEB
{0x00,0x1C,0x14,0x1C},	// 0xEC
{0x00,0x0E,0x1B,0x0E},	// 0xED
{0x00,0x0E,0x15,0x15},	// 0xEE
{0x00,0x1E,0x01,0x1E},	// 0xEF
{0x00,0x15,0x15,0x15},	// 0xF0
{0x00,0x12,0x17,0x12},	// 0xF1
{0x00,0x15,0x15,0x12},	// 0xF2
{0x00,0x12,0x15,0x15},	// 0xF3
{0x00,0x00,0x3C,0x02},	// 0xF4
{0x00,0x10,0x0F,0x00},	// 0xF5
{0x00,0x04,0x15,0x04},	// 0xF6
{0x14,0x0A,0x14,0x0A},	// 0xF7
{0x00,0x02,0x05,0x02},	// 0xF8
{0x00,0x04,0x0E,0x04},	// 0xF9
{0x00,0x00,0x04,0x00},	// 0xFA
{0x00,0x08,0x1F,0x01},	// 0xFB
{0x00,0x07,0x01,0x07},	// 0xFC
{0x00,0x0D,0x0B,0x00},	// 0xFD
{0x00,0x0C,0x0C,0x00},	// 0xFE
{0x00,0x00,0x00,0x00} 	// 0xFF
};

const prog_uchar customer_char[][5] PROGMEM = {
    {0x00,0x3E,0x1C,0x08,0x00},     // >
    {0x00,0x08,0x1C,0x3E,0x00},     // <
    {0x08,0x18,0x38,0x18,0x08},
    {0x20,0x30,0x38,0x30,0x20}      // ^
};

#endif