#include <at89x51.h>
#define PIN 0xf0
unsigned char code bits[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f,0xff};
unsigned char code tb_LI[]={
/*--  文字:  里  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,
0x01,0x00,0x01,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x00,0x00
};
unsigned char code tb_REN[]={
/*--  文字:  仁  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x10,0x00,0x18,0x08,0x17,0xFC,0x30,0x00,0x20,0x00,0x60,0x00,0xA0,0x00,0x20,0x00,
0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x04,0x2F,0xFE,0x20,0x00,0x20,0x00,0x00,0x00
};

unsigned char code tb_WEI[]={
/*--  文字:  为  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x00,0x80,0x10,0x80,0x0C,0x80,0x04,0x84,0x7F,0xFE,0x01,0x04,0x01,0x04,0x01,0x84,
0x01,0x44,0x02,0x24,0x02,0x24,0x04,0x04,0x08,0x44,0x10,0x28,0x20,0x10,0x00,0x00
};
unsigned char code tb_MEI[]={
/*--  文字:  美  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
0x08,0x20,0x04,0x40,0x7F,0xFC,0x01,0x00,0x1F,0xF8,0x01,0x00,0x01,0x00,0x7F,0xFE,
0x01,0x00,0x01,0x00,0x3F,0xFC,0x02,0x80,0x04,0x40,0x08,0x30,0x30,0x1C,0xC0,0x08
};

void shortdelay(void)
{
	unsigned char i,j;
	for(i=40;i;i--)
		for(j=40;j;j--);
}

void longdelay(void)
{
	unsigned char i,j,k;
	for(i=255;i;i--)
		for(j=200;j;j--)
			for(k=1;k;k--);
}
void show(unsigned char * tb)
{
/*
P1:矩阵列
P2:矩阵行扫描前八行
P0:矩阵行扫描后八行

*/	unsigned char P=10;
	unsigned char i;
	while(P--)
	{
	for(i=0;i<16;i++)
	{
		P1=i;
		P2=tb[2*i];
		P0=tb[2*i+1];
		shortdelay();
	}
	P1=i;
	}
//	longdelay();
}		
		
void main(void)
{
//	unsigned char lie;
//	
	
	
	
	
	while(1)
	{
	   show(tb_LI);
	   
	   show(tb_REN);
	   
	   show(tb_WEI);
	   show(tb_MEI);			

	}
			
}


