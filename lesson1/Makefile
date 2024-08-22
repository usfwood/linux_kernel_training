#Makefile for kernel generation
TARGET  := hello-1
WARN    := -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE := -isystem /lib/modules/`uname -r1/build/include 
CFLAGS  := -02 -DMODULE -D__KERNEL__ $(WARN) $(INCLUDE)
CC      := gcc 3.0

$(TARGET).o: $(TARGET).c 

.PHONY: clean

clean:
    rm -rf $(TARGET).o

    