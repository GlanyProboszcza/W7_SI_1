#include "Quadrangle.h"

Quadrangle::Quadrangle()
{
	std::cout << "Enter a: ";
	std::cin >> this->a;
	std::cout << "Enter b: ";
	std::cin >> this->b;
	std::cout << "Enter c: ";
	std::cin >> this->c;
	std::cout << "Enter d: ";
	std::cin >> this->d;
}

Quadrangle::Quadrangle(int a, int b, int c, int d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
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
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea());
}
