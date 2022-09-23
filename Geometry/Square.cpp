#include "Square.h"

Square::Square()
{
	std::cout << "Enter a: ";
	std::cin >> this->a;
}

Square::Square(int a)
{
	this->a = a;
}

double Square::calculateArea()
{
	return a*a;
}

double Square::calculatePerimeter()
{
	return 4*a;
}

std::string Square::toString()
{
	return "Shape: " + name
		+ "\nPerimeter formula: " + perimeterFormula
		+ "\nArea formula: " + AreaFormula
		+ "\na: " + std::to_string(a)
		+ "\nShape perimeter: " + std::to_string(this->calculatePerimeter())
		+ "\nShape area: " + std::to_string(this->calculateArea());
}
