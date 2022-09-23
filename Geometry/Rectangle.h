#pragma once
#include "Square.h"

class Rectangle :
	public Square
{
protected:
	int b;

public:
	Rectangle();
	Rectangle(int a, int b);
	double calculateArea();
	double calculatePerimeter();
	std::string toString() override;
};
