#include <iostream>
#include <cstring>
using namespace std;

class Account {
public: 
	Account() { balance = 0; }
	Account(int a) { balance = a; }

	void credit(int s) {
		balance += s;
	}

	void debit(int s) {
		balance -= s;
		if(balance <= 0) balance = 0;
	}

	int getBalance() {
		return balance;
	}

private:
	int balance;
};

void QB1_main();
//int fn(int, int &);

void QB2_main();
int f(int, int);

void QB3_main();
void fn(char *, int);

void QB4_main();
void transfer(Account &, Account &, int);

//===========Variable declaration===========
//------QB1------
int x = 5;


int main()
{
	
	//QB1_main();
	
	
	//QB2_main();
	

	//QB3_main();
	
	
	QB4_main();
	
	
	return 0;
}

/*
void QB1_main()
{
	int x = 10, y = 20, z = 30;

	z = fn(x, y);
	cout << x << " " << y << " " << z << endl;

	x = fn(y, z);
	cout << x << " " << y << " " << z << endl;
}

int fn(int a, int & b) {
	a += b += x;
	return a;
}
*/

void QB2_main()
{
	int x = 5, y = 1;
	cout << f(x, y) << endl;
}

int f(int a, int b)
{
	int c;
	if (a <= 1) return b;
	else {
		cout << a << "-";
		switch(a % 3) {
		case 0: c = f(a - 1, b + 1); break;
		case 1: c = f(a - 2, b + 1); break;
		default: c = f(a - 1, b + 1) + f(a - 2, b + 1); break;
		}
	}
	return c;
}

void QB3_main()
{
	char c[] = "CCN2042";

	for(int i = 0; i < 4; i++) {
		fn(c + i, i);
		cout << c + i << endl;
	}

	cout << c << endl;
}

void fn(char * cPtr, int n) {
	int m = strlen(cPtr) / 2;

	for(int i = 0; i < m; i++) {
		*cPtr = *(cPtr + n % m);
		cPtr++;
	}
}

void QB4_main()
{
	Account a1, a2(2000), a3(500);
	cout << "a1: " << a1.getBalance() << endl;
	cout << "a2: " << a2.getBalance() << endl;

	transfer(a3, a2, 200);
	cout << "a2: " << a2.getBalance() << endl;
	cout << "a3: " << a3.getBalance() << endl;

	transfer(a3, a1, 500);
	cout << "a1: " << a1.getBalance() << endl;
	cout << "a3: " << a3.getBalance() << endl;
}

void transfer(Account &a, Account &b, int s) {
	if(a.getBalance() <= s) s = a.getBalance();
	a.debit(s);
	b.credit(s);
}