#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	std::cout << "Enter h: ";
	std::cin >> this->h;
}

Parallelogram::Parallelogram(int a, int b, int h)
{
	this->a = a;
	this->b = b;
	this->h = h;
}

double Parallelogram::calculateArea()
{
	return a * h;
}

std::string Parallelogram::toString()
{
	return "Shape: " + name
		+ "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula
		+ "\na: " + std::to_string(a)
		+ "\nb: " + std::to_string(b)
		+ "\nh: " + std::to_string(h)
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea());
}