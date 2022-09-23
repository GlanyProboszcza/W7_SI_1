#pragma once
#include "shape.h"

class Triangle :
    public Shape
{
	int a;
	int b;
	int c;
	std::string name = "triangle";
	std::string perimeterFormula = " a + b + c";
	std::string AreaFormula = "Heron's Formula";

public:
	Triangle();
	Triangle(int a, int b, int c);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};

