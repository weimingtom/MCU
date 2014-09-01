#ifndef _module_h
#define _module_h
#include<avr\pgmspace.h>

//unsigned char 
//const unsigned char 
//const prog_char
PROGMEM prog_uchar bmp1[] ={
	  0xEC,0xEF,0xEF,0xFF,0xF7,0xF7,0xFF,0xF6,
      0xFF,0xFB,0xFB,0xFF,0xFB,0xFF,0xFC,0xFD,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xBF,
      0x9D,0x2D,0x57,0x3D,0x3F,0x07,0x07,0x07,
      0x07,0x1F,0x07,0x07,0x0F,0x1F,0x1F,0x2F,
      0x7F,0x3F,0x6F,0xEF,0xFF,0xFF,0x6F,0x6F,
      0x7F,0x7D,0x7F,0x7F,0xFF,0xFF,0x7F,0x0F,
      0x1F,0x0F,0x0F,0x05,0x05,0x03,0x9F,0xC1,
      0x81,0x05,0x00,0x00,0x80,0x08,0x00,0x01,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
      0x00,0x80,0x00,0x20,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x40,
      0x00,0x00,0xC2,0x00,0x00,0x80,0x20,0x02,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
      0x04,0x04,0x04,0x06,0xA2,0x03,0xEF,0xE9,
      0xE3,0xE3,0xF8,0xE0,0xE0,0xB0,0xBA,0xE4,
      0xCC,0xC5,0xDB,0xDF,0x9E,0xB7,0x17,0x6F,
      0xEF,0xCF,0xEE,0xFD,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0x99,0xD9,0xFF,0xFF,0xFF,0xEF,0xEF,0xFF,
      0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0x7F,0xFF,0xF7,0x77,0xEB,0xEB,
      0xEF,0xE7,0x86,0x00,0x80,0x81,0xEB,0xD7,
      0x25,0x87,0xE6,0xF4,0x70,0x24,0xF4,0xBA,
      0xFC,0xD0,0x30,0x20,0xF0,0x6C,0x3A,0xB0,
      0x18,0xF8,0xD8,0xF8,0xFF,0xFF,0x20,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,
      0x20,0x00,0x20,0x00,0x04,0x5C,0x08,0x7F,
      0xF8,0xA1,0x81,0xE4,0xA4,0x80,0x80,0x00,
      0x04,0x10,0x48,0x21,0x01,0x40,0x00,0x00,
      0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x04,0x50,0x01,0x40,0x40,0x40,0x40,
      0x40,0x20,0x62,0x20,0x20,0x80,0x00,0x00,
      0x80,0x80,0x80,0x84,0x90,0x00,0x6C,0x71,
      0x60,0x40,0x00,0x80,0x81,0xCF,0xC1,0xC0,
      0xE0,0xC8,0xC2,0x40,0x00,0xC8,0x80,0xFF,
      0xFD,0xC8,0xCE,0xDF,0xFF,0xFF,0xFF,0xF6,
      0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,
      0x0F,0x1F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
      0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x3F,0xBF,0x9F,0xEF,0xF7,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,
      0xFF,0xFF,0xFF,0xFF,0xEF,0xE7,0xE1,0x67,
      0x0F,0x1F,0x0F,0x06,0x1E,0x3E,0xCF,0x87,
      0x07,0x37,0x02,0x0F,0x0D,0x1C,0x12,0x1C,
      0x3C,0x3D,0x3F,0x3D,0x7B,0x7F,0x01,0x37,
      0x77,0x77,0x26,0x07,0x3F,0x3C,0x3F,0x1F,
      0x17,0x9E,0x1C,0x3E,0x3F,0x3F,0x3E,0x0C,
      0x0E,0x15,0x00,0x00,0x80,0x80,0x84,0xC4,
      0xC0,0xE2,0x60,0x60,0x30,0x30,0x30,0x18,
      0x18,0x18,0x0C,0x0C,0x0C,0x0C,0x04,0x06,
      0x06,0x06,0x06,0x06,0x02,0x02,0x02,0x02,
      0x02,0x02,0x02,0x02,0x02,0xC2,0xFE,0xFE,
      0xFE,0xFE,0x02,0x02,0x02,0x02,0x02,0x02,
      0x02,0x02,0x12,0x02,0x62,0x26,0x46,0xC6,
      0x86,0x06,0x06,0x0C,0x0C,0x0C,0x1C,0x9D,
      0x3D,0xF8,0x78,0x79,0xF9,0xF8,0xF3,0xF3,
      0xF3,0xE6,0xE7,0xEF,0xCF,0xCF,0xDF,0x9F,
      0x9F,0xBF,0x3F,0x3F,0x6F,0x67,0x7D,0xDF,
      0xFF,0xFF,0xFF,0xFF,0x6F,0x7F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x3F,
      0x1F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0xEF,0xFF,0xFE,0x1F,0x9F,0x8F,0x1F,0x1F,
      0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x9F,0x1F,
      0x1C,0x1E,0x1D,0x5C,0x5C,0x7F,0x3F,0x3F,
      0x3F,0x3F,0x3F,0x3F,0x3E,0x39,0x38,0x18,
      0x18,0x38,0x10,0x14,0x10,0x10,0x10,0x11,
      0x16,0x1C,0x10,0x90,0x00,0x08,0x00,0x00,
      0x00,0x00,0x00,0x40,0xC8,0xCC,0xC8,0xC0,
      0xD0,0xD4,0xD0,0xD2,0xD2,0xD0,0xD1,0xD0,
      0xD0,0xD8,0xE8,0xD8,0xD8,0xDC,0xDC,0xFE,
      0xFE,0xFB,0xFF,0xFB,0xF9,0xF9,0xFD,0xFC,
      0xFE,0xEE,0xF0,0xF8,0xF0,0xF0,0xE0,0xF0,
      0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xE8,0xE0,
      0xE0,0xE8,0xEC,0xE9,0xF8,0xF1,0xF0,0xF8,
      0xF0,0xF0,0xF0,0xF0,0xFE,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
      0xF0,0xF0,0xF0,0xFB,0xF8,0xF8,0xF8,0xF0,
      0xF0,0xF1,0xFB,0xF2,0xF3,0xF3,0xF0,0xF4,
      0xF7,0xF7,0xF4,0xF4,0xF0,0xF1,0xF5,0xF7,
      0xF7,0xF7,0xF7,0xF7,0xFB,0xFB,0xFB,0xFB,
      0xFB,0xFB,0xFB,0xFB,0xFB,0xFA,0xFA,0xF8,
      0xF8,0xF8,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,
      0xF3,0xF3,0xF3,0xF3,0xF1,0x70,0x30,0x30,
      0x30,0xB0,0x10,0x10,0x00,0x00,0x00,0x80,
      0xC0,0xC0,0xC0,0xE0,0xF0,0xF8,0x78,0x78,
      0x01,0x00,0x03,0x02,0x00,0x00,0x22,0x20,
      0x2A,0xCE,0xF0,0xA8,0x8D,0x84,0x88,0xC8,
      0xE4,0xE0,0xC2,0xE0,0xE0,0xE0,0xE0,0xF0,
      0xF0,0xF0,0xF0,0xF8,0xF8,0xF8,0xF8,0xFC,
      0xFC,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0x7E,0x7E,
      0x7F,0xFF,0x7F,0x7F,0x7F,0x7F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,
      0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFE,0xFE,0xEE,0xCE,0xDE,0xDF,0xBF,
      0xBF,0xFF,0xFF,0xAF,0xEF,0xE7,0xC7,0xE7,
      0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
      0xE0,0xFF,0xFF,0xFF,0xEF,0xEF,0xAF,0xEF,
      0xFF,0xF7,0xF7,0xF7,0xF7,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x87,0x1B,0x8D,0x8A,0x88,0x88,0xC1,
      0x03,0x47,0x03,0x81,0x80,0x98,0x9C,0x9E,
      0x19,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,
      0x67,0x73,0x71,0x63,0x22,0x06,0x0E,0x07,
      0x00,0x00,0x98,0x9C,0x9D,0x99,0x03,0x0F,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xBF,0xBF,0x9F,0x8F,0x87,0x87,0x87,
      0x87,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,
      0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x07,
      0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
      0x07,0x03,0x03,0x07,0x07,0x17,0x17,0x17,
      0x17,0x17,0x17,0x17,0x17,0x1E,0x1E,0x19,
      0x1B,0x1B,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
      0x1F,0x1F,0x1F,0x1E,0x1D,0x1D,0x1B,0x1B,
      0x18,0x18,0x18,0x1B,0x19,0x1D,0x1D,0x1E,
      0x1E,0x17,0x17,0x13,0x15,0x14,0x14,0x15,
      0x17,0x15,0x11,0x15,0x15,0x15,0x15,0x15,
      0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x11,
      0x11,0x11,0x17,0x15,0x15,0x11,0x15,0x17,
      0x17,0x15,0x15,0x15,0x31,0x31,0x31,0x35,
      0x31,0x31,0x31,0x31,0x37,0x31,0x35,0x35,
      0x35,0x35,0x35,0x35,0x31,0x31,0x31,0x31,
      0x31,0x31,0x31,0x31,0x31,0x37,0x3F,0x31,
      0x31,0x31,0x31,0x31,0x31,0x39,0x3B,0x37,
      0x37,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
      0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
      0x3F,0x3C,0x3C,0x3A,0x3A,0x33,0x33,0x36,
      0x30,0x30,0x39,0x3B,0x39,0x3C,0x2E,0x2F,
      0x27,0x23,0x21,0x21,0x21,0x21,0x21,0x21,
      0x21,0x21,0x2D,0x29,0x2B,0x29,0x29,0x01,
      0x01,0x09,0x01,0x01,0x01,0x01,0x01,0x01,
      0x01,0x01,0x01,0x0D,0x01,0x01,0x01,0x01,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
PROGMEM prog_uchar bmp2[]=
{
	  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xBF,0xDF,0x0F,0xB3,
      0xDF,0x67,0xEB,0x2F,0xEF,0x6F,0xCF,0xFF,
      0xFB,0x8B,0xAB,0xAB,0x03,0xAB,0x83,0xAB,
      0xAB,0x8B,0xFB,0xFF,0xFF,0xFF,0x83,0xAB,
      0xAB,0xAB,0xAB,0x83,0xFF,0xFF,0xFF,0x0B,
      0x7B,0x7B,0x03,0xFF,0x07,0x57,0x53,0x57,
      0x57,0x47,0xFF,0xD7,0xD7,0xD7,0x07,0xDB,
      0x5F,0x03,0xDF,0xDB,0x57,0xDF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFB,
      0xFD,0xEE,0xEF,0xE0,0xFF,0xFE,0xF9,0xFF,
      0xEE,0xEE,0xEA,0xE8,0xEA,0xF6,0xF2,0xF4,
      0xEE,0xEE,0xFE,0xEE,0xF6,0xF8,0xFA,0xF6,
      0xE0,0xEA,0xEA,0xEA,0xEA,0xEE,0xFF,0xFB,
      0xEB,0xED,0xE0,0xFB,0xFC,0xF0,0xFD,0xF0,
      0xED,0xE0,0xFF,0xFD,0xED,0xEE,0xE0,0xF6,
      0xF7,0xFA,0xF9,0xF6,0xEF,0xE3,0xFF,0xFF,
      0xF7,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0xFF,0xFF,0xB7,0xD5,0xE3,0x01,0xC3,0xD5,
      0xB7,0xF7,0xFF,0xF7,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x3F,0x3F,
      0x1F,0x1F,0x0F,0x0F,0x47,0x77,0x3F,0x3F,
      0x1F,0x1F,0x1F,0xEF,0x7F,0x7F,0x3F,0x3F,
      0x9F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xBF,0x7F,0x7F,0x7F,0xFF,0xFF,0xEF,0xEF,
      0xDF,0xDF,0xBF,0xB9,0x79,0x79,0xF9,0xFB,
      0xFB,0xE3,0xFF,0xBF,0xDF,0xCF,0xC7,0x1F,
      0x0F,0xC7,0xE3,0xC7,0x8F,0x9F,0x01,0xC3,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,
      0x7F,0xDF,0x37,0x0D,0x03,0x00,0x03,0x0F,
      0x1F,0xE1,0xC4,0x82,0x1A,0x24,0x18,0x01,
      0x0F,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,
      0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,
      0xC0,0xC0,0x82,0x02,0x02,0x04,0x00,0x02,
      0x81,0x60,0x18,0x3F,0xC0,0x01,0x01,0x01,
      0x03,0x23,0x12,0x16,0x14,0x04,0x00,0x01,
      0x01,0x01,0x03,0x03,0x03,0x06,0x04,0x08,
      0x01,0x01,0x03,0x07,0x0F,0x3F,0x7F,0x0E,
      0xC7,0x23,0xD3,0x13,0x27,0x0F,0xFF,0x3F,
      0x0F,0x01,0x03,0x36,0x1B,0x6F,0xBF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x37,0x6D,
      0x03,0x00,0x00,0x80,0x40,0x20,0x60,0x92,
      0x13,0x13,0x33,0xC9,0x07,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,
      0xA0,0x40,0x00,0x10,0x20,0x40,0x10,0x16,
      0x0F,0x03,0x01,0xE1,0x18,0x04,0x02,0x01,
      0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x08,
      0x10,0x22,0xC4,0x04,0x06,0x1F,0x7F,0xB3,
      0x83,0x03,0x03,0x82,0x02,0x00,0x00,0x80,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x01,0x00,0xFC,0x46,0x87,0x06,0x06,
      0x04,0x08,0x00,0x00,0x00,0x00,0x06,0xFB,
      0xDF,0x8F,0xDF,0xFF,0xFF,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x3F,0x3F,0x3F,0x3F,0x2B,0x3F,0x12,0x00,
      0x00,0x00,0x3E,0x01,0x00,0x00,0x00,0x00,
      0x03,0x3C,0x00,0x00,0x01,0x02,0x04,0x04,
      0x04,0x03,0x01,0x01,0x3E,0x02,0x04,0x04,
      0x3C,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
      0x04,0x04,0x02,0x01,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x0F,0x10,0x20,0x20,0x00,
      0x00,0x02,0x01,0x00,0x00,0x02,0x25,0x22,
      0x20,0x10,0x10,0x28,0x1C,0x02,0x01,0x03,
      0x05,0x19,0x23,0x02,0x04,0x00,0x00,0x02,
      0x04,0x08,0x20,0x00,0x00,0x00,0x00,0x00,
      0x17,0x3A,0x2F,0x1F,0x3F,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
      0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
/////////////////////////////////////////////////////////////////////////
// 汉字字模表                                                          //
// 汉字库: 宋体16.dot 纵向取模下高位,数据排列:从左到右从上到下         //
/////////////////////////////////////////////////////////////////////////
PROGMEM prog_uchar  hzstr1[] =          // 数据表
{
	  /*0x44,0x44,0x44,0xF4,0x04,0xBF,0xA4,0xA4,
      0xA4,0xBF,0x04,0xF4,0x84,0x86,0x44,0x00,
      0x88,0x68,0x04,0x07,0x20,0x4F,0x08,0x08,
      0x28,0x4F,0x00,0x07,0x28,0x48,0xCE,0x00,

      0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0xFF,
      0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,
      0x00,0x7F,0x20,0x20,0x20,0x20,0x20,0x3F,
      0x20,0x20,0x20,0x20,0x20,0x7F,0x00,0x00,*/

      0x20,0x20,0x20,0x20,0x20,0x20,0xA0,0x7F,
      0xA0,0x20,0x20,0x20,0x20,0x30,0x20,0x00,
      0x00,0x40,0x40,0x20,0x10,0x0C,0x03,0x00,
      0x01,0x06,0x08,0x10,0x20,0x60,0x20,0x00,

      0x40,0x30,0x11,0x96,0x90,0x90,0x91,0x96,
      0x90,0x90,0x98,0x14,0x13,0x50,0x30,0x00,
      0x04,0x04,0x04,0x04,0x04,0x44,0x84,0x7E,
      0x06,0x05,0x04,0x04,0x04,0x06,0x04,0x00,

      0x80,0x40,0x20,0xF8,0x07,0x24,0x24,0x24,
      0x25,0x26,0x24,0x24,0xB4,0x26,0x04,0x00,
      0x00,0x00,0x00,0xFF,0x00,0x01,0xFD,0x45,
      0x45,0x45,0x45,0x45,0xFD,0x01,0x00,0x00,

      0x00,0x00,0x00,0xFC,0xA4,0xA6,0xA5,0xA4,
      0xA4,0xA4,0xA4,0xFE,0x04,0x00,0x00,0x00,
      0x40,0x30,0x00,0x77,0x84,0x84,0x8C,0x94,
      0xB4,0x84,0x84,0xE7,0x00,0x10,0x60,0x00,

      0x24,0x24,0x24,0xA4,0xFE,0xA3,0x22,0x00,
      0x24,0x48,0x00,0xFF,0x00,0x80,0x00,0x00,
      0x10,0x08,0x06,0x01,0xFF,0x00,0x01,0x02,
      0x02,0x02,0x02,0xFF,0x01,0x01,0x01,0x00,

      0x00,0x00,0x00,0xFF,0x88,0x88,0x88,0x88,
      0x88,0x88,0x88,0x88,0xCC,0x88,0x00,0x00,
      0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
      0x08,0x4C,0x88,0x40,0x3F,0x00,0x00,0x00,

      0x00,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,
      0x04,0x04,0x04,0x04,0x06,0x04,0x00,0x00,
      0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x3F,
      0x20,0x20,0x20,0x20,0x20,0x30,0x20,0x00,

      0x24,0x24,0xA4,0xFE,0xA3,0x22,0x20,0x7E,
      0x42,0x42,0x42,0x42,0x42,0x7F,0x02,0x00,
      0x08,0x06,0x01,0xFF,0x00,0x43,0x41,0x49,
      0x49,0x49,0x7F,0x49,0x4D,0x69,0x41,0x00,

      0x00,0xFE,0x22,0x5A,0x96,0x0C,0x24,0x24,
      0x25,0x26,0x24,0x34,0xA4,0x14,0x0C,0x00,
      0x00,0xFF,0x04,0x08,0x87,0x81,0x41,0x31,
      0x0F,0x01,0x3F,0x41,0x41,0x41,0x70,0x00
};

PROGMEM prog_uchar string1[]=
{
	0xE0,0xF0,0x98,0x8C,0x98,  // -A-
	0xF0,0xE0,0x00,0x0F,0x0F,
	0x00,0x00,0x00,0x0F,0x0F,
	0x00,
};

#endif
