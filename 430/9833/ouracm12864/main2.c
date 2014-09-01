#include "io430.h"
unsigned char  Chinese_0[10];
//unsigned char  Chinese_1[]={30,31,32};
unsigned char  Chinese_2[]={"���ϵ���˿������"};
unsigned char  Chinese_3[]={"����ɻ���ʼ�ɡ�"};
unsigned char  Address[]=
{
          0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,	  //��һ��
	 0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,	  //�ڶ���	����λ��
	 0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,	  //������
	 0x98,0x99,0x9a,0x9b,0x9c,0x9d,0x9e,0x9f,	  //������
};
/***********���Ŷ���****************/
//RS  :P5.3//RW  :p5.2
//E   :p5.1


void Init_Port()
{
  //�������������ʽ
  P4DIR = 0xff;//���
  P5DIR = 0xff;
  //һ��Io��
  P4SEL = 0;
  P5SEL = 0;
}
/*******��ʱ����********/
void delay(unsigned int i)
{  
   unsigned int k,j;
   for (j=0;j<511;j++)
  {
    for(k=0;k<i;k++)
    {
      ;
    }
  }
}

/***********************д����******************************/
void write_com( unsigned char com_byte )
{
  delay(1);
  P5OUT &= ~(BIT3);//rs
  P5OUT &= ~(BIT2);//rw
  P5OUT |= BIT1;   //e
  P4OUT = com_byte;
  P5OUT &= ~(BIT1);//e
}
/**********************д����*************************************/
void write_data( unsigned char data_byte )
{
  delay(1);
  P5OUT |= BIT3;//rs
  P5OUT &= ~(BIT2);//rw
  P5OUT |= BIT1;   //e
  P4OUT=data_byte;
  P5OUT &= ~(BIT1);//e
}
/*************** д���� ************************/
// �������飬������ʼ��ַ�����֣����ָ���
void write_Chinese(unsigned char *str,unsigned char a,unsigned char b,unsigned char c)
{
  write_com(0x30);
  while(c)
  {
    write_com(Address[a]);
	write_data(str[b]);
	b++;
	write_data(str[b]);
	b++;
	a++;
	c--;
   }
}
void  write_digital(unsigned char *str,unsigned char a,unsigned char b,unsigned char c)
 {
     while(c)
	{ write_com(Address[a]);
       write_data(str[b]);
       b++;
	    write_data(str[b]);
	   b++;
	   a++;
       c--;}
}


void IntToStr(unsigned int t, unsigned char *str) 
{	
  unsigned char a[4]; 
                                 	
        //ȡ������ֵ������         	
	a[0]=(t/1000)%10;                                     	
	a[1]=(t/100)%10;                                      	
	a[2]=(t/10)%10;                                       	
	a[3]=(t/1)%10;                                        	
   int i;                                                    
	for(i=0; i<4; i++)         //ת��ASCII��              	
		a[i]=a[i]+'0';                                    	
/*	for(i=0; a[i]=='0' && i<=3; i++);                     	
	for(j=5-n; j<i; j++)       //���ո�                 	
		{ *str=' ';  str++; }    */                         	
	for(i=0; i<4; i++)                                       	
		{ *str=a[i]; str++; }  //������Ч������           	
	*str='\0'; 
} 
/**********Һ����ʼ��***************/
void Lcd_initial(void)
{
   //delay(1);
   
   
   write_com(0x30);    //����ָ�����
   write_com(0x03);    //AC���㣬���ı�DDRAM������
   write_com(0x0c);    //��ʾ0N �α�0FF �α�λ����OFF
   write_com(0x01);    //����
   //write_com(0x06);	  //д��ʱ�α����ƶ�
   
  //P5OUT &= ~(BIT0);//rs
  //P5OUT &= ~(BIT1);//rw
}




void main()
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  Init_Port();
  
 Lcd_initial();
  
  
  unsigned int count = 0;
 // unsigned int count = 0;
 while(1)
  {
  IntToStr(count++,Chinese_0);
  write_digital(Chinese_0,0,0,2);
 // write_Chinese(Chinese_1,8,0,3);
  write_Chinese(Chinese_2,16,0,8);
  write_Chinese(Chinese_3,24,0,8);

 delay(10);
  }
}