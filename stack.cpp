#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <vector>

using namespace std;

Stack::Stack(){
	length = 0;
}

void Stack::push(int e) {
 	myStack.push_back(e);
	length++;
}

float Stack::pop(){
	length--;
	float temp = myStack.back();
	myStack.pop_back();
	return temp;
}

int Stack::size(){
	int mylen = myStack.size();
  	return mylen;
}

void Stack::clear(){
	length = 0;
	myStack.clear();
}


