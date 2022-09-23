#pragma once
#include "shape.h"

class Circle :
    public Shape
{
	const int pi = 3.14;
	int r;
	std::string name = "circle";
	std::string perimeterFormula = "2 * pi * r";
	std::string AreaFormula = "pi * r * r";

public:
	Circle();
	Circle(int r);
	std::string toString();
	double calculateArea();
	double calculatePerimeter();
};