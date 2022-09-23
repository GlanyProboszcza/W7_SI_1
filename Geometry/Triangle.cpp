#include "Triangle.h"

Triangle::Triangle()
{
	std::cout << "Enter a: ";
	std::cin >> this->a;
	std::cout << "Enter b: ";
	std::cin >> this->b;
	std::cout << "Enter c: ";
	std::cin >> this->c;

}

Triangle::Triangle(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;

}

double Triangle::calculateArea()
{
	double s = this-> calculatePerimeter() / 2;

	return sqrt(s*(s-a)*(s-b)*(s-c));
}

double Triangle::calculatePerimeter()
{
	return a + b + c;
}

std::string Triangle::toString()
{
	return "Shape: " + name 
		+ "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula 
		+ "\na: " + std::to_string(a) 
		+ "\nb: " + std::to_string(b)
		+ "\nc: " + std::to_string(c) 
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter()) 
		+ "\nShape area: " + std::to_string(this->calculateArea());
}
