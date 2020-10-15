#include <iostream>
#include "Shape.h"
using namespace std;



Shape::Shape(std::string shapeName){}
Shape::~Shape(){}

double Shape::getArea(){}

void Shape::print(){
	cout << "Your shape is: " << name << endl;
	
}

//virtual void print(){} // for later testing
//virtual void print() = 0 // for later testing
