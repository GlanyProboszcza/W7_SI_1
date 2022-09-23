#pragma once
#include "shape.h"
class Square :
    public Shape
{
protected:
	int a;
	std::string name = "Square";
	std::string perimeterFormula = "4 * a";
	std::string AreaFormula = "a * a";

public:
	Square();
	Square(int a);
	double calculateArea();
	double calculatePerimeter();
	std::string toString();
};

