class Triangle : public Shape{

	private:
		std::string shapeName;
		std::string baseAmount;
		std::string heightAmount;
	public:
		Triangle(string name, double base, double height);
		~Triangle();
		
		double getArea();
		
		void print();

}
