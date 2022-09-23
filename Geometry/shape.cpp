#include "Shape.h"

std::string Shape::toString()
{
    return name;
}

void Shape::getPerimeterFormula()
{
    std::cout << perimeterFormula;
}

void Shape::getAreaFormula()
{
    std::cout << AreaFormula;
}
