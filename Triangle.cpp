#include <iostream>
#include "Shape.h"
#include "Triangle.h"
using namespace std;

Triangle::Triangle(string name, double base, double height) : Shape(name){
	baseAmount = base;
	heightAmount = height;
}

Triangle::~Triangle(){}

double Triangle::getArea(){
	return  (baseAmount*heightAmount)*1/2;
}

void Triangle::print(){
	Shape::print();
	cout << "Base: " << baseAmount << endl;
	cout << "Height: " << heightAmount << endl;
}
