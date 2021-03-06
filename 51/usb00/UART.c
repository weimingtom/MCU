#include "at89x52.H"

#include "UART.h"
#include "my_type.h"
#include "config.h"


/********************************************************************
函数功能：串口初始化。
入口参数：无。
返    回：无。
备    注：无。
********************************************************************/
void init_uart(void)
{
	EA=0;
	TMOD&=0x0F;
	TMOD|=0x20;    //定时器1工作在模式2
	SCON=0x50;     //串口工作在模式1
	TCON=0x05;
	TH1=256-Fclk/(BitRate*12*16);
	TL1=256-Fclk/(BitRate*12*16); 
	PCON=0x80;    //串口波特率加倍
	ES=1;         //串行中断允许
	TR1=1;        //启动定时器1
	REN=1;        //允许接收 
	EA=1;         //允许中断
}
////////////////////////End of function//////////////////////////////

  
/********************************************************************
函数功能：串口中断处理。
入口参数：无。
返    回：无。
备    注：无。
********************************************************************/
void UartISR(void) interrupt 4
{
	if(RI)    //收到数据
	{
		RI=0;   //清中断请求
		SBUF=SBUF;
	}
	else      //发送完一字节数据
	{
		TI=0;
	}
}
////////////////////////End of function//////////////////////////////

/********************************************************************
函数功能：往串口发送一字节数据。
入口参数：d: 要发送的字节数据。
返    回：无。
备    注：无。
********************************************************************/
void uart_putchar(uint8 d)
{
	ES=0;
	SBUF=d;
	while(TI!=1);
	TI=0;
	ES=1;
}
////////////////////////End of function//////////////////////////////

/********************************************************************
函数功能：发送一个字符串。
入口参数：pd：要发送的字符串指针。
返    回：无。
备    注：无。
********************************************************************/
void print_str(uint8 * pd)
{
	while((*pd)!='\0')
	{
		uart_putchar(*pd);
		pd++;
	}
}
////////////////////////End of function//////////////////////////////

/********************************************************************
函数功能：将整数转按十进制字符串发送。
入口参数：x：待显示的整数。
返    回：无。
备    注：无。
********************************************************************/
void print_longint(uint32 x)
{
	int8 i;
	uint8 display_buffer[10];
	
	for(i=9;i>=0;i--)
	{
		display_buffer[i]='0'+x%10;
		x/=10;
	}
	for(i=0;i<9;i++)
	{
		if(display_buffer[i]!='0')
		{
			break;
		}
	}
	for(;i<10;i++)
	{
		uart_putchar(display_buffer[i]);
	}
}
////////////////////////End of function//////////////////////////////

code uint8 HexTable[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
/********************************************************************
函数功能：将短整数按十六进制发送。
入口参数：待发送的整数。
返    回：无。
备    注：无。
********************************************************************/
void print_16hex(uint16 x)
{
	uint8 i;
	uint8 display_buffer[7];
	display_buffer[6]=0;
	display_buffer[0]='0';
	display_buffer[1]='x';
	for(i=5;i>=2;i--)
	{
		display_buffer[i]=HexTable[(x&0xf)];
		x>>=4;
	}
	print_str(display_buffer);
}
////////////////////////End of function//////////////////////////////

/********************************************************************
函数功能：将整数按十六进制发送。
入口参数：待发送的整数。
返    回：无。
备    注：无。
********************************************************************/

void print_32hex(uint32 x)  //
{
	uint8 i;
	uint8 display_buffer[11];
	display_buffer[10]=0;
	display_buffer[0]='0';
	display_buffer[1]='x';
	for(i=9;i>=2;i--)
	{
		display_buffer[i]=HexTable[(x&0xf)];
		x>>=4;
	}
print_str(display_buffer);
}

////////////////////////End of function//////////////////////////////


/********************************************************************
函数功能：发送一个byte的数据。
入口参数：待发送的数据。
返    回：无。
备    注：无。
********************************************************************/

////////////////////////End of function//////////////////////////////

/********************************************************************
函数功能：以HEX格式发送一个byte的数据。
入口参数：待发送的数据
返    回：无。
备    注：无。
********************************************************************/
void print_hex(uint8 x)
{
	uart_putchar('0');
	uart_putchar('x');
	uart_putchar(HexTable[x>>4]);
	uart_putchar(HexTable[x&0xf]);
	uart_putchar(' ');
}
////////////////////////End of function//////////////////////////////
