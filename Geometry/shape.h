#pragma once
#include "Library.h"


class Shape
{
protected:
	std::string name = "Unknown";
	std::string perimeterFormula;
	std::string AreaFormula;

public:
	virtual std::string toString();
	virtual double calculateArea();
	virtual double calculatePerimeter();
	virtual void getPerimeterFormula();
	virtual void getAreaFormula();
};