#pragma once
#include "shape.h"
#include "Library.h"
class ShapesCollections
{
private:
	std::vector <Shape*> kolekcja;

public:
	void addShape(Shape& obiekt);
	std::string getShapesTable();
	Shape& ShapegetLargestShapeByPerimeter();
	Shape& getLargestShapeByArea();
};

