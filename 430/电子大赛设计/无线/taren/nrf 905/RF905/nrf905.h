/*-------------------------------------------------------------------------------------------
nrf905配置寄存器宏定义 author:HotPower
        nrf905配置寄存器(10Byte)
工作频率f=(422.4+CH_NO/10)*(1+HFREQ_PLL)MHz
-------------------------------------------------------------------------------------------*/
#define RX_ADDRESS           0x12345678               //接收有效地址(本方)
#define TX_ADDRESS           0x12345678               //发送有效地址(对方)

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
        nrf905命令控制字 author:HotPower
------------------------------------------------*/
#define WC        0x00            // Write configuration register command
#define RC        0x10            // Read  configuration register command
#define WTP       0x20            // Write TX Payload  command
#define RTP       0x21            // Read  TX Payload  command
#define WTA       0x22            // Write TX Address  command
#define RTA       0x23            // Read  TX Address  command
#define RRP       0x24            // Read  RX Payload  command

///////////////////////////////////////////////////////////////
///
///////////////////////////////////////////////////////////
#define SET(a,b) a|=(1<<b) 
#define CLR(a,b) a&=~(1<<b)
#define CPL(a,b) a^=(1<<b)
#define CHK(a,b) (a&(1<<b))

#define SBUF UDR
#define uint unsigned int
#define uchar char
#define bit char


//PORTB
#define PWRUP   0
#define TRXCE   1
#define CSN	    2
#define MOSI    3
#define MISO    4
#define SCK	    5
#define TX_EN   6


//PORTC
#define CD     0
#define AM	   1
#define DR	   2


