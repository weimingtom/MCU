#ifndef usart_module_h
#define usart_module_h
#include<msp430x15x.h>
/*
以下为430 的底层函数，不要随意改动
但根据实际可以将注释后的语句提取出来
*/
void init_usart(void);
void delay_usart(void);
/*
以下为通用函数，可以按照需求进行修改
可以仿照C++格式（数据流格式）
*/
//输出字符串
void print_str(const unsigned char *d);
//输出十进制整数
void print_int(int a);
//输出十六进制数，便于调试
void print_hex(unsigned char a);
//一些常用函数，可以做成函数库
unsigned char strlen(unsigned char *d);
void reverse(unsigned char * d);//翻转
int char2int(unsigned char c);//字符转整形
void int2char(unsigned char*d,int a);//整形转字符
#endif