#include <iostream>
#include <iomanip>
using namespace std;

void QB1_main();

void QB2_main();
void function0(int);
void function1(int &, int &);
void function2(int &, int &, int &);
void function3(int, int, int);

void QB3_main();
void printStars(int, int);

void QB4_main();
void changeArray(int *, int *);

void QB5_main();

class Number {
public:
	Number(float a) {
		digit = (int) a;
		decimal = (a - digit) * 100;
	}

	Number(int a, int b) {
		digit = a / b;
		decimal = ((float) a / b - digit) * 100;
	}

	void value() {
		cout << digit << "." << decimal << endl;
	}

private:
	int digit;
	int decimal;
};

int main()
{
	//QB1_main();

	//QB2_main();

	//QB3_main();

	//QB4_main();

	QB5_main();

	return 0;
}

void QB1_main()
{
	int count = 0, a = 4, b = 8;
	while ( a > 0 ) {
		for( int i = 0; i < a; i++) {
			cout << count << ' ';
			if( b < a ) break;
			else {
				b--;
				count++;
			}
		}
		cout << endl;
		a--;
	}
}

void QB2_main()
{
	int iA = 3, iB = 2, iC = 1;
	cout << iA << " " << iB << " " << iC << endl;
	function0(iA);
	cout << iA << " " << iB << " " << iC << endl;
	function1(iA, iB);
	cout << iA << " " << iB << " " << iC << endl;
	function2(iA, iB, iC);
	cout << iA << " " << iB << " " << iC << endl;
	function3(iA, iB, iC);
	cout << iA << " " << iB << " " << iC << endl;
}

void function0(int r) {
	r = r * r;
}

void function1(int &r, int &s) {
	r = 2;
	s = 4;
}

void function2(int &r, int &s, int &t) {
	s += s;
	t -= t;
	r = s - t;
}

void function3(int r, int s, int t) {
	r = s + t;
}

void QB3_main()
{
	int lines = 3;
	printStars(1, lines);
	cout << endl;
}

void printStars(int i, int lines) {
	int j;
	if( i <= lines )
	{
		cout << setw(lines - i + 1) << " ";

		for( j = 1; j <= i; j++)
			cout << " *";
		cout << endl;

		printStars(i+1, lines);

		if(i != lines)
		{
			cout << setw(lines - i + 1) << " ";
			for( j = 1; j <= i; j++ )
				cout << " *";
			cout << endl;
		}
	}
}

void QB4_main()
{
	int arrayR[3];
	int arrayS[6];
	int *arrayE = arrayR;
	int *arrayF = arrayS;

	arrayE[0] = 1;

	changeArray(arrayE, arrayF);

	cout << "arrayE: ";
	for(int i = 0; i < 2; i++)
		cout << arrayE[i] << " ";
	cout << endl;

	cout << "arrayF: ";
	for(int i = 0; i < 3; i++)
		cout << arrayF[i] << " ";
	cout << endl;
}

void changeArray(int *arrPtr1, int *arrPtr2) {
	for(int i = 1; i < 3; i++)
		*(arrPtr1 + i) = *(arrPtr1 + i - 1) + i;

	for(int i = 0; i < 3; i++) {
		*(arrPtr2 + i) = *(arrPtr1 + i) + 3;
		*(arrPtr2 + i + 3) = *(arrPtr1 + 2 - i) - 2;
	}
}

void QB5_main() {
	int a = 5, b = 2;
	Number n1(2.345);
	Number n2(2, 3);
	Number n3((float) a);
	Number n4(a, b);
	Number n5(b, a);

	n1.value();
	n2.value();
	n3.value();
	n4.value();
	n5.value();
}