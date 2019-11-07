#include <iostream>
using namespace std;

void insert(int num[], int n, int count)
{
	num[count] = n;
	for(int i = 0; i <= count; i++)
	{
		if(num[i] > num[count])
		{
			int temp = num[i];
			num[i] = num[count];
			num[count] = temp;
		}
	}
}

int main()
{
	int num[5] = {};
	int count = 0;
	int n;

	cout << "Enter 5 distinct numbers:\n";
	do {
		cin >> n;
		insert(num, n, count);
		count++;
	} while(count < 5);

	cout << "The 5 numbers in ascending order:\n";

	for(int i = 0; i < 5; i++)
		cout << num[i] << " ";

	cout << endl;
	return 0;
}