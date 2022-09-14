#pragma once
#include "shape.h"

class Triangle :
    public Shape
{
	int a;
	int b;
	int c;
	int h;
	std::string name = "triangle";
	double area = a * h / 2;
	double perimeter;
	double calculateArea() = 0;
	double calculatePerimeter() = 0;
	std::string perimeterFormula;
	std::string AreaFormula;
public:
	void toString() = 0;
};

