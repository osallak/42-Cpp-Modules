#include "Point.hpp"


int main(void)
{

	Point a = Point(.0, .0);
	Point b = Point(10.0, 30.0);
	Point c = Point(20.0, 0.0);
	Point p1 = Point(10.0, 15.0);
	Point p2 = Point(30.0, 15.0);


	std::cout << std::endl;
	std::cout << std::endl;
	bsp(a, b, c, p1) == true ? std::cout << "inside\n" : std::cout << "outside\n";
	std::cout << std::endl;
	bsp(a, b, c, p2) == true ? std::cout << "inside\n" : std::cout << "outside\n";
	std::cout << std::endl;
	std::cout << std::endl;
}
