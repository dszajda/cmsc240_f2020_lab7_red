#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include <iostream>
#include "Shape.h"
#include "Circle.h"
using namespace std;

Circle::Circle(string name, double radius) : Shape(name){
        this->name = name;
        this->radius = radius;
}

double Circle::getArea(){
        const long double PI = 3.141592653589793238L;
        return PI * (radius * radius);
}

void Circle::print(){
        Shape::print();
        cout << "Radius:" << radius << endl;
}

#endif
