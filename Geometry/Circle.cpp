#include "Circle.h"

Circle::Circle()
{
	std::cout << "Enter r: ";
	std::cin >> this->r;
}

Circle::Circle(int r)
{
	this->r = r;
}

std::string Circle::toString()
{
	
	return "Shape: " + name + "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula + "\nr: " + std::to_string(r)+
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea());
}

double Circle::calculateArea()
{
	return pi * r * r;
}

double Circle::calculatePerimeter()
{
	return 2 * pi * r;
}
