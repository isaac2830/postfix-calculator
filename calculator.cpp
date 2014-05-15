#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

int main(int argc, char *argv[]){
 Fl_Window *window = new Fl_Window(425,475);
 Screen();
  

  window -> end();
  window -> show(argc, argv);
  return Fl::run();
}
