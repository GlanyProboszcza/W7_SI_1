#pragma once
#include "Square.h"

class Rectangle :
	public Square
{
protected:
	int b;
	std::string name = "rectangle";
	std::string perimeterFormula = "2a + 2b ";
	std::string AreaFormula = "a * b";

public:
	Rectangle();
	Rectangle(int a, int b);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};
