//21IC.bbs 上HotPower的部分Demo, C51环境
//和maochao老师的AVR上的SPI DEMO
/*-----------------------------------------------
        nrf905管脚定义
------------------------------------------------*/
sbit    TX_EN    = P2^6;
sbit    TRX_CE    = P2^5;
sbit    PWR_UP    = P2^4;
sbit    MISO    = P2^3;
sbit    MOSI    = P2^2;
sbit    SCK        = P2^1;
sbit    CSN        = P2^0;

sbit    AM        = P3^2;
sbit    DR        = P3^3;
sbit    CD        = P3^5;

sbit    KEY0    = P0^0;
sbit    KEY1    = P0^1;
sbit    KEY2    = P0^2;
sbit    KEY3    = P0^3;
sbit    LED0    = P0^4;
sbit    LED1    = P0^5;
sbit    LED2    = P0^6;
sbit    LED3    = P0^7;
#define Status_AM 0x80
#define Status_DR 0x20

*-------------------------------------------------------------------------------------------
nrf905配置寄存器宏定义

        nrf905配置寄存器(10Byte)
工作频率f=(422.4+CH_NO/10)*(1+HFREQ_PLL)MHz

HotPower@126.com    2004.10.14
-------------------------------------------------------------------------------------------*/
#define RX_ADDRESS           0x00000000               //接收有效地址(本方)
#define TX_ADDRESS           0x02345678               //发送有效地址(对方)

#define CH_NO_FREQ_422_4MHz  0x000                     //工作频率422.4MHz(433MHz频段最低频率)
#define CH_NO_FREQ_422_5MHz  0x001                     //工作频率422.5MHz
#define CH_NO_FREQ_425_0MHz  0x01a                     //工作频率425.0MHz
#define CH_NO_FREQ_427_5MHz  0x033                     //工作频率427.5MHz

#define CH_NO_FREQ_430_0MHz  0x04c                     //工作频率430.0MHz
#define CH_NO_FREQ_433_0MHz  0x06a                     //工作频率433.0MHz(433MHz频段基准频率)
#define CH_NO_FREQ_433_1MHz  0x06b                     //工作频率433.1MHz
#define CH_NO_FREQ_433_2MHz  0x06c                     //工作频率433.2MHz
#define CH_NO_FREQ_434_7MHz  0x07b                     //工作频率434.7MHz
#define CH_NO_FREQ_473_5MHz  0x1ff                     //工作频率473.5MHz(433MHz频段最高频率)

#define CH_NO_FREQ_844_8MHz  0x000                     //工作频率844.8MHz(868MHz频段最低频率)

#define CH_NO_FREQ_862_0MHz  0x056                     //工作频率862.0MHz
#define CH_NO_FREQ_868_0MHz  0x074                     //工作频率868.0MHz(868MHz频段基准频率)
#define CH_NO_FREQ_868_2MHz  0x075                     //工作频率868.2MHz
#define CH_NO_FREQ_868_4MHz  0x076                     //工作频率868.4MHz
#define CH_NO_FREQ_869_8MHz  0x07d                     //工作频率869.8MHz
#define CH_NO_FREQ_895_8MHz  0x0ff                     //工作频率895.8MHz
#define CH_NO_FREQ_896_0MHz  0x100                     //工作频率896.0MHz
#define CH_NO_FREQ_900_0MHz  0x114                     //工作频率900.0MHz
#define CH_NO_FREQ_902_2MHz  0x11f                     //工作频率902.2MHz
#define CH_NO_FREQ_902_4MHz  0x120                     //工作频率902.4MHz
#define CH_NO_FREQ_915_0MHz  0x15f                     //工作频率915.0MHz(915MHz频段基准频率)
#define CH_NO_FREQ_927_8MHz  0x19f                     //工作频率927.8MHz

#define CH_NO_FREQ_947_0MHz  0x1ff                     //工作频率947.0MHz(915MHz频段最高频率)

#define CH_NO_FREQ           CH_NO_FREQ_430_0MHz       //工作频率433.0MHz


#define CH_NO_BYTE           CH_NO_FREQ & 0xff         //工作频率低8位       Byte0       01101100

#define AUTO_RETRAN          0x20                      //重发数据包          Byte1.5     0
#define RX_RED_PWR           0x10                      //接收低功耗模式      Byte1.4     0
#define PA_PWR__10dBm        0x00                      //输出功率-10dBm      Byte1.3~2   00
#define PA_PWR_2dBm          0x04                      //输出功率+2dBm       Byte1.3~2
#define PA_PWR_6dBm          0x08                      //输出功率+6dBm       Byte1.3~2
#define PA_PWR_10dBm         0x0c                      //输出功率+10dBm      Byte1.3~2   
#define HFREQ_PLL_433MHz     0x00                      //工作在433MHz频段    Byte1.1     0
#define HFREQ_PLL_868MHz     0x02                      //工作在868MHz频段    Byte1.1
#define HFREQ_PLL_915MHz     0x02                      //工作在915MHz频段    Byte1.1
#define CH_NO_BIT8           CH_NO_FREQ >> 8           //工作频率第9位       Byte1.0     0

