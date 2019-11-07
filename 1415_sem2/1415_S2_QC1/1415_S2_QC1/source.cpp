#include <iostream>
using namespace std;

void calc(float n1, float n2, char op, float & a) {
	switch(op) {
	case '+': a = n1+n2; break;
	case '-': a = n1-n2; break;
	case '*': a = n1*n2; break;
	case '/': a = n1/n2; break;
	}
}

int main() {
	float n1, n2, ans;
	char op;

	do {
		cout << "Enter equation: ";
		cin >> n1 >> op >> n2;

		if(!(op == '+' || op == '-' || op == '*' || op == '/'))
			cout << "Incorrect operator" << endl;
	} while (!(op == '+' || op == '-' || op == '*' || op == '/'));

	calc(n1, n2, op, ans);

	cout << "The answer is " << ans << endl;
	return 0;
}