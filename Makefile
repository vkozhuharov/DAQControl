ARCH	=	`uname -m`
BINDIR  =    	./bin/
EXENAME =    	DAQControl
EXE     =    	$(BINDIR)/$(EXENAME)

CPP	=	g++
CC	=	g++

LIBDIR  =       lib
LIBS	=	-L. -L./lib 

CFLAGS = 	-fPIC -O2 -Wall

SRC 	= 	$(wildcard src/*.cc)
OBJS	=	$(SRC:%.cc=%.o)

INCLUDEDIR =	-I./inc
INCLUDES =	./inc/*

all	:	$(EXE)

clean	:
		/bin/rm -f $(OBJS)

$(EXE) :	$(OBJS) 
		/bin/rm -f $(EXE)
		if [ ! -d $(BINDIR) ]; then mkdir -p $(BINDIR); fi
		$(CC) $(CFLAGS) -o $(EXE) DAQControl.cc $(INCLUDEDIR) $(OBJS)  $(LIBS)


$(OBJS)	:	$(INCLUDES) Makefile

%.o	:	%.cc
		echo $<
		$(CC) $(CFLAGS) $(INCLUDEDIR) -c -o $@ $<

