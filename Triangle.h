#include <string>
class Triangle : public Shape{

	private:
		std::string shapeName;
		double baseAmount;
		double heightAmount;
	public:
		Triangle(std::string name, double base, double height);
		~Triangle();
		
		double getArea();
		
		void print();

};
