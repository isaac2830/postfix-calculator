ARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CPP	 = g++
	LINK = g++
else
	CPP	 = g++
	LINK     = g++
endif

CPPFLAGS = -std=c++11 -g -Wno-deprecated -lfltk
LDFLAGS  =
LDSTATIC =


OBJS = display.o

all:	calculator

%.o:	%.cpp %.h
	$(CPP) $(CPPFLAGS) -c $<

yahtzee:	$(OBJS) calculator.cpp
	$(LINK) $(CPPFLAGS) calculator.cpp $(LDFLAGS) $(OBJS) -o calculator

clean:
	rm *.o calculator
