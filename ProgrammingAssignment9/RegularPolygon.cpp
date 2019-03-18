#include "RegularPolygon.h"

// Constructor
RegularPolygon::RegularPolygon(int n, 
	double x, 
	double y, 
	double side) {
	mutateN(n);
	mutateX(x);
	mutateY(y);
	mutateSide(side);
}

// Methods
double RegularPolygon::getPerimeter() {
	return n * side;
}

// Mutators
void RegularPolygon::mutateN(int userN) {
	n = userN;
}

void RegularPolygon::mutateX(double userX) {
	x = userX;
}

void RegularPolygon::mutateY(double userY) {
	y = userY;
}

void RegularPolygon::mutateSide(double userSide) {
	side = userSide;
}

// Deconstructor
RegularPolygon::~RegularPolygon() {
}
