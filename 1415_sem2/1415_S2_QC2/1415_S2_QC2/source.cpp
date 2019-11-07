#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool isPrime(int n) {
	int counter = 0;
	for(int i = 1; i <= n; i++) {
		if( n % i == 0)
			counter++;
	}
	if(counter == 2 || n == 1)
		return 1;
	else
		return 0;
}

int main() {
	const int SIZE = 20;
	int a[SIZE];
	int sum;
	srand(time(0));
	for(int i = 0; i < SIZE; i++) {
		a[i] = 1 + rand() % 100;
	}
	cout << "The prime numbers are: " << endl;

	sum = 0;
	for(int k = 0; k < SIZE; k++) {
		if(isPrime(a[k])) {
			cout << a[k] << endl;
			sum += a[k];
		}
	}

	cout << "Sum of prime numbers = " << sum << endl;
	return 0;
}