#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

Screen:Screen(){

Fl_Window *window = new Fl_Window(425,475);
  	Fl_Box *output = new Fl_Box(25,25,375,50, "");
  	output -> box(FL_BORDER_BOX);
	output -> labelsize(25);

	Fl_Button *zero = new Fl_Button(25,325,75,50,"0");
	Fl_Button *one = new Fl_Button(25,250,75,50,"1");
	Fl_Button *two = new Fl_Button(125,250,75,50,"2");
	Fl_Button *three = new Fl_Button(225,250,75,50,"3");
	Fl_Button *four = new Fl_Button(25,175,75,50,"4");
	Fl_Button *five = new Fl_Button(125,175,75,50,"5");
	Fl_Button *six = new Fl_Button(225,175,75,50,"6");
	Fl_Button *seven = new Fl_Button(25,100,75,50,"7");
	Fl_Button *eight = new Fl_Button(125,100,75,50,"8");
	Fl_Button *nine = new Fl_Button(225,100,75,50,"9");
	Fl_Button *add = new Fl_Button(325,100,75,50,"+");
	Fl_Button *subtract = new Fl_Button(325,175,75,50,"-");
	Fl_Button *multiply = new Fl_Button(325,250,75,50,"*");
	Fl_Button *power = new Fl_Button(125,325,75,50,"^");
	Fl_Button *sqrt = new Fl_Button(225,325,75,50,"SQRT");
	Fl_Button *divide = new Fl_Button(325,325,75,50,"/");
	Fl_Button *plmn = new Fl_Button(25,400,75,50,"+|-");
	Fl_Button *drop = new Fl_Button(125,400,75,50,"DROP");
	Fl_Button *enter = new Fl_Button(225,400,175,50,"ENTER");
}