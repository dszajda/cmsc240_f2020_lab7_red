#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(std::string shapeName){
	this->name = shapeName;
}

Shape::~Shape(){}

double Shape::getArea(){
	return 0;
}

void Shape::print(){
	cout << "Your shape is: " << name << endl;
	
}

//virtual void print(){} // for later testing
//virtual void print() = 0 // for later testing
#endif
