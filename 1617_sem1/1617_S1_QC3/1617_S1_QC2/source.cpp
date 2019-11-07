#include <iostream>
#include <iomanip>
using namespace std;

void square(float side, float &area, float &perimeter)
{
	area = side * side;
	perimeter = 4 * side;
}

int main()
{
	float side[5], area, perimeter;

	cout << "Input 5 side lengths:\n";
	for(int i = 0; i < 5; i++)
		cin >> side[i];

	cout << "      Side      Area Perimeter\n";
	cout << "------------------------------\n";

	cout << fixed << setprecision(3);
	for(int i = 0; i < 5; i++)
	{
		float s = side[i];
		square(s, area, perimeter);
		cout << setw(10) << side[i] << setw(10) << area << setw(10) << perimeter << endl;
	}
}