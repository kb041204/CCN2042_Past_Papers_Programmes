#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "How many rows: ";
	cin >> num;

	for(int i = 0; i < num; i++ ) {
		for(int j = 0; j <= i; j++) {
			if( i % 2 == 0 ) {
				if( j % 2 == 0 )
					cout << "*";
				else
					cout << " ";
			} else {
				if( j % 2 == 0 )
					cout << " ";
				else
					cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}