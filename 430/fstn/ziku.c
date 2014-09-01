/****************************************/
/* 定义ASCII字库8列*16行  */
/****************************************/
const unsigned char Ezk[]={
/*-文字: --0x20 */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:!--0x21 */
  0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x00,
/*-文字:"--0x22 */
  0x00,0x08,0x04,0x02,0x08,0x04,0x02,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:#--0x23 */
  0x40,0x40,0xF8,0x40,0x40,0xF8,0x40,0x00,
  0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00,
/*-文字:$--0x24 */
  0x00,0x70,0x88,0xFC,0x08,0x08,0x30,0x00,
  0x00,0x1C,0x20,0xFF,0x21,0x22,0x1C,0x00,
/*-文字:%--0x25 */
  0xF0,0x08,0xF0,0x80,0x70,0x08,0x00,0x00,
  0x00,0x31,0x0E,0x01,0x1E,0x21,0x1E,0x00,
/*-文字:&--0x26 */
  0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,
  0x1E,0x21,0x23,0x24,0x18,0x16,0x20,0x00,
/*-文字:'--0x27 */
  0x20,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:(--0x28 */
  0x00,0x00,0x00,0x00,0xC0,0x30,0x08,0x04,
  0x00,0x00,0x00,0x00,0x03,0x0C,0x10,0x20,
/*-文字:)--0x29 */
  0x04,0x08,0x30,0xC0,0x00,0x00,0x00,0x00,
  0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x00,
/*-文字:*--0x2a */
  0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,
  0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,
/*-文字:+--0x2b */
  0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,
  0x01,0x01,0x01,0x0F,0x01,0x01,0x01,0x00,
/*-文字:,--0x2c */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x60,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:---0x2d */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
/*-文字:.--0x2e */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:/--ox2f */
  0x00,0x00,0x00,0x00,0x00,0xE0,0x18,0x04,
  0x00,0x40,0x30,0x0C,0x03,0x00,0x00,0x00,
/*-文字:0--0x30 */
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,
  0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,
/*-文字:1--0x31 */
  0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,
  0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,
/*-文字:2--0x32 */
  0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,
  0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,
/*-文字:3--0x33 */
  0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,
  0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,
/*-文字:4--0x34 */
  0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,
  0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,
/*-文字:5--0x35 */
  0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,
  0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,
/*-文字:6--0x36 */
  0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,
  0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,
/*-文字:7--0x37 */
  0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:8--0x38 */
  0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,
  0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,
/*-文字:9--0x39 */
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,
  0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,
/*-文字::-- */
  0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,
  0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,
/*-文字:/-- */
  0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,
  0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00,
/*-文字:<-- */
  0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,
  0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,
/*-文字:=-- */
  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,
/*-文字:>-- */
  0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,
  0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,
/*-文字:?-- */
  0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00,
  0x00,0x00,0x00,0x26,0x01,0x00,0x00,0x00,
/*-文字:@-- */
  0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,
  0x07,0x18,0x27,0x28,0x27,0x28,0x07,0x00,
/*-文字:A-- */
  0x00,0x00,0xE0,0x18,0x18,0xE0,0x00,0x00,
  0x30,0x0F,0x04,0x04,0x04,0x04,0x0F,0x30,
/*-文字:B-- */
  0xF8,0x08,0x08,0x08,0x08,0x90,0x60,0x00,
  0x3F,0x21,0x21,0x21,0x21,0x12,0x0C,0x00,
/*-文字:C-- */
  0xE0,0x10,0x08,0x08,0x08,0x10,0x60,0x00,
  0x0F,0x10,0x20,0x20,0x20,0x10,0x0C,0x00,
/*-文字:D-- */
  0xF8,0x08,0x08,0x08,0x08,0x10,0xE0,0x00,
  0x3F,0x20,0x20,0x20,0x20,0x10,0x0F,0x00,
/*-文字:E-- */
  0x00,0xF8,0x08,0x08,0x08,0x08,0x08,0x00,
  0x00,0x3F,0x21,0x21,0x21,0x21,0x20,0x00,
/*-文字:F-- */
  0xF8,0x08,0x08,0x08,0x08,0x08,0x08,0x00,
  0x3F,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
/*-文字:G-- */
  0xE0,0x10,0x08,0x08,0x08,0x10,0x60,0x00,
  0x0F,0x10,0x20,0x20,0x21,0x11,0x3F,0x00,
/*-文字:H-- */
  0x00,0xF8,0x00,0x00,0x00,0x00,0xF8,0x00,
  0x00,0x3F,0x01,0x01,0x01,0x01,0x3F,0x00,
/*-文字:I-- */
  0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:J-- */
  0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,
  0x00,0x1C,0x20,0x20,0x20,0x20,0x1F,0x00,
/*-文字:K-- */
  0x00,0xF8,0x00,0x80,0x40,0x20,0x10,0x08,
  0x00,0x3F,0x01,0x00,0x03,0x04,0x18,0x20,
/*-文字:L-- */
  0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0x20,0x20,0x20,0x20,0x20,0x20,0x00,
/*-文字:M-- */
  0xF8,0xE0,0x00,0x00,0x00,0xE0,0xF8,0x00,
  0x3F,0x00,0x0F,0x30,0x0F,0x00,0x3F,0x00,
/*-文字:N-- */
  0x00,0xF8,0x30,0xC0,0x00,0x00,0xF8,0x00,
  0x00,0x3F,0x00,0x01,0x06,0x18,0x3F,0x00,
/*-文字:O-- */
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,
  0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,
/*-文字:P-- */
  0xF8,0x08,0x08,0x08,0x08,0x10,0xE0,0x00,
  0x3F,0x02,0x02,0x02,0x02,0x01,0x00,0x00,
/*-文字:Q-- */
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,
  0x00,0x0F,0x10,0x20,0x2C,0x10,0x2F,0x00,
/*-文字:R-- */
  0xF8,0x08,0x08,0x08,0x08,0x90,0x60,0x00,
  0x3F,0x01,0x01,0x01,0x07,0x18,0x20,0x00,
/*-文字:S-- */
  0x60,0x90,0x88,0x08,0x08,0x10,0x20,0x00,
  0x0C,0x10,0x20,0x21,0x21,0x12,0x0C,0x00,
/*-文字:T-- */
  0x08,0x08,0x08,0xF8,0x08,0x08,0x08,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:U-- */
  0xF8,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,
  0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,
/*-文字:V-- */
  0x18,0xE0,0x00,0x00,0x00,0xE0,0x18,0x00,
  0x00,0x01,0x0E,0x30,0x0E,0x01,0x00,0x00,
/*-文字:W-- */
  0xF8,0x00,0xC0,0x38,0xC0,0x00,0xF8,0x00,
  0x03,0x3C,0x03,0x00,0x03,0x3C,0x03,0x00,
/*-文字:X-- */
  0x08,0x30,0xC0,0x00,0xC0,0x30,0x08,0x00,
  0x20,0x18,0x06,0x01,0x06,0x18,0x20,0x00,
/*-文字:Y-- */
  0x08,0x30,0xC0,0x00,0xC0,0x30,0x08,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:Z-- */
  0x08,0x08,0x08,0x08,0xC8,0x28,0x18,0x00,
  0x30,0x2C,0x22,0x21,0x20,0x20,0x20,0x00,
/*-文字:{-- */
  0x00,0x00,0x00,0x80,0x7E,0x02,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3F,0x20,0x00,0x00,
/*-文字:\-- */
  0x00,0x08,0x70,0x80,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x0E,0x30,0xC0,0x00,
/*-文字:}-- */
  0x00,0x02,0x7E,0x80,0x00,0x00,0x00,0x00,
  0x00,0x20,0x3F,0x00,0x00,0x00,0x00,0x00,
/*-文字:^-- */
  0x00,0x08,0x04,0x02,0x02,0x04,0x08,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:_-- */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
/*-文字:`-- */
  0x00,0x00,0x02,0x06,0x04,0x08,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/*-文字:a-- */
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
  0x00,0x19,0x24,0x24,0x24,0x14,0x3F,0x00,
/*-文字:b-- */
  0x00,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,
  0x00,0x3F,0x11,0x20,0x20,0x20,0x1F,0x00,
/*-文字:c-- */
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
  0x0E,0x11,0x20,0x20,0x20,0x20,0x11,0x00,
/*-文字:d-- */
  0x00,0x00,0x80,0x80,0x80,0x00,0xF8,0x00,
  0x00,0x1F,0x20,0x20,0x20,0x11,0x3F,0x00,
/*-文字:e-- */
  0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
  0x0E,0x15,0x24,0x24,0x24,0x25,0x16,0x00,
/*-文字:f-- */
  0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:g-- */
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,
  0x40,0xB7,0xA8,0xA8,0xA8,0xA7,0x40,0x00,
/*-文字:h-- */
  0x00,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,
  0x00,0x3F,0x01,0x00,0x00,0x00,0x3F,0x00,
/*-文字:i-- */
  0x00,0x00,0x00,0x98,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:j-- */
  0x00,0x00,0x00,0x00,0x98,0x00,0x00,0x00,
  0x00,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,
/*-文字:k-- */
  0x00,0xF8,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x3F,0x04,0x02,0x0D,0x10,0x20,0x00,
/*-文字:l-- */
  0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,
/*-文字:m-- */
  0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,
  0x3F,0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,
/*-文字:n-- */
  0x00,0x80,0x00,0x80,0x80,0x80,0x00,0x00,
  0x00,0x3F,0x01,0x00,0x00,0x00,0x3F,0x00,
/*-文字:o-- */
  0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
  0x0E,0x11,0x20,0x20,0x20,0x11,0x0E,0x00,
/*-文字:p-- */
  0x00,0x80,0x00,0x80,0x80,0x80,0x00,0x00,
  0x00,0xFF,0x11,0x20,0x20,0x20,0x1F,0x00,
/*-文字:q-- */
  0x00,0x00,0x80,0x80,0x80,0x00,0x80,0x00,
  0x00,0x1F,0x20,0x20,0x20,0x11,0xFF,0x00,
/*-文字:r-- */
  0x00,0x00,0x80,0x00,0x00,0x80,0x80,0x00,
  0x00,0x00,0x3F,0x01,0x01,0x00,0x00,0x00,
/*-文字:s-- */
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
  0x00,0x13,0x24,0x24,0x24,0x24,0x19,0x00,
/*-文字:t-- */
  0x00,0x80,0x80,0xE0,0x80,0x80,0x80,0x00,
  0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x00,
/*-文字:u-- */
  0x00,0x80,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x00,
/*-文字:v-- */
  0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x07,0x18,0x20,0x18,0x07,0x00,0x00,
/*-文字:w-- */
  0x80,0x00,0x00,0x80,0x00,0x00,0x80,0x00,
  0x0F,0x30,0x0E,0x01,0x0E,0x30,0x0F,0x00,
/*-文字:x-- */
  0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x20,0x11,0x0A,0x04,0x0A,0x11,0x20,0x00,
/*-文字:y-- */
  0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x87,0x98,0x60,0x18,0x07,0x00,0x00,
/*-文字:z-- */
  0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,
  0x00,0x30,0x28,0x24,0x22,0x21,0x20,0x00,
/*-文字:{-- */
  0x00,0x00,0x00,0x80,0x7E,0x02,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3F,0x20,0x00,0x00,
/*-文字:|-- */
  0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,
/*-文字:}-- */
  0x00,0x02,0x7E,0x80,0x00,0x00,0x00,0x00,
  0x00,0x20,0x3F,0x00,0x00,0x00,0x00,0x00,
/*-文字:~-- */
  0x00,0x06,0x01,0x01,0x06,0x04,0x03,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};