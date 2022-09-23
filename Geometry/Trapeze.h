#pragma once
#include "Parallelogram.h"

class Trapeze :
    public Parallelogram
{
protected:
    int c;
    int d;
    std::string name = "Trapeze";
    std::string perimeterFormula = "a + b + c + d";
    std::string AreaFormula = "(a+b)/2 * h";

public:
    Trapeze();
    Trapeze(int a, int b, int c, int d, int h);
    double calculateArea();
    double calculatePerimeter();
    std::string toString();
};

