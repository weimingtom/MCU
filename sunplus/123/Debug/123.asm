// GCC for SUNPLUS u'nSP version 1.0.21-3
// Command: C:\PROGRA~1\Sunplus\UNSPID~1.0\cc1.exe C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\ccMXaaaa.i -fkeep-inline-functions -quiet -dumpbase 123.c -mglobal-var-iram -gstabs -Wall -o .\Debug/123.asm
	.external __sn_func_ptr_sec

// gcc2_compiled.:

.debug
	.dw '.stabs "F:/myproject/lingyang/123/",0x64,0,3,',0,0,offset Ltext0,seg Ltext0,0x0d,0x0a
.code
.debug
	.dw '.stabs "F:/myproject/lingyang/123/123.c",0x64,0,3,',0,0,offset Ltext0,seg Ltext0,0x0d,0x0a
.code
.code
Ltext0:
.debug
	.dw '.stabs "int:t1=r1;-32768;32767;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "char:t2=r2;0;127;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "long int:t3=r3;-2147483648;2147483647;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "unsigned int:t4=r4;0;65535;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "long unsigned int:t5=r5;0;4294967295;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "long long int:t6=r6;-2147483648;2147483647;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "long long unsigned int:t7=r7;0;4294967295;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "short int:t8=r8;-32768;32767;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "short unsigned int:t9=r9;0;65535;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "signed char:t10=r10;-32768;32767;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "unsigned char:t11=r11;0;65535;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "float:t12=r1;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "double:t13=r1;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "long double:t14=r1;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "complex int:t15=s2real:1,0,16;imag:1,16,16;;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "complex float:t16=r16;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "complex double:t17=r17;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "complex long double:t18=r18;2;0;",128,0,0,0',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "void:t19=19",128,0,0,0',0x0d,0x0a
.CODE
.code
.debug
	.dw '.stabs "playsound:F19",36,0,0,',0,0,offset _playsound,seg _playsound,0x0d,0x0a
.CODE
.public _playsound
_playsound:	.proc
.debug
	.dw '.stabn 0x44,0,4,',0,0
	.dd LM1-_playsound
	.dw 0x0d,0x0a
.code
LM1:
	// total=1, vars=1
	// frame_pointer_needed: 1
	push bp to [sp]
	sp-=1
	bp=sp+1

	R1=BP+4
	[BP]=R1	// QImode move
.debug
	.dw '.stabn 0x44,0,5,',0,0
	.dd LM2-_playsound
	.dw 0x0d,0x0a
.code
LM2:
LBB2:
	R1=1	// QImode move
	[SP--]=R1	// QImode move
	call _SACM_A2000_Initial	// call with return value
	SP = SP + 1	//SP
.debug
	.dw '.stabn 0x44,0,6,',0,0
	.dd LM3-_playsound
	.dw 0x0d,0x0a
.code
LM3:
	R1=3	// QImode move
	[SP--]=R1	// QImode move
	R1=[BP]	// QImode move
	R3=[BP]	// QImode move
	R2=R3+1
	R3=R2	// QImode move
	R1=[R3]	// QImode move
	[SP--]=R1	// QImode move
	R2=[BP]	// QImode move
	R1=[R2]	// QImode move
	[SP--]=R1	// QImode move
	call _SACM_A2000_Play	// call with return value
	SP = SP + 3	//SP
.debug
	.dw '.stabn 0x44,0,7,',0,0
	.dd LM4-_playsound
	.dw 0x0d,0x0a
.code
LM4:
L3:
	call _SACM_A2000_Status	// call with return value
	R2=R1&1
	CMP R2,0	// QImode test
	NSJNZ L5	//QImode NE
	pc=L4	// Indirect jump
L5:
.debug
	.dw '.stabn 0x44,0,9,',0,0
	.dd LM5-_playsound
	.dw 0x0d,0x0a
.code
LM5:
LBB3:
	call _SACM_A2000_ServiceLoop	// call with return value
.debug
	.dw '.stabn 0x44,0,10,',0,0
	.dd LM6-_playsound
	.dw 0x0d,0x0a
.code
LM6:
	R1=1	// QImode move
	[28690]=R1	// QImode move
.debug
	.dw '.stabn 0x44,0,11,',0,0
	.dd LM7-_playsound
	.dw 0x0d,0x0a
.code
LM7:
LBE3:
	pc=L3	// Indirect jump
L4:
.debug
	.dw '.stabn 0x44,0,12,',0,0
	.dd LM8-_playsound
	.dw 0x0d,0x0a
.code
LM8:
	call _SACM_A2000_Stop	// call with return value
.debug
	.dw '.stabn 0x44,0,13,',0,0
	.dd LM9-_playsound
	.dw 0x0d,0x0a
.code
LM9:
LBE2:
.debug
	.dw '.stabn 0x44,0,13,',0,0
	.dd LM10-_playsound
	.dw 0x0d,0x0a
.code
LM10:
L2:

	sp+=1
	pop bp from [sp]
	retf
	.endp	// end of playsound

.debug
	.dw '.stabs "index:p1",160,0,0,4',0x0d,0x0a
.CODE
.debug
	.dw '.stabs "channel:p1",160,0,0,5',0x0d,0x0a
.CODE
.debug
	.dw '.stabn 0xc0,0,0,',0,0
	.dd LBB2-_playsound
	.dw 0x0d,0x0a
.code
.debug
	.dw '.stabn 0xc0,0,0,',0,0
	.dd LBB3-_playsound
	.dw 0x0d,0x0a
.code
.debug
	.dw '.stabn 0xe0,0,0,',0,0
	.dd LBE3-_playsound
	.dw 0x0d,0x0a
.code
.debug
	.dw '.stabn 0xe0,0,0,',0,0
	.dd LBE2-_playsound
	.dw 0x0d,0x0a
.code
.debug
	.dw '.stabf ',0,0
	.dd LME1-_playsound
	.dw 0x0d,0x0a
.code
LME1:
.code
.debug
	.dw '.stabs "main:F1",36,0,0,',0,0,offset _main,seg _main,0x0d,0x0a
.CODE
.public _main
_main:	.proc
.debug
	.dw '.stabn 0x44,0,15,',0,0
	.dd LM11-_main
	.dw 0x0d,0x0a
.code
LM11:
	// total=0, vars=0
	// frame_pointer_needed: 1
	push bp to [sp]
	bp=sp+1

	R1=BP+3
.debug
	.dw '.stabn 0x44,0,16,',0,0
	.dd LM12-_main
	.dw 0x0d,0x0a
.code
LM12:
L8:
	pc=L10	// Indirect jump
	pc=L9	// Indirect jump
L10:
	pc=L8	// Indirect jump
L9:
.debug
	.dw '.stabn 0x44,0,20,',0,0
	.dd LM13-_main
	.dw 0x0d,0x0a
.code
LM13:
.debug
	.dw '.stabn 0x44,0,20,',0,0
	.dd LM14-_main
	.dw 0x0d,0x0a
.code
LM14:
L7:

	pop bp from [sp]
	retf
	.endp	// end of main

.debug
	.dw '.stabf ',0,0
	.dd LME2-_main
	.dw 0x0d,0x0a
.code
LME2:
.external _SACM_A2000_Stop
.external _SACM_A2000_ServiceLoop
.external _SACM_A2000_Status
.external _SACM_A2000_Play
.external _SACM_A2000_Initial
	.end
