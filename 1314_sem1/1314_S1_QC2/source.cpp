#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void QC2a_main();
void QC2b_main();

int main()
{
	//QC2a_main();

	QC2b_main();

	return 0;
}

void QC2a_main()
{
	const double c = 1.098765;
	char str[3][12] = { "c^21 :", "c^22 :", "c^23 :" };
	double ans;

	cout << fixed;

	ans = 1;
	for(int i = 1; i < 24; i++) {
		ans = ans * c;
		if( 21 <= i && i <= 23) {
			cout << setprecision(i-18) << str[i-21] << setw(8) << ans << endl;
		}
	}
}

void QC2b_main()
{
	char * str1 = "Happy New year";
	char str2[] = "Birthday to you";
	char str3[15] = "";

	strncpy(str3, str1, 6);
	strncat(str3, str2, 8);

	cout << str3 << endl;
}