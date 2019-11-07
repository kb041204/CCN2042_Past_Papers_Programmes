#include <iostream>
using namespace std;

const double PI = 3.14159265;

class Cone {
public:
	Cone(double r, double h) {
		radius = r;
		height = h;
	}
	double volume() {
		return ((PI*radius*radius*height)/3.0);
	}

private:
	double radius, height;
};

int main() {
	Cone coneA(3, 4);
	cout << "Volume of Cone A is " << coneA.volume() << endl;
	return 0;
}