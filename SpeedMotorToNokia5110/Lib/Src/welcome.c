
#include "../Inc/welcome.h"

const uint8_t welcome_img[] flash={
/* Image width: 84 pixels */
0x54, 0x00,
/* Image height: 48 pixels */
0x30, 0x00,
#ifndef _GLCD_DATA_BYTEY_
/* Image data for monochrome displays organized
   as horizontal rows of bytes */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 
0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0F, 
0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x7F, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 
0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
0xFF, 0x07, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0xFF, 0x7F, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x05, 
0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xF5, 0xFF, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF8, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xF0, 0xFE, 0xFF, 0xFB, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xF0, 0x57, 0xD5, 0x6E, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
0x00, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xD0, 0x02, 0x00, 0x9A, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x50, 0x25, 0x11, 0x54, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x55, 
0xFD, 0xFF, 0xAB, 0x36, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x20, 0x55, 0xFD, 0xFF, 0x55, 0x55, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xA0, 0xAA, 0xFE, 0xFF, 
0x55, 0x15, 0x00, 0x00, 0x00, 0x00, 0x40, 0x55, 
0x05, 0x00, 0x40, 0x00, 0x55, 0x15, 0x00, 0x00, 
0x00, 0x40, 0x55, 0x05, 0x20, 0x01, 0x00, 0x55, 
0x15, 0x00, 0x00, 0x00, 0x80, 0xAA, 0x4A, 0x00, 
0x08, 0x08, 0x55, 0x15, 0x00, 0x00, 0x00, 0x69, 
0x55, 0xB5, 0xFF, 0xF7, 0xF7, 0xAA, 0x2A, 0x09, 
0x00, 0x80, 0x95, 0xAA, 0xFA, 0xFF, 0xFF, 0xFF, 
0x52, 0xD5, 0x0A, 0x00, 0x80, 0xAA, 0xAA, 0xFA, 
0xFF, 0xFF, 0xFF, 0xAA, 0x2A, 0x15, 0x00, 0x00, 
0x55, 0x15, 0x51, 0x55, 0xAA, 0xAA, 0x24, 0xA9, 
0x0A, 0x00, 0x80, 0xAA, 0x04, 0x00, 0x00, 0x00, 
0x00, 0x80, 0xAA, 0x12, 0x00, 0x80, 0x55, 0x1B, 
0x40, 0x00, 0x00, 0x04, 0x80, 0x55, 0x0D, 0x00, 
0x00, 0x4A, 0x04, 0x10, 0x55, 0x55, 0x51, 0x00, 
0x4A, 0x02, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xF8, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x22, 0x44, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xD8, 0xBB, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 
0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xA8, 0xAA, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#else
/* Image data for monochrome displays organized
   as rows of vertical bytes */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xF0, 
0xF0, 0xF8, 0xF0, 0xF0, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xD0, 
0xF0, 0xF8, 0xF0, 0xF0, 0xF8, 0xF0, 0xB0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x43, 
0xE3, 0xE3, 0xE3, 0xE3, 0xC7, 0xE1, 0xE7, 0xF8, 
0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 
0xFC, 0xFC, 0xFC, 0xEC, 0xFD, 0xE3, 0xC3, 0xE3, 
0xE3, 0xE3, 0xE3, 0xA3, 0x03, 0x03, 0x03, 0x03, 
0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
0x80, 0x00, 0x80, 0x00, 0x80, 0x70, 0x90, 0x50, 
0xB0, 0x40, 0xB0, 0x40, 0x3F, 0x41, 0x3D, 0x45, 
0x39, 0x45, 0x79, 0x70, 0x71, 0x78, 0x71, 0x70, 
0x79, 0x70, 0x71, 0x70, 0x79, 0x70, 0xF1, 0x71, 
0x70, 0x17, 0x69, 0x15, 0x6C, 0x13, 0x69, 0x16, 
0xE0, 0x10, 0xF0, 0x00, 0xF0, 0x10, 0xA0, 0x00, 
0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xD8, 0xAC, 0x50, 0xA8, 0x54, 
0xA8, 0x54, 0xA5, 0x5A, 0xA5, 0x9A, 0x65, 0x9A, 
0xA5, 0x1A, 0x05, 0x1A, 0x25, 0x1A, 0x05, 0x1A, 
0x3C, 0x1C, 0xBA, 0x1C, 0x3C, 0x1C, 0x3C, 0x1C, 
0x3C, 0x1D, 0x3C, 0x1C, 0x1D, 0x3C, 0x1C, 0x3A, 
0x1C, 0x3C, 0x1C, 0x3C, 0x1C, 0x3C, 0x9C, 0x3A, 
0x1C, 0x3C, 0x1C, 0x3C, 0x03, 0x1C, 0x23, 0x14, 
0x0B, 0x34, 0x0B, 0xD4, 0xAB, 0x54, 0x8B, 0x74, 
0x8B, 0x74, 0x88, 0x68, 0x94, 0x68, 0x90, 0xAC, 
0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x04, 0x1F, 0x0E, 0x0E, 0x4E, 
0x0F, 0x2E, 0x0F, 0x8E, 0x8F, 0x2E, 0x8F, 0x8E, 
0x8F, 0x8E, 0x2F, 0x8E, 0x8F, 0x8E, 0x2F, 0x8E, 
0x8F, 0x0E, 0x2E, 0x0E, 0x0F, 0x1E, 0x0F, 0x0A, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
0x03, 0x07, 0x03, 0x07, 0x03, 0x07, 0x03, 0x07, 
0x03, 0x07, 0x03, 0x07, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};
