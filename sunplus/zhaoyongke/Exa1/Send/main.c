//======================================================================
//	�������ƣ�	Ex1_Send.spj
//	����������	nRF2401 ����ģ�����ӳ���
//				���Ͷ˷���һ������
//
//  IDE������   SUNPLUS u'nSPTM  IDE 2.0.0��or later��
//	�漰�Ŀ⣺	CMacro1016.lib
//              SACMv41dx_061A.lib
//	����ļ���	main.c, nRF2401.c
//				SPCE061A.h, nRF2401.h
//				SPCE061A.inc
//	Ӳ�����ӣ�	
//				����ģ���IOB��8λ��
//
//	ά����¼��	2006-10-20	v1.0
//======================================================================

//====================================================================================
//�� �� ��: main.c
//��������: ��������
//ά����¼: 2006��10��20
//====================================================================================

#include "nRF2401.h"
#include "SPCE061A.h"

unsigned int Address[4] = {0x00,0x00,0x01,0xFF};
										// ���ն˵�ַ:00 00 01 FF
unsigned int SendBuf[5] = {0x01,0x02,0x03,0x04,0x05};
										// ����������:01 02 03 04 05

int main()
{
	nRF2401_Initial();					// ��ʼ��nRF2401A

	nRF2401_SetAddress(Address,4);		// ���ý��ն˵�ַ 00 00 01 FF

	nRF2401_SendBuffer_Byte(SendBuf,5);

	while(1)
	{
		*P_Watchdog_Clear = 0x1;
	}
}