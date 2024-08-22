#Makefile for kernel generation
#TARGET  := hello-1
#WARN    := -W -Wall -Wstrict-prototypes -Wmissing-prototypes
#INCLUDE := -isystem /lib/modules/`uname -r1/build/include 
#CFLAGS  := -02 -DMODULE -D__KERNEL__ $(WARN) $(INCLUDE)
#CC      := gcc 3.0

obj-m += hello-1.o
WARN := -W -Wall -Wstrict-prototypes -Wmissing-prototypes


all:
	make -C  /lib/modules/$(shell uname -r)/build M=$(PWD) modules 


clean:
	make -C  /lib/modules/$(shell uname -r)/build M=$(PWD) clean 

    