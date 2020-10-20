#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
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


    cout << "----------------" << std::endl;
    cout << "Test Triangle:" << std::endl;
    cout << "----------------" << std::endl;
    Triangle tri = Triangle("Triangle1",1.0,2.0);
    tri.print();
    cout << "The area is: " << tri.getArea() << endl;  

    cout << "----------------" << endl;
    cout << "Test Rectangle:" << endl;
    cout << "----------------" << endl;
    Rectangle rect = Rectangle("Rectangle1", 7.0, 8.0);
    rect.print();
    cout << "The area is: " << rect.getArea() << endl;
    

    cout << "Indivudal Tests: " << endl;
    Shape* shapePtr = &cir;
    shapePtr->print();
    shapePtr = &tri;
    shapePtr->print();
    shaptPtr = &rect;
    shaePtr->print();
    return 0;



    
}
