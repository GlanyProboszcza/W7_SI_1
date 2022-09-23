#include "Triangle.h"


Triangle::Triangle()
{
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;
	std::cout << "Enter h: ";
	std::cin >> h;
}

Triangle::Triangle(int a, int b, int c, int h)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
}

double Triangle::calculateArea()
{
	return a * h / 2;
}

double Triangle::calculatePerimeter()
{
	return a + b + c;
}

std::string Triangle::toString()
{
	return "Shape: " + name + "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula + "\na: " + std::to_string(a) + "\nb: " + std::to_string(b)
		+ "\nc: " + std::to_string(c) + "\nh: " + std::to_string(h) + "\nShape perimeter: " 
		+ std::to_string(this->calculatePerimeter()) + "\nShape area: " + std::to_string(this->calculateArea());
}
