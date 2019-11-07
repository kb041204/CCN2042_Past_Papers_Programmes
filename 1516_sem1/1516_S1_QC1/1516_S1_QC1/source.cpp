#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265;

void circle(int r, double &dia, double &circum, double &area)
{
	dia = 2 * r;
	circum = 2 * PI * r;
	area = PI * r * r;
}

int main()
{
	double d, c, a;
	int r1, r2;

	cout << "Please enter the starting radius: ";
	cin >> r1;
	cout << "Please enter the ending radius: ";
	cin >> r2;

	cout	<< endl;
	cout	<< setw(6) << "Radius";
	cout	<< setw(10) << "Diameter";
	cout	<< setw(15) << "Circumference";
	cout	<< setw(10) << "Area" << endl;

	for(int i = r1; i <= r2; i++)
	{
		circle(i, d, c, a);
		cout	<< fixed << setprecision(0)
				<< setw(6) << i << setprecision(2)
				<< setw(10) << d
				<< setw(15) << c
				<< setw(10) << a << endl;
	}

	return 0;
}