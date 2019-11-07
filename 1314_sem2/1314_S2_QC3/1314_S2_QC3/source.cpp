#include <iostream>
using namespace std;

int main() {
	int arr[10] = {25, 84, 60, 18, 42, 70, 55, 46, 36, 91};
	int input[4];

	cout << "Please input 4 integers:" << endl;
	for(int i = 0; i < 4; i++ )
		cin >> input[i];

	cout << "From my 10 numbers, multiples of your inputs are:\n";

	for(int i = 0; i < 4; i++) {
		cout << input[i] << ": ";
		for(int j = 0; j < 10; j++) {
			if( arr[j] % input[i] == 0 )
				cout << arr[j] << " ";
		}
		cout << endl;
	}

	return 0;
}