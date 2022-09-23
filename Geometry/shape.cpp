#include "Shape.h"

std::string Shape::toString()
{
    return name + "\n";
}

double Shape::calculateArea()
{
    return 0.0;
}

double Shape::calculatePerimeter()
{
    return 0.0;
}

void Shape::getPerimeterFormula()
{
    std::cout << perimeterFormula;
}

void Shape::getAreaFormula()
{
    std::cout << AreaFormula;
}
