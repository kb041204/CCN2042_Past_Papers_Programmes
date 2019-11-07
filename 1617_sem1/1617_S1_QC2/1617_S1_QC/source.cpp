#include <iostream>
using namespace std;

int numDigits(int val)
{
	int i = 1;
	int n = 1;
	while(1)
	{
		if(val - n < 0)
			return (i-1);
		else
		{
			n *= 10;
			i++;
		}
	}
}

bool isArmstrong(int val)
{
	int sum = 0;
	int digitNum = numDigits(val);
	int nVal = val;

	for(int i = digitNum; i>0; i--)
	{
		int test = nVal;
		int k = 1;
		for(int n = 1; n < i; n++)
		{
			k *= 10;
		}

		test = nVal / k;

		int digitValue = 1;
		for(int j = 1; j <= digitNum; j++)
		{
			digitValue = digitValue * test;
		}
		sum = sum + digitValue;
		nVal = nVal - test * k;
	}
	if(sum == val)
		return 1;
	else
		return 0;
}

int main()
{
	int x;
	cout << "Please input the value of x: ";
	cin >> x;

	cout << "Armstrong numbers between 1 and " << x << ":\n";
	for(int i = 1; i <= x; i++)
	{
		if(isArmstrong(i))
			cout << i << " ";
	}
	cout << endl;
	return 0;
}