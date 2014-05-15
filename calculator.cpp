#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

int main(int argc, char *argv[]){
<<<<<<< HEAD
 Fl_Window *window = new Fl_Window(425,475);
 Screen();
  
=======
  Screen();
  //done with widgets
>>>>>>> 7e72d08bc5ac9e9610d03e1ae2123730d695b9b7

  window -> end();
  window -> show(argc, argv);
  return Fl::run();
}
