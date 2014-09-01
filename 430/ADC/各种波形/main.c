#include "msp430x15x.h"
  const unsigned int table[]=
  {
2047,2060,2072,2085,2097,2110,2122,2135,2148,2160,2173,2185,2198,2210,2223,2235,
2248,2260,2273,2285,2298,2310,2323,2335,2348,2360,2372,2385,2397,2410,2422,2434,
2447,2459,2471,2484,2496,2508,2520,2533,2545,2557,2569,2581,2593,2606,2618,2630,
2642,2654,2666,2678,2690,2702,2714,2725,2737,2749,2761,2773,2784,2796,2808,2819,
2831,2843,2854,2866,2877,2889,2900,2912,2923,2934,2946,2957,2968,2979,2991,3002,
3013,3024,3035,3046,3057,3068,3079,3089,3100,3111,3122,3132,3143,3154,3164,3175,
3185,3196,3206,3216,3227,3237,3247,3257,3267,3277,3288,3297,3307,3317,3327,3337,
3347,3356,3366,3376,3385,3395,3404,3413,3423,3432,3441,3450,3460,3469,3478,3487,
3496,3504,3513,3522,3531,3539,3548,3556,3565,3573,3582,3590,3598,3606,3614,3622,
3630,3638,3646,3654,3662,3670,3677,3685,3692,3700,3707,3714,3722,3729,3736,3743,
3750,3757,3764,3771,3777,3784,3791,3797,3804,3810,3817,3823,3829,3835,3841,3847,
3853,3859,3865,3871,3876,3882,3888,3893,3898,3904,3909,3914,3919,3924,3929,3934,
3939,3944,3949,3953,3958,3962,3967,3971,3975,3979,3983,3988,3991,3995,3999,4003,
4007,4010,4014,4017,4021,4024,4027,4030,4033,4036,4039,4042,4045,4048,4050,4053,
4055,4058,4060,4062,4064,4066,4068,4070,4072,4074,4076,4077,4079,4080,4082,4083,
4084,4086,4087,4088,4089,4090,4090,4091,4092,4092,4093,4093,4093,4094,4094,4094,
4094,4094,4094,4094,4093,4093,4092,4092,4091,4091,4090,4089,4088,4087,4086,4085,
4084,4083,4081,4080,4078,4077,4075,4073,4071,4069,4067,4065,4063,4061,4059,4056,     
4054,4051,4049,4046,4043,4041,4038,4035,4032,4029,4025,4022,
        4019     ,   4015    ,    4012   ,     4008    ,    4005,
        4001   ,     3997   ,     3993   ,     3989    ,    3985,
        3981  ,      3977    ,    3973    ,    3969   ,     3964,
        3960   ,     3955    ,    3951     ,   3946     ,   3941,
        3937    ,    3932   ,     3927   ,     3922     ,   3917,
        3912    ,    3906    ,    3901  ,      3896     ,   3890,
        3885   ,     3879    ,    3874    ,    3868     ,   3862,
        3856   ,     3850      ,  3844    ,    3838     ,   3832,
        3826    ,    3820    ,    3813     ,   3807    ,    3801,
        3794   ,     3787    ,    3781   ,     3774    ,    3767,
        3760   ,     3754      ,  3747     ,   3740    ,    3732,
        3725    ,    3718    ,   3711    ,    3703,        3696,
        3689   ,     3681     ,   3673 ,       3666     ,   3658,
        3650     ,   3642    ,   3634    ,    3626 ,       3618,
        3610      ,  3602,        3594 ,       3586 ,       3577,
        3569     ,   3561  ,      3552     ,   3544  ,      3535,
        3526    ,    3518     ,   3509   ,     3500    ,    3491,
        3482    ,    3473    ,    3464      , 3455   ,     3446,
        3437    ,    3427       , 3418    ,    3409   ,     3399,
        3390     ,   3380     ,   3371      ,  3361,        3352,
        3342   ,     3332 ,       3322      ,  3312 ,      3302,
        3293    ,    3283  ,      3272        ,3262 ,       3252,
        3242    ,    3232   ,     3222   ,     3211  ,      3201,
        3190  ,      3180   ,     3170   ,     3159    ,    3148,
        3138   ,     3127    ,    3116,        3106   ,     3095,
        3084  ,      3073     ,   3062    ,    3051  ,      3040,
        3029    ,    3018     ,   3007    ,    2996  ,      2985,
        2974  ,      2963  ,      2951      ,  2940       , 2929,
        2917    ,    2906  ,     2894   ,     2883   ,     2872,
        2860    ,    2848     ,   2837    ,    2825  ,     2814,
        2802   ,     2790  ,      2779    ,    2767 ,       2755,
        2743     ,   2731      ,  2719   ,     2708 ,       2696,
        2684    ,    2672     ,   2660     ,   2648   ,     2636,
        2624    ,    2612 ,       2600      ,  2587    ,    2575,
        2563    ,    2551 ,       2539    ,    2527  ,      2514,
        2502     ,   2490    ,    2478     ,   2465   ,     2453,       
        2441    ,    2428    ,    2416       , 2403     ,   2391,
        2379    ,    2366      ,  2354      ,  2341   ,     2329,
        2317   ,     2304    ,    2292    ,    2279 ,       2267,
        2254   ,     2242    ,    2229   ,     2217 ,       2204,
        2191        ,2179     ,   2166     ,   2154    ,    2141,
        2129    ,    2116   ,     2104    ,    2091  ,      2078,
        2066      ,  2053    ,    2041     ,   2028     ,   2016,
        2003    ,    1990    ,    1978   ,     1965 ,       1953,
        1940      ,  1928 ,       1915    ,    1903  ,      1890,
        1877   ,     1865    ,    1852    ,   1840     ,   1827,
        1815   ,     1802    ,    1790   ,     1777    ,    1765,
        1753   ,     1740  ,      1728      ,  1715    ,    1703,
        1691   ,     1678     ,   1666    ,    1653     ,   1641,
        1629   ,     1616     ,   1604 ,       1592    ,    1580,
        1567    ,    1555  ,      1543     ,   1531   ,     1519,
        1507   ,     1494   ,     1482   ,     1470       , 1458,
        1446   ,     1434  ,     1422    ,    1410    ,    1398,
        1386     ,   1375     ,   1363       , 1351   ,     1339,
        1327     ,   1315   ,     1304    ,    1292     ,   1280,
        1269  ,      1257  ,      1246     ,   1234  ,      1222,
        1211    ,    1200   ,     1188     ,   1177 ,       1165,
        1154   ,     1143    ,    1131,        1120    ,    1109,
        1098  ,      1087    ,    1076    ,    1065  ,      1054,
        1043   ,     1032     ,   1021   ,     1010     ,    999,
         988     ,    978  ,       967     ,    956      ,   946,
         935      ,   924     ,    914      ,   904    ,     893,
         883   ,      872      ,   862        , 852       ,  842,
         832       ,  822  ,       811   ,      801        , 792, 
         782   ,      772    ,     762   ,      752     ,    742,
         733    ,    723   ,      714   ,      704   ,      695,
         685   ,      676,         667     ,    657  ,       648,
         639   ,     630       ,  621 ,       612 ,        603,
         594    ,     585       ,  576     ,    568    ,     559,
         550    ,     542       ,  533 ,        525  ,       517,
         508    ,     500     ,   492      ,   484   ,      476,
         468   ,      460      ,   452      ,   444     ,    436,
         428    ,     421       ,  413  ,       405     ,    398,
         391     ,    383      ,   376   ,      369   ,      362,
         354    ,     347   ,      340       ,  334   ,      327,
         320    ,    313    ,     307     ,    300     ,    293,
         287    ,     281   ,      274    ,     268     ,    262,
         256   ,      250    ,     244  ,       238        , 232,
         226     ,    220    ,   215       ,  209     ,    204,
         198    ,     193    ,     188    ,     182     ,    177,
         172   ,      167         ,162  ,       157      ,   153,       
         148 ,        143      ,   139     ,    134      ,   130,
         125  ,       121    ,     117     ,    113   ,      109,
         105      ,   101        ,  97       ,   93      ,    89,
          86      ,    82       ,   79     ,     75       ,   72,
          69     ,     65     ,     62    ,      59      ,    56,
          53    ,      51     ,     48    ,      45       ,   43,
          40     ,    38     ,     35    ,      33     ,     31,
          29      ,    27      ,    25  ,        23     ,     21,
          19    ,      17         , 16       ,   14    ,      13,
          11     ,     10      ,     9   ,       8     ,      7,
           6     ,      5     ,      4   ,        3     ,      3,
           2    ,       2       ,    1      ,     1      ,     0,
           0      ,     0     ,      0   ,        0    ,       0,
           0      ,     1      ,     1       ,    1     ,      2,
           2      ,     3      ,     4     ,      4     ,     5,
           6     ,      7      ,     8         , 10      ,   11,
          12     ,     14  ,        15     ,     17      ,   18,
          20       ,   22   ,       24       ,   26      ,    28,
          30     ,     32       ,   34     ,     36     ,     39,
          41     ,     44     ,     46        ,  49    ,      52,
          55     ,     58    ,      61         , 64      ,    67,
          70      ,    73    ,      77     ,     80     ,     84,
          87      ,    91       ,   95         , 99       ,  103,
         106    ,     111    ,     115    ,     119      ,   123,
         127     ,    132     ,    136       ,  141        , 145,
         150       ,  155     ,    160     ,    165      ,   170,
         175    ,     180  ,       185      ,   190      ,   196,
         201      ,   206 ,        212       ,  218   ,      223,
         229      ,   235   ,      241      ,   247       ,  253,
         259     ,    265  ,       271       ,  277    ,     284,
         290    ,     297   ,      303     ,    310  ,       317,
         323      ,   330       ,  337       ,  344   ,      351,
         358      ,   365     ,    372         ,380    ,     387, 
         394     ,    402   ,    409        , 417,         424,
         432    ,     440      ,   448      ,   456     ,    464,
         472    ,     480    ,     488       ,  496   ,      504,
         512    ,     521       ,  529       ,  538    ,     546,
         555    ,     563      ,   572   ,     581   ,      590,
         598     ,    607    ,     616     ,    625     ,    634,
         644     ,    653  ,       662   ,      671  ,       681,
         690      ,   699   ,      709      ,  718       ,  728,
         738     ,    747 ,        757    ,     767    ,     777,
         787     ,    797     ,  806    ,     817 ,        827,
         837   ,      847    ,     857       ,  867  ,       878,
         888    ,     898   ,      909    ,     919    ,    930,
         940    ,     951      ,   962   ,      972     ,    983,
         994    ,    1005      ,  1015 ,       1026    ,    1037,
        1048    ,    1059     ,   1070        ,1081    ,    1092,
        1103   ,     1115     ,   1126     ,   1137   ,     1148,
        1160    ,    1171    ,    1182       , 1194     ,   1205,
        1217     ,   1228  ,    1240      ,  1251 ,       1263,
        1275     ,   1286 ,      1298    ,    1310  ,      1321,
        1333     ,   1345     ,   1357   ,    1369     ,   1380,
        1392     ,   1404      ,  1416     ,   1428  ,     1440,
        1452    ,    1464  ,     1476     ,   1488     ,   1501,
        1513    ,    1525  ,      1537   ,     1549   ,     1561,
        1574    ,    1586     ,   1598   ,     1610 ,       1623,
        1635    ,   1647   ,     1660     ,   1672  ,      1684,
        1697    ,    1709  ,      1722      ,  1734     ,   1746,
        1759    ,    1771     ,   1784     ,   1796      ,  1809,
        1821      ,  1834      ,  1846    ,    1859 ,       1871,
        1884   ,     1896   ,    1909      ,  1921     ,   1934 , 
        1946      ,  1959,        1972   ,     1984  ,      1997,
        2009    ,    2022     ,   2034    ,    2047      
  };
