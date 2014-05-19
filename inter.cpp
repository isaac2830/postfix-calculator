#include "inter.h"
#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

Inter::tScreen(int x,int y,int w,int h,char *label):Fl_Output(x,y,w,h,label){
  	this -> top=0;
	this -> numDecimal =1;
	this -> value("");
	this -> more = false;
	this -> decimal = false;
}

void Inter::entry(int number){
	this->more=true;
    	this->top=this->top*10;
    	this->top=this->top+x;
   	this->value(std::to_string(this->top).c_str());
}
