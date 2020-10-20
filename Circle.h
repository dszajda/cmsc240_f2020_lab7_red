#include <string>
class Circle : public Shape{

        private:
                std::string name;
                double radius;

        public:
                Circle(std:: string name, double radius);
                ~Circle();

                double getArea();

                void print();

};