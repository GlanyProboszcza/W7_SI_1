#pragma once
#include "Rectangle.h"

class Parallelogram :
    public Rectangle
{
protected:
	int h;
	std::string name = "Parallelogram";
	std::string AreaFormula = "a * h";

public:
	Parallelogram();
	Parallelogram(int a, int b, int h);
	double calculateArea();
	std::string toString();
};

