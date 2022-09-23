#include "Triangle.h"

Triangle::Triangle()
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
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
		+ "\nShape area: " + std::to_string(this->calculateArea()) + "\n";
}
