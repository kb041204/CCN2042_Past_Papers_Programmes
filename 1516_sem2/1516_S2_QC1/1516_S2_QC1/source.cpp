#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
	if(n == 1 || n == 0)
		return 1;
	else
		return n * factorial( n - 1 );
}

int nCr(int n, int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
	cout << " n\\r|    0    1    2    3    4    5" << endl;
	cout << "-----------------------------------" << endl;

	for(int n = 0; n < 6; n++)
	{
		cout << setw(4) << n << "|";
		for(int r = 0; r < 6; r++)
		{
			if(n < r)
				cout << setw(5) << "-";
			else
				cout << setw(5) << nCr(n, r);
		}
		cout << endl;
	}
	return 0;
}