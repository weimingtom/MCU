#include <stdio.h>
#include <iom8v.h>
#include <macros.h>
#include "nrf905.h"

unsigned char hz0[65]={"智能家电控制系统                输入                            "};
unsigned char KeyV,KeyFlag;
extern uchar TxBuf[],RxBuf[];
unsigned char  value_T,set_data;
unsigned char times=0;
//unsigned char KeyD[5];
//unsigned char KeyI=0;

void spi_init(void)
{
 SPCR = 0x51;    //setup SPI
 //SPSR = 0x00; //setup SPI
}

void  print_temp(unsigned char address)
{

   float  wendu;
   unsigned long int temp;
   wendu=GetTemp()*0.0625;
   temp=wendu*10000;

 lcd_write_comm(0x30);
 lcd_write_comm(address);	
 lcd_write_data((temp/1000000)%10+0x30);	
 lcd_write_data((temp/100000)%10+0x30);
 lcd_write_data((temp/10000)%10+0x30);
 lcd_write_data('.');    
 lcd_write_data((temp/1000)%10+0x30);
 lcd_write_data((temp/100)%10+0x30);
 lcd_write_data((temp/10)%10+0x30);    
 lcd_write_data(temp%10+0x30);
}

void main(void)
{ unsigned char KeyValue,kk,detect;
   CLI();                     //disable all interrupts
  
  spi_init();
 
     
  DDRB=0x6f;                //0110 1111b
  PORTB=0xd4;               //1101 0100b
  //SET(PORTB,CSN);
  
  DDRC=0x00;
  PORTC=0x00;
  
  DDRD=0xf8;               //1111 1000b
  PORTD=0xfc;              //1111 1100b
  
  timer0_init();
  
  MCUCR = 0x02;
  GICR  = 0x40;
  TIMSK = 0x01; //timer interrupt sources
 
  
 // DDRD=0xff;
  // PORTD=0xf8;
  
 // MCUCR = 0x02;
 // GICR  = 0x40;
  //TIMSK = 0x00; //timer interrupt sources
  
 // nrf905_Init();
  SEI(); //re-enable interrupts
  screen(hz0);
   
   while(1)
  {
   
  //  nrf905_RxOn(); 
   // detect=RfRecvProc();
	
   // lcd_write_comm(0x9f);
   // lcd_write_data(detect);
    displayint(0x8a,value_T);
	displayint(0x8c,times);
	print_temp(0x90);
	//if(detect=='Y')
	//{detect=='N';	}
	
    if(KeyFlag==1)
	{
	 KeyValue=KeyV;
	 KeyFlag=0;
	}
   switch(KeyValue)        //此时相当按一次键处理两次程序
   {
    case 112:kk=0;displayint(0x98,kk);
	              nrf905_SpiTest();
	              display_int(RxBuf,0x80,10);
	              KeyValue=0;   break;
    case 105:kk=1;displayint(0x98,kk);KeyValue=0;break;
	case 114:kk=2;displayint(0x98,kk);KeyValue=0;break;
	case 122:kk=3;displayint(0x98,kk);print_temp(0x9a);KeyValue=0;break;
	case 107:kk=4;displayint(0x98,kk);//RfSendProc();1122445645633312345
	                                  KeyValue=0;break;
	case 115:kk=5;displayint(0x98,kk);nrf905_SendData();KeyValue=0;break;
	case 116:kk=6;displayint(0x98,kk);nrf905_ReadData();KeyValue=0;break;
	case 108:kk=7;displayint(0x98,kk);display_int(RxBuf,0x80,12);KeyValue=0;break;
	case 117:kk=8;displayint(0x98,kk);display_int(RxBuf+12,0x80,12);KeyValue=0;break;
	case 125:kk=9;displayint(0x98,kk);display_int(RxBuf+24,0x80,8);KeyValue=0;break;
	case 90: kk='k'; KeyValue=0;
	                 //display_int(RxBuf,0x80,12);
	                 lcd_write_comm(0x98);
	                 lcd_write_data('k');
	               break;
	default :break;
   }  
  
  
  }
}
  
  
#pragma interrupt_handler int0_isr:2
void int0_isr(void)
{
 static unsigned char IntNum;
 times++;
   if((IntNum>0)&&(IntNum<9))
      {
       KeyV>>=1;
       if(PINB&0x80)
       KeyV|=0x80;     
       }
	   
  IntNum++;
  // while (!Key_CLK); //等待PS/2CLK拉高            use??????
 if(IntNum>10)
    { 
      IntNum=0;
      KeyFlag=1;
    }
}