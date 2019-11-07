#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;

void QC1a();
void QC1b();

int main()
{
	//QC1a();

	QC1b();

	return 0;
}

void QC1a()
{
	double root = sqrt(11.22);
	cout << "Square root of 11.22 with various formats\n";
	cout << "-----------------------------------------\n";

	for(int i = 0; i < 6; i++) {
		cout << fixed << setprecision(i) << root << endl;
	}
}

void QC1b()
{
	char str1[32] = "CCN2042 ";
	char str2[21] = "Computer Programming";
	char str3[10];

	int length;

	strcpy(str3, str1);
	strcat(str1, str2);
	length = strlen(str1);

	cout << "Copy str1 into str3: " << str3 << endl;
	cout << "Concatenate str1 and str2: " << str1 << endl;
	cout << "Total length of str1 after concatenation: " << length << endl;
}