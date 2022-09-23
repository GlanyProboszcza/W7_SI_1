#pragma once
#include "Library.h"


class Shape
{
protected:
	std::string name;
	std::string perimeterFormula;
	std::string AreaFormula;

public:
	std::string toString();
	virtual double calculateArea() = 0;
	virtual double calculatePerimeter() = 0;
	void getPerimeterFormula();
	void getAreaFormula();
};
   