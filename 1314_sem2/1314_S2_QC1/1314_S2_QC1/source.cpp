#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void QC1a_main();
void QC1b_main();

int main()
{
	QC1a_main();

	//QC1b_main();

	return 0;
}

void QC1a_main()
{
	const double PI = 3.14159265;
	cout << setw(6) << "Radius" << setw(10) << "Area" << endl;
	cout << fixed << setprecision(2);

	for(int i = 5; i <= 7; i++) {
		cout <<  setw(6) << (float)i << setw(10) << i*i*PI << endl;
	}
}

void QC1b_main()
{
	char * s1 = "Good";
	char * s2 = "good";

	cout << "Two strings are equal? ";
	if(strcmp(s1, s2) == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	cout << "Length of two strings are equal? ";
	if(strlen(s1) == strlen(s2))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}