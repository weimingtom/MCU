///****************************************************************//
//液晶显示模块，采用ATmega8单片机和OCM4*8液晶，串行方式
//采用PORTD的高三位
//pd5---lcd_cs
//pd7---lcd_sdat
//pd6---lcd_sclk
//周金广2006年7月20日整理
///****************************************************************//
///////////////////////////////////////////////////
//lcd初始化程序
//////////////////////////////////////////////////
#include <stdio.h>
#include <iom8v.h>
#include <macros.h>


///////////////////////////////////////////////
//
//////////////////////////////////////////////
void delay(unsigned int times)
{unsigned int i;
for(i=0;i<times;i++)
;
}

void lcd_send_byte(char data)
{unsigned int i,data1;
for(i=0;i<8;i++)
{data1=data&0x80;       //test data bit7 为零则放送零，为一则放送一
 if(data1!=0)
 { PORTD|=BIT(PD7);
     delay(20);
  }
 else {PORTD&=~BIT(PD7);          ///当单片机速度太快时，加延时
     delay(20); }
	   
//PORTD=PORTD&data;
PORTD|=BIT(PD6);     // set sclk high

PORTD&=~BIT(PD6);    // set sclk low
data=data<<1;
}
}
/////////////////////////////////////////////////////////////
////
////////////////////////////////////////////////////////////
void lcd_write_data(char data)
{char data1=0xfa,data2,data3;
    
	PORTD|=BIT(PD5);      //set cs high
	
   data2=data&0xf0;
   data3=data&0x0f;
   data3=data3<<4;
   
   lcd_send_byte(data1);
   lcd_send_byte(data2);
   lcd_send_byte(data3);
   
   PORTD&=~BIT(PD5);       //set cs low

}
/////////////////////////////////////////////////////////////
////
////////////////////////////////////////////////////////////
void lcd_write_comm(char data)
//int data;
{char data1=0xf8,data2,data3;
   PORTD|=BIT(PD5);     //set cs high
   
   data2=data&0xf0;
   data3=data&0x0f;
   data3=data3<<4;
   
   lcd_send_byte(data1);
   lcd_send_byte(data2);
   lcd_send_byte(data3);
   
   PORTD&=~BIT(PD5);     //set cs low

}
void lcd_initial(void)
{
    
   lcd_write_comm(0x30);			//基本指令集
   lcd_write_comm(0x01);			//清除显示屏幕，把DDRAM位址计数器调整为"00H"
   lcd_write_comm(0x03);			//把DDRAM位址计数器调整为"00H"，游标回原点，该功能不影响显示DDRAM
   lcd_write_comm(0x06);			//光标右移
   lcd_write_comm(0x0c);			//显示屏打开
}
/////////////////////////////////////////////////////
////
/////////////////////////////////////////////////////

void screen(data)
char data[65];

 {         
	    unsigned int i,j;
		lcd_write_comm(0x08);
		for (i=0;i<64;i++)
			{lcd_write_data(data[i]);
			if (i==15)
			lcd_write_comm(0x90);      //设定DDRAM第二行，第一列
			if (i==31)
			lcd_write_comm(0x88);     //设定DDRAM第三行，第一列
			if (i==47)
			lcd_write_comm(0x98);     //设定DDRAM第四行，第一列
			if (i==63)
			lcd_write_comm(0x80);     //设定DDRAM第一行，第一列
			}
		lcd_write_comm(0x0c);
}	
//////////////////////////////////
void fanxian(unsigned char hang)   //  0x80-1     0x90-2   0x88-3    0x98-4
	{	
	    unsigned char x,y,i,j;
	     lcd_write_comm(0x34);        //开启绘图功能显示 
		 lcd_write_comm(0x34);
	    
	    y=0x80;
        x=0x80;
		lcd_write_data(0x00);
		lcd_write_comm(x);             //设置x 坐标 
		lcd_write_comm(y); 
		for (j=0;j<32;j++)
		  {for (i=0;i<16;i++)
			lcd_write_data(0x00);
		
			
			lcd_write_comm(++x);
			lcd_write_comm(y);
			
		  }
		
        y=0x88; 
		x=0x80;
		lcd_write_data(0x00);
     	lcd_write_comm(x);
		lcd_write_comm(y);
		for (j=32;j<64;j++)
		  {for (i=0;i<16;i++)
			lcd_write_data(0x00);
			lcd_write_comm(++x);
			lcd_write_comm(y); 	 
			
		  
		  }
		    
		  lcd_write_comm(0x36);        //开启绘图功能显示 	
		    	
		if(hang==1)
    	{
    	y=0x80; 
		x=0x80;}
		else if(hang==2)
		{
		y=0x80;
		x=0x90;}
		else if(hang==3)
		{y=0x88;
		 x=0x80;}
		else
		{y=0x88;
		x=0x90;}
		
		lcd_write_comm(x);             //设置x 坐标 
		lcd_write_comm(y);             //设置y 坐标

		
		for (j=0;j<16;j++)
		  {for (i=0;i<16;i++)
			lcd_write_data(0xff);
	
			lcd_write_comm(++x);
			lcd_write_comm(y);
			
		  }
		// lcd_write_comm(0x36);        //开启绘图功能显示   
    } 
//////////////////////////////////////////////////////
///
//////////////////////////////////////////////////
/*
void fanbai(char data)
{	lcd_write_comm(0x0034);       //关闭绘图显示功能
		
		y=data;
        x=0x0080;
		lcd_write_comm(x);             //设置x 坐标 
		lcd_write_comm(y); 
		for (j=0;j<32;j++)
		  {for (i=0;i<16;i++)
			lcd_write_data(0x0000);
		
			
			lcd_write_comm(++x);
			lcd_write_comm(y);
			*P_Watchdog_Clear=0x0001;
		  }
		y=0x0088; 
		x=0x0080;
	    		  
	lcd_write_comm(0x0036);        //开启绘图功能显示 
}


*/

/*********************************************************************************
/**液晶部分小功能的实现
//*********************************************************************************
   //  打开游标,使游标位置的字忽闪忽闪的.若是英文,则忽闪两字符.

lcd_lcd_write_comm(0x30);
lcd_lcd_write_comm(0x  );   //此处是设定的游标位置
lcd_lcd_write_comm(0x0d);     
*/
/***2   打开游标,使游标位置的字下面带一横线.若是英文,则横线跨两字符.
lcd_lcd_write_comm(0x30);
lcd_lcd_write_comm(0x  );   //此处是设定的游标位置
lcd_lcd_write_comm(0x0e);
*/
/***3   打开游标,使游标位置的字下面带一横线,且字正常与反白显示相间.若是英文,则横跨两字符.
lcd_lcd_write_comm(0x30);
lcd_lcd_write_comm(0x  );   //此处是设定的游标位置
lcd_lcd_write_comm(0x0f);
*/


/*************反显程序
lcd_lcd_write_comm(0x34);    //扩充指令集动作
lcd_lcd_write_comm(0x04);            //1.3行呈现反显
lcd_lcd_write_comm(0x05);          //2,4行有变化 .根据实际情况选择.只可开两行,全开没变化*/