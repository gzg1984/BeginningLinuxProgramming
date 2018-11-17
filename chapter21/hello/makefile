# standards
#INCLUDE		= /usr/src/kernels/2.6.18-53.el5-i686/include/
INCLUDE		= /lib/modules/3.10.0-862.el7.x86_64/build/include
CC 		= gcc
CFLAGS 		= -D__KERNEL__ -I$(INCLUDE) -DMODULE -Wall -O2

TARGET	= hello
SRC	= hello.c

all: $(TARGET).o

hello.o:hello.c
	${CC} -c hello.c -o hello.o ${CFLAGS}

clean:
	rm -f *.o *~ core
