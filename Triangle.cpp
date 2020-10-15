#include "Triangle.h"

Triangle::Triangle(string name, double base, double height){
	shapeName = name;
	baseAmount = base;
	heightAmount = height;
}

Triangle::~Triangle(){}

double Triangle::getArea(){
	return  (baseAmount*heightAmount)*1/2;
}

void Triangle::print(){
	cout << "The shape is: " << shapeName << endl;
	cout << "The base is: " << baseAmount << endl;
	cout << "the height is: " << heightAmount << endl;
}
