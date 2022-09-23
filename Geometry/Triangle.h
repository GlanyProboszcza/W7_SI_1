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
	std::string perimeterFormula;
	std::string AreaFormula;

public:
	Triangle();
	Triangle(int a, int b, int c, int h);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};

