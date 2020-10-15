#include <iostream>
#include "Shape.h"
using namespace std;



Shape(std::string shapeName){}
~Shape(){}

double getArea(){}

void print(){
	cout << "Your shape is: " << name << endl;
	
}

//virtual void print(){} // for later testing
//virtual void print() = 0 // for later testing
