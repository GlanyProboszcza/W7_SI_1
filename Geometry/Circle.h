#pragma once
#include "shape.h"
class Circle :
    public Shape
{
	const int pi = 3.14;
	int r;
	std::string name = "circle";
	double area = pi * r * r;
	double perimeter;
	double calculateArea() = 0;
	double calculatePerimeter() = 0;
	std::string perimeterFormula;
	std::string AreaFormula;
public:
	void toString() = 0;
};