#pragma once
#include "shape.h"
class Quadrangle :
    public Shape
{
protected:
	int a;
	int b;
	int c;
	int d;
	std::string name = "Quadrangle";
	std::string perimeterFormula = "a + b + c + d";
	std::string AreaFormula = "Unknown";

public:
	Quadrangle();
	Quadrangle(int a, int b, int c, int d);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};

