#include <iostream>
using namespace std;

int main() {
	int data[5] = {};

	cout << "Please input 5 integers:\n";

	for(int i = 0; i < 5; i++) {
		cin >> data[i];
	}

	cout << "Histogram:\n";

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < data[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}