void init_dac(void)
{
    unsigned char i;  
    BCSCTL1&=~XT2OFF;
    do
    {
        IFG1&=~OFIFG;
        for(i=0xff;i;i--);
    }while((IFG1&OFIFG)!=0);
    BCSCTL2|=SELM1+SELS;//MCLK=SMCLK=XT2;  
  ADC12CTL0=REF2_5V + REFON;
  DAC12_0CTL=DAC12IR+DAC12AMP_5+DAC12ENC;
}
void delay(unsigned int i)
{
  while(i--);
}
void square(void)
{
  init_dac();
  while(1)
  {
    DAC12_0DAT=0x0000;
    delay(8);
    DAC12_0DAT=0x0fff;
    delay(4);
  }
}
void sanjiao(void)
{
  init_dac();
  while(1)
  {
    for(DAC12_0DAT=0x0000;DAC12_0DAT<0x0fff-50;DAC12_0DAT+=50);
    for(DAC12_0DAT=0x0fff;DAC12_0DAT>50;DAC12_0DAT-=50);
  }
}
void sint(void)
{
  unsigned int i;
  while(1)
  {
    for(i=0;i<16;i++)
    {
      DAC12_0DAT=table[64*i];
    }
  }
}
int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  unsigned int i;
  P6SEL|=0x01;
  ADC12CTL0=ADC12ON+SHT0_2+REFON+REF2_5V;
  ADC12CTL1=SHP;
  ADC12MCTL0=SREF_1;
  init_dac();
  sint();
  for(i=0;i<0x3600;i++)
  {}
  ADC12CTL0|=ENC;

  while(1)
  {
    ADC12CTL0|=ADC12SC;
    while((ADC12IFG&BIT0)==0);
    _NOP();
  }

}
