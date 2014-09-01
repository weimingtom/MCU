/***********************************************************
*  文件名称：18b20.c
*  功    能：读取18B20的温度
*  时    间：2006.8.1
*  端口使用：PD4（DQ）
************************************************************/
#include <iom8v.h>
#include <macros.h>


unsigned int delaytime;
 


/************************************************************
*   函数名称：void DelayUS(unsigned int time)
*   功    能：软件延时Us
*   入口参数：time 延时时间
*   出口参数：无
************************************************************/
void DelayUS(unsigned int time)
{
    do 
	  time--;
	while(time > 1);  
}
/************************************************************
*   函数名称：void DelayMS(unsigned int time)
*   功    能：软件延时
*   入口参数：time 延时时间 MS
*   出口参数：无
************************************************************/
void DelayMS (unsigned int time)
{
    //TIMSK = 0x01; //timer interrupt sources
    //SEI();   //打开定时器中断
	delaytime = time;
	while(delaytime)
	    ;
}
/***********************************************************
*   函数名称：void DisInit(void)
*   功    能：显示端口初始化
*   入口参数：无
*   出口参数：无
**********************************************************/
void DisInit(void)
{
    DDRB = 0xFF;
	//PORTB= ~DISCODE[0];
	DDRC = 0x0F;
	PORTC= 0x0F;  /* 四个数码管都显示0；*/
}
/***********************************************************
*   函数名称：unsigned char Check18B20(void)
*   功    能：检查18B20是否存在
*   入口参数：无
*   出口参数：检查存在是返回 1 
                不存在是返回 0
**********************************************************/
unsigned char Check18B20(void)
{
    unsigned char signal;
	
	DDRD |= 0x08;
	PORTD&= 0xF7;   //PD3输出低电平 ，复位18B20
	//DelayUS(20);   //延时500US
	delay(450);
	
	PORTD|=0x08;    //PD3输出高
	asm("nop");
	
	DDRD &= 0xF7;   //PD3输入
	//PORTD |= 0x08;
	
	delay(40);   
	//asm("nop");
	
	signal = PIND;  //读取PD3的值,也就是18B20输出的值
	
	signal &= 0x08;
	signal =(signal>>3);
	
	delay(200);
	return signal;
}				
/***********************************************************
*   函数名称：unsigned char Read18B20(void)
*   功    能：从18B20读一个字节的数据
*   入口参数：无
*   出口参数：读出的数据
***********************************************************/
unsigned char Read18B20(void)
{
   	
		
	unsigned int byte=0,i;
	unsigned char data;
    for(i=0;i<8;i++)
	{  
	   	
	    DDRD |= 0x08; 
		PORTD&= 0xF7;   //总线为低电平
		asm("nop");
		asm("nop");
		asm("nop");		
		
		
		DDRD &= 0xf7;   //PD3端口输入
		//PORTD|= 0X08;
		asm("nop");
		asm("nop");
		
         byte>>=1;
		 
		if((PIND & 0x08))
		   {    byte |= 0x80;  }  
				
		delay(50);	  // delay 55us
	}
	
	return byte;
}
/***********************************************************
*   函数名称：void Write18B20(unsigned char cmd)
*   功    能：向18B20写入一个字节的数据
*   入口参数：要写入的数据或者是字节
*   出口参数：无
***********************************************************/
void Write18B20(unsigned char cmd)
{
    unsigned char i,j;
	DDRD |= 0x08;
	
	for(i=0;i<8;i++)
	{
	   j = cmd & 0x01;
	   if(j == 0x01)
	   {
	       PORTD &= 0xF7;  // PD3输出低电平
		   delay(5);
		   PORTD |= 0x08;
		   delay(25);   //写入一位1
	   } 
	   else
	   {
	       PORTD &= 0xF7;  // PD3输出低电平
		   delay(25);
		   PORTD |= 0x08;
		   delay(5);    //写入一位0
	       
	   }
	   cmd = cmd>>1; 
	}
}
/************************** main()******************************/
unsigned int GetTemp(void)
{
    unsigned int i;
	unsigned char ds18b20[2];
	unsigned int ds18b20_temp=0;
	
    
	
	while(0x01 == Check18B20()) //检查18b20是否存在
	    ;
    Write18B20(0xcc);		
	Write18B20(0x44);           //启动转换
	
     for(i=0;i<200;i++)   //每次转换需要延时200ms以上 
      delay(1000);   
	  
	while(0x01 == Check18B20()) //检查18b20是否存在
	    ;
		
	Write18B20(0xcc);
    Write18B20(0xbe);  //读取温度值
	
	for(i=0;i<2;i++)
	{
	    ds18b20[i] = Read18B20();
	}
	ds18b20_temp = (ds18b20[1]<<8);
	ds18b20_temp = ds18b20_temp + ds18b20[0];
	
	return  ds18b20_temp ;
	
}

