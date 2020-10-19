#ifndef __RECTANGLE_H__
#define __RECTNAGLE_H__

#include <string>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape {

    private:
        double width;
	double height;

    public:
        Rectangle(std::string name, double width, double height);
        ~Rectangle(){}

        double getArea();

        void print();
};

#endif
