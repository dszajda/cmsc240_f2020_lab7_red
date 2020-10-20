#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main(){

    cout << "----------------" << endl;
    cout << "Test Shape:" << endl;
    cout << "----------------" << endl;
    Shape shape = Shape("Generic shape");
    shape.print();
 
    cout << "----------------" << endl;
    cout << "Test Circle:" << endl;
    cout << "----------------" << endl;
    Circle cir = Circle("Circle1", 3.0);
    cir.print();
    cout << "The area is:" << cir.getArea() << endl;
    Shape* shapePtr = &cir;
    shapePtr->print();


    cout << "----------------" << std::endl;
    cout << "Test Triangle:" << std::endl;
    cout << "----------------" << std::endl;
    Triangle tri = Triangle("Triangle1",1.0,2.0);
    tri.print();
    cout << "The area is: " << tri.getArea() << endl;
    shapePtr = &tri;
    shapePtr->print();  

    cout << "----------------" << endl;
    cout << "Test Rectangle:" << endl;
    cout << "----------------" << endl;
    Rectangle rect = Rectangle("Rectangle1", 7.0, 8.0);
    rect.print();
    cout << "The area is: " << rect.getArea() << endl;
    shapePtr = &rect;
    shapePtr->print();
    return 0;
}
