#include <iostream>
#include <cmath>
using namespace std;

class Coordinate {
public:
	Coordinate(double a, double b) {
		x = a;
		y = b;
	}

	void printCoordinate() {
		cout << "(" << x << ", " << y << ")" << endl;
	}

	double slopeFromOrigin() {
		return (double) y / x;
	}

	double distanceFrom(Coordinate c) {
		return sqrt((c.x - x)*(c.x - x) + (c.y - y)*(c.y - y));
	}

private:
	double x;
	double y;
};

int main()
{
	Coordinate A(1, 2), B(4, 3);
	cout << "Point A: ";
	A.printCoordinate();
	cout << endl;
	cout << "Point B: ";
	B.printCoordinate();
	cout << endl;

	cout << "Slope of A from origin = " << A.slopeFromOrigin() << endl;
	cout << "Slope of B from origin = " << B.slopeFromOrigin() << endl;
	
	cout << "Distance between A and B = " << A.distanceFrom(B) << endl;
	return 0;
}