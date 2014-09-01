/*===========================================================================
功能介绍：
=============================================================================
1 时间显示：        显示板上的DS1-DS6显示小时、分钟、秒
2 温度显示：        显示板上的DS7-DS8显示温度
3 上下午指示：      显示板上LED1和LED2
4 半秒提示：        显示板上的DS2和DS4的小数点闪烁
5 调试功能：        操作显示板上的K1-K3键可调整时间，步骤如下：
                     a)按下K1键，开始调小时，DS1闪烁，再按K1键DS2闪烁
                     b)按下K2键，小时对应位加，按下K3键，小时对应位减
                     c)小时调整后再按下K1键，开始调分钟，DS1闪烁，再按K1键DS2闪烁
                     d)按下K2键，分钟对应位加，按下K3键，分钟对应位减
                     e)调整好分钟后，再按下K1键，调时结束
6语音报时功能：     按下显示板的K2键，可直接播报当前时间，语音报时数码管停止显示  
7温度光度播报功能：按下显示板的K3键，可直接播放当前温度值和当前光线情况
                   （分为光线太暗、光线柔和、光线太强）语音播报时数码管停止显示
8闹钟功能：        此闹钟增加了“懒人模式”，即闹钟时间到后，扬声器会发出“”声音，
                   数码管停止显示；用户按K2键，语音报时，并取消闹钟警告，数码管恢复正常
                   操作显示板上的K2-K4键可调整闹钟，步骤如下：
                    a)按下K4键，开始调小时，DS1闪烁，再按K4键DS2闪烁
                    b)按下K2键，小时对应位加，按下K3键，小时对应位减
                    c)小时调整后再按下K4键，开始调分钟，DS1闪烁，再按K4键DS2闪烁
                    d)按下K2键，分钟对应位加，按下K3键，分钟对应位减
                    e)调整好分钟后，再按下K4键，调时结束
===============================================================================
连接介绍：
===============================================================================

       1 数码管显示：小时、分钟、秒和温度共用8个数码管（DS1-DS8）。其中，段采
         用I/O直接扩展模式，共需8根I/O线，使用单片机SPCE061A的IOA[8：15];位选
         用8根I/O线，使用单片机SPCE061A的IOB[8：15]（动态显示，一个时刻只有一
         个数码管亮）。
       2 上下午指示：使用了两个发光二极管，需用两根IO线IOA[6：7]。
       3 按键：扩展了四个按键，需用4根IO线IOA[0：3]。
       4 测量温度：需用一个AD转换通道，占用1根IO线IOA4。
       5 测量光度：需用一个AD转换通道，占用1根IO线IOA5
=================================================================================
=================================================================================
Design by WangJiaYin

编写时间2010.12.17-2010.12.19
=================================================================================*/
#include "spce061a.h"
#include "s480.h"
#define uchar unsigned char
#define uint  unsigned int
uchar halfpoint=1;
uchar t=20;
int hour=21;
int minute=59;
int second=55;
int Alam_hour=7;
int Alam_minute=0;
int Alam_second=0;
uchar APM=0;
int L_flag=0;
int stop=0;
int dong=0;
int out=1;
int xue=0;
volatile	 int key1=0;
volatile	 int key2=0;
volatile	 int key3=0;
volatile	 int key4=0;
#include "bobao.h"
#include "keyscan.h"
#include "display.h"
#include "interrupt.h"
#include "interrupt1.h"
#include "AD.h"
#include "clock.h"
int main()
{
	*P_SystemClock=0x98;
	IO_Init();//
	*P_INT_Ctrl=0x14;//打开对应中断
	__asm("IRQ on")	;//打开中断
   while(1)
   {
 	 *P_SystemClock=0x98;  
 	  *P_INT_Ctrl=0x14;	
 	  display();
 	 *P_Watchdog_Clear=1;
   }
}




