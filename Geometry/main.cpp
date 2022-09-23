#include "Shape.h"
#include "Circle.h"
#include "Quadrangle.h"
#include "Triangle.h"
#include "Library.h"
#include "ShapesCollections.h"


int main()
{
	Circle kolko(3);
	std::cout << kolko.toString();
	std::cout << std::endl << std::endl;

	Rectangle prosto(3, 4);
	std::cout << prosto.toString();
	std::cout << std::endl << std::endl;

	Parallelogram rowno(2,3,4);
	std::cout << rowno.toString();
	std::cout << std::endl << std::endl;

	Square kwadrat(2);
	std::cout << kwadrat.toString();
	std::cout << std::endl << std::endl;

	Triangle trojkat(2,3,4);
	std::cout << trojkat.toString();
	std::cout << std::endl << std::endl;

	ShapesCollections collection;
	collection.addShape(prosto);
	collection.addShape(rowno);
	collection.addShape(kwadrat);
	collection.addShape(trojkat);

	std::cout << "All shapes in collection: "<<std::endl;
	std::cout << collection.getShapesTable();
	std::cout << "Larges perimeter from all shapes in collection: " << std::endl;
	std::cout << collection.ShapegetLargestShapeByPerimeter().toString();
	std::cout << "Larges area from all shapes in collection: " << std::endl;
	std::cout << collection.getLargestShapeByArea().toString();

}
