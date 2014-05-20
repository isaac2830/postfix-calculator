#include "inter.h"
#include <iostream>
#include <stdlib.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <cmath>

Inter::Inter(int x,int y,int w,int h,char *label):Fl_Output(x,y,w,h,label){
  	this -> topE=0;
	this -> numDecimal = 1;
	this -> value("");
	this -> more = false;
	this -> decimal = false;
}

void Inter::entry(float number){
	if(!decimal){
		this->more=true;
    		this->topE=this->topE*10;
    		this->topE=this->topE+number;
   		this->value(std::to_string(this->topE).c_str());
   	}
   	else{
   		long double temp;
   		float divisor = pow(10,numDecimal);
   		temp = (float) number/(divisor);
   		this->topE+=(temp);
   		this->numDecimal++;
   		this->value(std::to_string(this->topE).c_str());
   	}
}

void Inter::entry(char op){
	if(op == '='){
		this -> more=false;
		this -> value("");
		myStack.push(this->topE);
		this -> topE = 0;
		this -> decimal = false;
		this -> numDecimal = 1;
	}

	if(op == '+'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
    		long double currentVal=0;
    
    		if (myStack.size()>0){
      			currentVal=myStack.pop();
    		}
    		if (myStack.size()>0){
      			currentVal+=myStack.pop();
    		}
    		myStack.push(currentVal);
    		this->value(std::to_string(currentVal).c_str());
  	
	}

	if(op == '-'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
    		long double currentVal=0;
    
    		if (myStack.size()>0){
      			currentVal=myStack.pop();
    		}
    		if (myStack.size()>0){
      			currentVal-=myStack.pop();
    		}
		currentVal= currentVal*-1;
    		myStack.push(currentVal);
    		this->value(std::to_string(currentVal).c_str());

	}

	if(op == 'c'){
		myStack.clear();

		this->value("");
	}

	if(op == '*'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
    		long double currentVal=0;
    
    		if (myStack.size()>0){
      			currentVal=myStack.pop();
    		}
    		if (myStack.size()>0){
      			currentVal*=myStack.pop();
    		}
    		myStack.push(currentVal);
    		this->value(std::to_string(currentVal).c_str());
	}

	if(op == '/'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
		long double answer=0;
    		long double numerator=0;
		long double denominator=0;
    
    		if (myStack.size()>0){
      			denominator=myStack.pop();
    		}
    		if (myStack.size()>0){
      			numerator=myStack.pop();
    		}
		answer = numerator/denominator;
    		myStack.push(answer);
    		this->value(std::to_string(answer).c_str());
	}

	if(op == 'P'){
		this->topE = topE * -1;
		this->value(std::to_string(topE).c_str());
	}

	if(op == '^'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
		long double answer=0;
    		long double base=0;
		long double exponent=0;
    
    		if (myStack.size()>0){
      			exponent=myStack.pop();
    		}
    		if (myStack.size()>0){
      			base=myStack.pop();
    		}
		answer = pow(base,exponent);
    		myStack.push(answer);
    		this->value(std::to_string(answer).c_str());
	}
	if(op == 's'){
		if(this -> more){
			myStack.push(this->topE);
      			this->topE=0;
      			this->more=false;
    		}
		long double currentVal=0;
		long double answer=0;
    
    		if (myStack.size()>0){
      			currentVal=myStack.pop();
    		}
		answer = sqrt(currentVal);
    		myStack.push(answer);
    		this->value(std::to_string(answer).c_str());
	}
	if(op == 'd'){
		long double currentVal=0;
    		if (myStack.size()>0){
      			currentVal=myStack.pop();
    		}
    		currentVal=0;
    		this->value("");
	}
	if(op == '.'){
	this->decimal = true;
   }
}

