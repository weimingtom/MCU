#####################################################################
#																	 
#	Created by u'nSP IDE		19:49:52	10/01/09
#
#####################################################################




APPDIR	= C:\PROGRA~1\Sunplus\UNSPID~1.0

OUTDIR	= .\Debug

CC	= $(APPDIR)\gcc

AS	= $(APPDIR)\xasm16

LD	= $(APPDIR)\xlink16

AR	= $(APPDIR)\xLib16

RESC	= $(APPDIR)\resc

RM	= $(APPDIR)\rm -f

INCLUDES	= -I"E:/program/sun/kkk  yuyinshibie"

BODY	= -body SPCE060A_061A -bfile "C:\Program Files\Sunplus\unSP IDE Common\Body\SPCE060A_061A.cpt"

BINFILE	= "$(OUTDIR)\Car_Demo.S37"

ARYFILE	= "$(OUTDIR)\Car_Demo.ary"

SBMFILE	= "$(OUTDIR)\Car_Demo.sbm"

OPT	= -S -gstabs -Wall -mglobal-var-iram

ASFLAGS	= -t2 -d

CASFLAGS	= -t2 

CFLAGS	= $(OPT) -B$(APPDIR)\ $(INCLUDES) 

BINTYPE	= -as

LDFLAGS	= 

EXTRAFLAGS	= 


OBJFILES	= \
	"$(OUTDIR)\mz_48k.res" \
	"$(OUTDIR)\qj_48k.res" \
	"$(OUTDIR)\dc_48k.res" \
	"$(OUTDIR)\zg_48k.res" \
	"$(OUTDIR)\yg_48k.res" \
	"$(OUTDIR)\ye_48k.res" \
	"$(OUTDIR)\yb_48k.res" \
	"$(OUTDIR)\my_48k.res" \
	"$(OUTDIR)\ay_48k.res" \
	"$(OUTDIR)\jx_48k.res" \
	"$(OUTDIR)\gjg_48k.res" \
	"$(OUTDIR)\Resource.obj" \
	"$(OUTDIR)\main.obj" \
	"$(OUTDIR)\Flash.obj" \
	"$(OUTDIR)\hardware.obj" \
	"$(OUTDIR)\ISR.obj" 

"$(OUTDIR)\mz_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\mz.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\mz.48k" "$(OUTDIR)\mz_48k.res" RES_MZ_48K 

"$(OUTDIR)\qj_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\qj.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\qj.48k" "$(OUTDIR)\qj_48k.res" RES_QJ_48K 

"$(OUTDIR)\dc_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\dc.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\dc.48k" "$(OUTDIR)\dc_48k.res" RES_DC_48K 

"$(OUTDIR)\zg_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\zg.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\zg.48k" "$(OUTDIR)\zg_48k.res" RES_ZG_48K 

"$(OUTDIR)\yg_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\yg.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\yg.48k" "$(OUTDIR)\yg_48k.res" RES_YG_48K 

"$(OUTDIR)\ye_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\ye.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\ye.48k" "$(OUTDIR)\ye_48k.res" RES_YE_48K 

"$(OUTDIR)\yb_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\yb.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\yb.48k" "$(OUTDIR)\yb_48k.res" RES_YB_48K 

"$(OUTDIR)\my_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\my.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\my.48k" "$(OUTDIR)\my_48k.res" RES_MY_48K 

"$(OUTDIR)\ay_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\ay.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\ay.48k" "$(OUTDIR)\ay_48k.res" RES_AY_48K 

"$(OUTDIR)\jx_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\jx.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\jx.48k" "$(OUTDIR)\jx_48k.res" RES_JX_48K 

"$(OUTDIR)\gjg_48k.res": "E:\program\sun\kkk  yuyinshibie\sn\gjg.48k"
	$(RESC) "E:\program\sun\kkk  yuyinshibie\sn\gjg.48k" "$(OUTDIR)\gjg_48k.res" RES_GJG_48K 

"$(OUTDIR)\Resource.obj": "E:\program\sun\kkk  yuyinshibie\Resource.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -l "$(OUTDIR)\Resource.lst" -o "$(OUTDIR)\Resource.obj" "E:\program\sun\kkk  yuyinshibie\Resource.asm" 

"$(OUTDIR)\main.asm": "E:\program\sun\kkk  yuyinshibie\main.c" 
	$(CC) $(CFLAGS) -o "$(OUTDIR)/main.asm" "E:/program/sun/kkk  yuyinshibie/main.c" 

"$(OUTDIR)\main.obj": "$(OUTDIR)\main.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -l "$(OUTDIR)\main.lst" -o "$(OUTDIR)\main.obj" "$(OUTDIR)\main.asm" 

"$(OUTDIR)\Flash.obj": "E:\program\sun\kkk  yuyinshibie\Flash.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -l "$(OUTDIR)\Flash.lst" -o "$(OUTDIR)\Flash.obj" "E:\program\sun\kkk  yuyinshibie\Flash.asm" 

"$(OUTDIR)\hardware.obj": "E:\program\sun\kkk  yuyinshibie\hardware.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -l "$(OUTDIR)\hardware.lst" -o "$(OUTDIR)\hardware.obj" "E:\program\sun\kkk  yuyinshibie\hardware.asm" 

"$(OUTDIR)\ISR.obj": "E:\program\sun\kkk  yuyinshibie\ISR.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -l "$(OUTDIR)\ISR.lst" -o "$(OUTDIR)\ISR.obj" "E:\program\sun\kkk  yuyinshibie\ISR.asm" 


.SUFFIXES : .c .asm .obj .s37 .tsk .res

all :	 "$(OUTDIR)" $(BINFILE)

"$(OUTDIR)" :
	if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

$(BINFILE) : $(OBJFILES) 
	$(LD) $(BINTYPE) $(ARYFILE) $(BINFILE) $(LDFLAGS) $(BODY) $(EXTRAFLAGS)

compile :	 $(OBJFILES)

clean :
	$(RM) "$(OUTDIR)\mz_48k.res" 
	$(RM) "$(OUTDIR)\qj_48k.res" 
	$(RM) "$(OUTDIR)\dc_48k.res" 
	$(RM) "$(OUTDIR)\zg_48k.res" 
	$(RM) "$(OUTDIR)\yg_48k.res" 
	$(RM) "$(OUTDIR)\ye_48k.res" 
	$(RM) "$(OUTDIR)\yb_48k.res" 
	$(RM) "$(OUTDIR)\my_48k.res" 
	$(RM) "$(OUTDIR)\ay_48k.res" 
	$(RM) "$(OUTDIR)\jx_48k.res" 
	$(RM) "$(OUTDIR)\gjg_48k.res" 
	$(RM) "$(OUTDIR)\Resource.obj" 
	$(RM) "$(OUTDIR)\Resource.lst" 
	$(RM) "$(OUTDIR)\main.obj" 
	$(RM) "$(OUTDIR)\main.lst" 
	$(RM) "$(OUTDIR)\main.asm" 
	$(RM) "$(OUTDIR)\Flash.obj" 
	$(RM) "$(OUTDIR)\Flash.lst" 
	$(RM) "$(OUTDIR)\hardware.obj" 
	$(RM) "$(OUTDIR)\hardware.lst" 
	$(RM) "$(OUTDIR)\ISR.obj" 
	$(RM) "$(OUTDIR)\ISR.lst" 
	$(RM) $(BINFILE) $(SBMFILE) 

.c.asm:
	$(CC) $(CFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

.asm.obj:
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

