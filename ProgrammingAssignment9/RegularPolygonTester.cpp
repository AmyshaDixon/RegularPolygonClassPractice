/* Authors: Amy Dixon
* Date: 02.11.2019
* Purpose: This program in RegularPolygonTester.cpp
*				 utilizes a RegularPolygon class that creates
*				 a polygon by a given length, number of sides,
*				 and x/y coordinates.
*/

#include <iostream>
#include <cstdlib>
#include "RegularPolygon.h"

using namespace std;

// Properties
void displayText(string shapeName,
	int shapesN,
	double shapesX,
	double shapesY,
	double shapesSide,
	double shapesPerimeter);

int main() {
	// Variables
	RegularPolygon shape1 = RegularPolygon();
	RegularPolygon shape2 = RegularPolygon(5, 2, 3, 2);
	RegularPolygon shape3 = RegularPolygon(4, 0.5, 0.5, 1.1);
	RegularPolygon shape4 = RegularPolygon();
	RegularPolygon shape5 = RegularPolygon(11);
	RegularPolygon shape6 = RegularPolygon(7, 3, 1);

	// Test shape1
	displayText("Shape 1 (default)",
		shape1.accessN(),
		shape1.accessX(),
		shape1.accessY(),
		shape1.accessSide(),
		shape1.getPerimeter());

	// Test shape2
	displayText("Shape 2 (5, 2, 3, 2)",
		shape2.accessN(),
		shape2.accessX(),
		shape2.accessY(),
		shape2.accessSide(),
		shape2.getPerimeter());

	// Test shape3
	displayText("Shape 3 (4, 0.5, 0.5, 1.1)",
		shape3.accessN(),
		shape3.accessX(),
		shape3.accessY(),
		shape3.accessSide(),
		shape3.getPerimeter());

	// Test shape4
	shape4.mutateN(8);
	shape4.mutateX(2.1);
	shape4.mutateY(2.15);
	shape4.mutateSide(4.3);

	displayText("Shape 4 (8, 2.1, 2.15, 4.3)",
		shape4.accessN(),
		shape4.accessX(),
		shape4.accessY(),
		shape4.accessSide(),
		shape4.getPerimeter());

	// Test shape5
	displayText("Shape 5 (11)",
		shape5.accessN(),
		shape5.accessX(),
		shape5.accessY(),
		shape5.accessSide(),
		shape5.getPerimeter());

	// Test shape6
	shape6.mutateSide(6.6);

	displayText("Shape 6 (7, 3, 1, 6.6)",
		shape6.accessN(),
		shape6.accessX(),
		shape6.accessY(),
		shape6.accessSide(),
		shape6.getPerimeter());

	// Keep window open
	system("pause");

	// Exit
	return EXIT_SUCCESS;
}

void displayText (string shapeName, 
	int shapesN, 
	double shapesX, 
	double shapesY, 
	double shapesSide,
	double shapesPerimeter) {
	cout << shapeName + ":" << endl;
	cout << "    n = " << shapesN << endl;
	cout << "    x = " << shapesX << endl;
	cout << "    y = " << shapesY << endl;
	cout << "    side = " << shapesSide << endl;
	cout << "    perimeter = " << shapesPerimeter << endl << endl;
}