#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_CITY = 7;
	char city[NUM_CITY] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int map[NUM_CITY] = { 0, 19, 68, 147, 235, 301, 346};
	int dist = 0;
	int fare = 0;

	cout << "Fare Chart";
	for(int i = 0; i < 7; i++)
		cout << setw(5) << city[i];
	cout << endl;

	for(int i = 0; i < 7; i++) {
		cout << setw(10) << city[i];
		for(int j = 0; j < 7; j++) {
			if( i <= j)
				dist = map[j] - map[i];
			else
				dist = map[i] - map[j];

			if( dist <= 50 )
				fare = dist * 2.5;
			else if ( 50 < dist && dist <= 200 )
				fare = dist * 2.2;
			else
				fare = dist * 2;

			cout << setw(5) << fare;
		}
		cout << endl;
	}

	return 0;
}