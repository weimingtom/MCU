#include <at89x51.h>
#include <intrins.h>
unsigned char x;
unsigned char code Tab[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,0x00,0x40};
unsigned char code KeyTab[]={0x81,0x41,0x21,0x11,0x82,0x42,0x22,0x12,0x84,0x44,0x24,0x14,0x88,0x48,0x28,0x18};
void delay(void)
{
	unsigned char i,j;
	for(i=1;i;i--)for(j=0x88;j;j--)_nop_();
}





unsigned char Key(void)
{
	unsigned char d,i;
	P1=0xf0;
	if(P1!=0xf0)
	{
		delay();
		P1=0xf0;
		if(P1!=0xf0)
		{
			d=P1;
			P1=0x0f;
			d&=P1;
		}
	}
	for(i=0;i<16;i++)
	{
		if(KeyTab[i]==d)
		break;
	}
	
	return i;
}
void main(void)
{
	
	while(1)
	{
		P3=Tab[Key()];
		delay();

	}
}

