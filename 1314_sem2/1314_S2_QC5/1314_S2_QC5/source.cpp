#include <iostream>
using namespace std;

class Lock {
public:
	Lock(int p) {
		pwd = p;
	}

	bool open(int t) {
		if( t == pwd )
			return 1;
		else
			return 0;
	}

private:
	int pwd;
};

int main() {
	int num;
	Lock lock(1234);

	do {
		cout << "It is locked. Enter the password to unlock: ";
		cin >> num;
	} while (!lock.open(num));

	cout << "Password correct, unlocked." << endl;
	return 0;
}