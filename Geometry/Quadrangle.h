#pragma once
#include "Trapeze.h"
class Quadrangle :
    public Trapeze
{
protected:
	std::string name = "Quadrangle";
	std::string perimeterFormula = "a + b + c + d";
	std::string AreaFormula = "Unknown";

public:
	Quadrangle();
	Quadrangle(int a, int b, int c, int d, int h);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};

