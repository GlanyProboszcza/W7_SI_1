#include "ShapesCollections.h"

void ShapesCollections::addShape(Shape& obiekt)
{
	kolekcja.push_back(&obiekt);
}

std::string ShapesCollections::getShapesTable()
{
	std::string temp = "";
	for (auto& a : kolekcja) {
		temp += a->toString();
		std::cout <<"test" << a->toString();
	}

	return temp;
}

Shape& ShapesCollections::ShapegetLargestShapeByPerimeter()
{
	Shape* helper = kolekcja[0];
	for (auto a : kolekcja) {
		if (helper->calculatePerimeter() < a->calculatePerimeter())
			helper = a;
	}
	return *helper;
}

Shape& ShapesCollections::getLargestShapeByArea()
{
	Shape* helper = kolekcja[0];
	for (auto a : kolekcja) {
		if (helper->calculateArea() < a->calculateArea())
			helper = a;
	}
	return *helper;
}
