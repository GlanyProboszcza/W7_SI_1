#include "Trapeze.h"

Trapeze::Trapeze()
{
	this->c = 0;
	this->d = 0;
	this->h = 0;
}

Trapeze::Trapeze(int a, int b, int c, int d, int h)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->h = h;
}

double Trapeze::calculateArea()
{
	return (a + b) / 2 * h;
}

double Trapeze::calculatePerimeter()
{
	return a + b + c + d;
}

std::string Trapeze::toString()
{
	return "Shape: " + name
		+ "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula
		+ "\na: " + std::to_string(a)
		+ "\nb: " + std::to_string(b)
		+ "\nc: " + std::to_string(c)
		+ "\nd: " + std::to_string(d)
		+ "\nh: " + std::to_string(h)
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea()) + "\n";
}
