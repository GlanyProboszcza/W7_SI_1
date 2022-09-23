#include "Circle.h"

Circle::Circle()
{
	this->r = 0;
}

Circle::Circle(int r)
{
	this->r = r;
}

double Circle::calculateArea()
{
	return pi * r * r;
}

double Circle::calculatePerimeter()
{
	return 2 * pi * r;
}

std::string Circle::toString()
{
	
	return "Shape: " + name + "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula + "\nr: " + std::to_string(r)+
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea())+ "\n";
}