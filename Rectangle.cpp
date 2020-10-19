#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(std::string name, double width, double height) : Shape(name){
	this->width = width;
	this->height = height;
}

double Rectangle::getArea(){
	return (width * height);
}

void Rectangle::print(){
	Shape::print();
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
}
#endif