#define TX_AFW_1BYTE         1 * 16                    //发送地址宽度1字节   Byte2.7~4
#define TX_AFW_2BYTE         2 * 16                    //发送地址宽度2字节   Byte2.7~4
#define TX_AFW_3BYTE         3 * 16                    //发送地址宽度3字节   Byte2.7~4
#define TX_AFW_4BYTE         4 * 16                    //发送地址宽度4字节   Byte2.7~4   100
#define RX_AFW_1BYTE         1                         //接收地址宽度1字节   Byte2.3~0
#define RX_AFW_2BYTE         2                         //接收地址宽度2字节   Byte2.3~0
#define RX_AFW_3BYTE         3                         //接收地址宽度3字节   Byte2.3~0
#define RX_AFW_4BYTE         4                         //接收地址宽度4字节   Byte2.3~0   100

#define RX_PW_1BYTE          1                         //接收数据宽度1字节   Byte3.5~0
#define RX_PW_32BYTE         32                        //接收数据宽度32字节  Byte3.5~0   00100000
#define TX_PW_1BYTE          1                         //发送数据宽度1字节   Byte4.5~0 
#define TX_PW_32BYTE         32                        //发送数据宽度32字节  Byte4.5~0   00100000
#define RX_ADDRESS_0         RX_ADDRESS >> 24          //接收有效地址第1字节 Byte5       11100111
#define RX_ADDRESS_1         (RX_ADDRESS >> 16) & 0xff //接收有效地址第2字节 Byte6       11100111 
#define RX_ADDRESS_2         (RX_ADDRESS >> 8) & 0xff  //接收有效地址第3字节 Byte7       11100111
#define RX_ADDRESS_3         RX_ADDRESS & 0xff         //接收有效地址第4字节 Byte8       11100111
       
#define CRC_MODE_16BIT       0x80                      //CRC16模式           Byte9.7     1
#define CRC_MODE_8BIT        0x00                      //CRC8模式            Byte9.7     
#define CRC_EN               0x40                      //CRC使能             Byte9.6     1
#define CRC16_EN             0xc0                      //CRC16模式使能       Byte9.7~6   11
#define CRC8_EN              0x40                      //CRC8模式使能        Byte9.7~6
#define XOF_20MHz            0x20                      //晶体振荡器频率20MHz Byte9.5~3
#define XOF_16MHz            0x18                      //晶体振荡器频率16MHz Byte9.5~3   100
#define XOF_12MHz            0x10                      //晶体振荡器频率12MHz Byte9.5~3
#define XOF_8MHz             0x08                      //晶体振荡器频率8MHz  Byte9.5~3
#define XOF_4MHz             0x00                      //晶体振荡器频率4MHz  Byte9.5~3
#define UP_CLK_EN            0x40                      //输出时钟使能        Byte9.2     1
#define UP_CLK_FREQ_500kHz   0x03                      //输出时钟频率500kHz  Byte9.1~0   11
#define UP_CLK_FREQ_1MHz     0x02                      //输出时钟频率1MHz    Byte9.1~0
#define UP_CLK_FREQ_2MHz     0x01                      //输出时钟频率2MHz    Byte9.1~0
#define UP_CLK_FREQ_4MHz     0x00                      //输出时钟频率4MHz    Byte9.1~0

#define UP_CLK_EN_500kHz     0x43                      //输出时钟频率500kHz  Byte9.2~0   111
#define UP_CLK_EN_1MHz       0x42                      //输出时钟频率1MHz    Byte9.2~0
#define UP_CLK_EN_2MHz       0x41                      //输出时钟频率2MHz    Byte9.2~0
#define UP_CLK_EN_4MHz       0x40                      //输出时钟频率4MHz    Byte9.2~0

#define TX_ADDRESS_0         TX_ADDRESS >> 24          //发送有效地址第1字节
#define TX_ADDRESS_1         (TX_ADDRESS >> 16) & 0xff //发送有效地址第2字节
#define TX_ADDRESS_2         (TX_ADDRESS >> 8) & 0xff  //发送有效地址第3字节
#define TX_ADDRESS_3         TX_ADDRESS & 0xff         //发送有效地址第4字节

/*-----------------------------------------------
        nrf905命令控制字
------------------------------------------------*/
#define WC        0x00            // Write configuration register command
#define RC        0x10             // Read  configuration register command
#define WTP        0x20             // Write TX Payload  command
#define RTP        0x21            // Read  TX Payload  command
#define WTA        0x22            // Write TX Address  command
#define RTA        0x23            // Read  TX Address  command
#define RRP        0x24            // Read  RX Payload  command
 


