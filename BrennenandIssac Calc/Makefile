CPP = g++
CPPFLAGS = -std=c++0x -g
CXX      = g++ -std=c++11
DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++11 -I.
LDFLAGS  = $(shell fltk-config --ldflags )
LDSTATIC = $(shell fltk-config --ldstaticflags )
LINK     = g++-4.8
OBJS = stack.o inter.o


.o:	$@.cpp $@.h
	$(CXX) $(CXXFLAGS) -c $@.cpp

calculator:	calculator.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) calculator.cpp $(OBJS) $(LDFLAGS) -o calculator
