#include "Rectangle.h"

Rectangle::Rectangle()
{
	this->b = 0;
	this->name = "rectangle";
	this-> perimeterFormula = "2a + 2b ";
	this-> AreaFormula = "a * b";
}

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
	this->name = "rectangle";
	this->perimeterFormula = "2a + 2b ";
	this->AreaFormula = "a * b";
}

double Rectangle::calculateArea()
{
	return a * b;
}

double Rectangle::calculatePerimeter()
{
	return 2 * a + 2 * b;
}

std::string Rectangle::toString()
{
	return "Shape: " + name
		+ "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula
		+ "\na: " + std::to_string(a)
		+ "\nb: " + std::to_string(b)
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea()) + "\n";
}