void Config905(void) using 0//配置nRF905
{
  CSN = 0;                        // Spi enable for write a spi command
  SpiReadWrite(WC);                // Write config command
  SpiReadWrite(CH_NO_BYTE);                      //中心频率低8位
  SpiReadWrite(PA_PWR_10dBm | HFREQ_PLL_433MHz); //发射+10dBm,发射频率433MHz,中心频率第9位=0
  SpiReadWrite(TX_AFW_4BYTE | RX_AFW_4BYTE);     //接收地址宽度4字节,发送地址宽度4字节
  SpiReadWrite(RX_PW_32BYTE);                    //接收数据宽度32字节
  SpiReadWrite(TX_PW_32BYTE);                    //发送数据宽度32字节
  SpiReadWrite(RX_ADDRESS_0);                    //接收有效地址第1字节
  SpiReadWrite(RX_ADDRESS_1);                    //接收有效地址第2字节
  SpiReadWrite(RX_ADDRESS_2);                    //接收有效地址第3字节
  SpiReadWrite(RX_ADDRESS_3);                    //接收有效地址第4字节
  SpiReadWrite(CRC16_EN | XOF_16MHz);            //CRC16模式使能,晶体振荡器频率16MHz
  CSN = 1;                        // Disable Spi
}

/*------------------------------------------------
        SPI读写一体化函数SpiReadWrite()
入口参数:
        val  写入命令或数据
出口参数:
        R7   读出数据
------------------------------------------------*/
unsigned char SpiReadWrite(unsigned char val) using 0
{
unsigned char i;
  ACC = val;
  for (i = 8; i > 0; i --)
  {
     CY = MISO;//取数据SO
    _rlca_();//存数据ACC.0读数据ACC.7同时进行
    MOSI = CY;//送数据SI
    SCK = 1;//上升沿打入数据
    _nop_();
    SCK  = 0;//下降沿读入数据(首次为假动作)
  }
  return ACC;
}


//******************************************************
//以下是maochao老师的SPI的Demo

#define SIZE 100     
unsigned char SPI_rx_buff[SIZE];     
unsigned char SPI_tx_buff[SIZE];     
unsigned char rx_wr_index,rx_rd_index,rx_counter,rx_buffer_overflow;     
unsigned char tx_wr_index,tx_rd_index,tx_counter,SPI_ok;     

#pragma interrupt_handler spi_stc_isr:18     
void spi_stc_isr(void)     
{     
  SPI_rx_buff[rx_wr_index] = SPDR;    //从ISP口读出收到的字节   
  SPI_ok = 1;                         // SPI 空闲   
  if (++rx_wr_index == SIZE) rx_wr_index = 0;    //放入接收缓冲区，并调整队列指针     
  if (++rx_counter == SIZE)     
  {     
    rx_counter = 0;     
    rx_buffer_overflow = 1;     
  }     
  if (tx_counter)        //如果发送缓冲区中有待发的数据     
  {     
     --tx_counter;     
     SPDR = SPI_tx_buff[tx_rd_index]; //发送一个字节数据，并调整指针     
     if (++tx_rd_index == SIZE) tx_rd_index = 0;    
     SPI_ok = 0;                      // SPI 发送工作  
  }     
}     

unsigned char getSPIchar(void)     
{     
  unsigned char data;     
  while (rx_counter == 0);     //无接收数据，等待     
  data = SPI_rx_buff[rx_rd_index];    //从接收缓冲区取出一个SPI收到的数据     
  if (++rx_rd_index == SIZE) rx_rd_index = 0;    //调整指针     
  CLI();     
  --rx_counter;     
  SEI();     
  return data;     
}     

void putSPIchar(char c)      
{      
  while (tx_counter == SIZE);//发送缓冲区满，等待      
  CLI();      
  if (tx_counter || SPI_ok==0 )      //发送缓冲区已中有待发数据      
  {                //或SPI正在发送数据时      
    SPI_tx_buffer[tx_wr_index] = c;    //将数据放入发送缓冲区排队      
    if (++tx_wr_index == SIZE) tx_wr_index = 0;    //调整指针      
    ++tx_counter;      
  }      
  else   
  {      
    SPDR = c;        // 发送缓冲区中空且SPI口空闲，直接放入SPDR由SIP口发送      
    SPI_ok = 0;      // SPI 发送工作  
  }   
  SEI();      
}    

void spi_init(void)     
{     
  unsigned chat temp;     
  DDRB |= 0x080;    //MISO=input and MOSI,SCK,SS = output     
  PORTB |= 0x80;    //MISO上拉电阻有效      
  SPCR = 0xD5;    //SPI允许，主机模式，MSB，允许SPI中断，极性方式01，1/16系统时钟速率     
  SPSR = 0x00;     
  temp = SPSR;     
  temp = SPDR;    //清空SPI，和中断标志，使SPI空闲     
  SPI_ok = 1;     // SPI 空闲   
}     

void main(void)     
{     
  unsigned char I;     
  CLI();        //关中断     
  spi_init();    //初始化SPI接口     
  SEI();        //开中断     
  while()     
  {     
    putSPIchat(i);        //发送一个字节     
    i++;     
    getSPIchar();        //接收一个字节（第一个字节为空字节）     
    ………     
  }     
}     

