#include <iostream>
#include <FL/Fl_Output.H>
#include <stdlib.h>
#include "stack.h"

#ifndef INTER
#define INTER

class Inter: public Fl_Output{

	private:
		bool decimal;
		int numDecimal;
		bool more;
		float top = 0;
		Stack myStack;

	public:
		tScreen(int x, int y, int w, int h, char * label);
		void entry(int);
		void entry(char);
	

};
#endif
