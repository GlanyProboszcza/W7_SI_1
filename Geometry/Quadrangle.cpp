#include "Quadrangle.h"

Quadrangle::Quadrangle()
{
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int h)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->h = h;
}

double Quadrangle::calculateArea()
{
	return 0.0;
}

double Quadrangle::calculatePerimeter()
{
	return a + b + c + d;
}

std::string Quadrangle::toString()
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
