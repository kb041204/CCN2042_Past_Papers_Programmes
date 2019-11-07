#include <iostream>
using namespace std;

int main()
{
	int inNum = 0, digit = 0;
	int numArr[10] = {};

	cout << "How many digits (1-10): ";
	cin >> digit;
	cout << "Enter a " << digit << "-digit number: ";
	cin >> inNum;

	int tempNum = inNum;
	for(int i = 0; i < digit; i++)
	{
		int placeNum = 1;
		for(int k = 1; k < (digit - i); k++)
			placeNum *= 10;
		numArr[i] = tempNum / placeNum;
		tempNum = tempNum - placeNum * numArr[i];
	}

	cout << "Digit rotations:" << endl;

	for(int i = 0; i < digit; i++)
	{
		for(int j = 0; j < digit; j++)
		{
			int newPos = i + j;
			if( newPos >= digit)
				cout << numArr[newPos - digit] << " ";
			else
				cout << numArr[newPos] << " ";
		}
		cout << endl;
	}

	return 0;
}