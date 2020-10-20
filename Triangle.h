#ifndef __TRINAGLE_H__
#define __TRIANGLE_H__

#include <string>
class Triangle : public Shape{

	private:
		double baseAmount;
		double heightAmount;
	public:
		Triangle(std::string name, double base, double height);
		~Triangle();
		
		double getArea();
		
		void print();

};
#endif
