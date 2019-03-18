#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H
#include <array>
#include <string>

class RegularPolygon {
	private:
		// Fields
		int n;
		double x;		
		double y;	
		double side; // Side length

	public:
		// Constructor
		RegularPolygon(int n = 3, 
								    double x = 0, 
									double y = 0, 
									double side = 1);
		// Methods
		double getPerimeter();

		// Mutators
		void mutateN(int);
		void mutateX(double);
		void mutateY(double);
		void mutateSide(double);

		// Accessors
		int accessN() const { return n; }
		double accessX() const { return x; }
		double accessY() const { return y; }
		double accessSide() const { return side; }

		// Deconstructor
		~RegularPolygon();
	};

#endif