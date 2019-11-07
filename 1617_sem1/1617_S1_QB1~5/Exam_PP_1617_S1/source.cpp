//Common part, DO NOT MODIFY
#include <iostream>
using namespace std;

void QB1_main();
void QB2_main();
void QB3_main();
void QB4_main();
void QB5_main();

void f(int a, int &b);
int g(int &c, int d);
void strange(int [], int, int *);
void fn(int, int);

//===========Global variable(s) declaration===========
/*
//------QB2------
int x = 3;
int y = 10;

//------QB4------
int n = 1;
*/
//------QB5------
int num = 0;

/*
class Box {
public:
	Box() {
		id = n++;
		setDimension(2, 4, 6);
	}

	Box(double len, double w, double h) {
		id = n++;
		if( len < 0 || w < 0 || h < 0)
			setDimension(1, 1, 1);
		else
			setDimension(len, w, h);
	}

	int getID() {	return id;	}

	double calcVolume() {	return length * width * height;	}

private:
	int id;
	double length, width, height;
	
	void setDimension(double len, double w, double h) {
		length = len;
		width = w;
		height = h;
	}
};
*/

int main()
{
	/*
	QB1_main();
	
	
	QB2_main();
	

	QB3_main();
	

	QB4_main();
	*/

	QB5_main();


	return 0;
}
/*
void QB1_main()
{
	int numA = 0, numB = 0, numC = 0;
	int sumA = 0, sumB = 0, sumC = 0;

	for(numA = 0; numA < 10; numA++)
	{
		if(numA % 2 == 0)
			sumA += numA;
		else
			sumA -= numA;
	}
	cout << numA << " " << sumA << endl;

	while(numB < 5)
	{
		numB += 2;
		do
		{
			sumB += numB;
		}
		while (sumB < 10);
	}
	cout << numB << " " << sumB << endl;

	while(sumC < 30)
	{
		sumC += numC;
		if (sumC > 20) continue;
		if(numC > 10) break;
		numC++;
	}
	cout << numC << " " << sumC << endl;
}

void QB2_main()
{
	int x = 5, z = 7;
	f(x, z);
	cout << x << endl;
	cout << g(x, y) << endl;
	cout << x << " " << y << " " << z << endl;
}

void f(int a, int &b)
{
	int x = 4;
	b = a + x;
	a = 8;
	cout << x << endl;
}

int g(int &c, int d)
{
	int y = 4;
	c = x + y;
	return y * d;
}

void QB3_main()
{
	int num[] = {3, 7, 4, 6, 0, 1, 2, 3};
	int *p;

	for(int n = 0; n < 8; n += 2) {
		p = num + n;
		strange(num, n, p);
	}

	for(int n = 1; n <= 5; n++)
		cout << num[n] << " ";

	cout << *p;
}

void strange(int num[], int n, int *p) {
	for(int i = n; i < 8; i++) {
		num[i] += *p;
		p++;
	}
}

void QB4_main()
{
	Box A, B(7, 2, 4), C(1, 0, -1);
	cout << A.calcVolume() << endl;
	cout << B.calcVolume() << endl;
	cout << C.calcVolume() << endl;

	for(int i = 2; i <= 4; i++) {
		Box X(i, i+1, i+2);
		cout << "Box " << X.getID() << ": " << X.calcVolume();
		cout << endl;
	}
}
*/

void QB5_main()
{
	fn(3, 5);
}

void fn(int a, int b) {
	num = num + a;
	cout << a << ": " << num << endl;

	switch(b % a) {
	case 1: fn(a, b + 1); break;
	case 2: fn(a - 1, b); break;
	}

	num = num + b;
	cout << b << ": " << num << endl;
}