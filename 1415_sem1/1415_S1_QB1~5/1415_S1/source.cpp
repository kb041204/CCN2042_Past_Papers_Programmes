#include <iostream>
#include <cstring>
using namespace std;

void QB1_main();
void QB2_main();
int fn(int, int &);

void QB3_main();
bool nextPosition(int, int);

void QB4_main();

void QB5_main();
void strange(char * const, const int, const int);

//===========Variable declaration===========
//------QB2------
int a = 2;
//------QB3------
int array[3][3] = {};
int value = 1;
//------QB4------
int n = 1;

class Shape {
public:
	Shape(float a, float b) {
		id = n++;
		s1 = a;
		s2 = b;
	}

	void newId() {
		id = n++;
	}

	float area() {
		float a = 0.0;
		switch(id % 2) {
		case 0: a = s1 * s2; break;
		case 1: a = s1 * s2 / 2; break;
		}
		return a;
	}

private:
	int id;
	float s1, s2;
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
	const int X = 2;
	const int Y = 4;
	int numA = 0, numB = 0, numC = 10;
	int a, b, c;

	a = 5;
	do {
		numA += 4;
		a--;
	} while (a >= 0);
	cout << numA << endl;

	for (int i = 1; i <= X; i++) {
		for (int j = 1; j <= Y; j++) {
			if(i % 2 == 0) numB = numB + i;
			else numB = numB + j;
		}
		cout << numB << " ";
	}
	cout << endl;

	b = 14;
	c = 0;
	while(b > 0) {
		b /= 2;
		numC -= 3;
		if (b % 3 == 0) continue;
		if (c == 2) break;
		cout << numC << " ";
		c++;
	}
	cout << endl;
}

void QB2_main()
{
	int a = 5, b = 6, c = 7;
	cout << fn(a, b) << endl;
	cout << fn(b, c) << endl;
	cout << a << ' ' << b << ' ' << c << endl;
}

int fn(int b, int &c) {
	b *= a;
	c *= a;
	a *= 2;
	return b + c;
}

void QB3_main()
{
	if( nextPosition(2, 2) )
		cout << "True" << endl;
	else
		cout << "False" << endl;

	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j)
			cout << array[i][j] << " ";
		cout << endl;
	}
}

bool nextPosition(int x, int y) {
	if( x < 0 || y < 0) return false;

	array[x][y] = value;
	value++;

	if( nextPosition(x-2, y-1))
		return true;
	else if( nextPosition(x-1, y-1))
		return true;
	else
		return false;
}

void QB4_main()
{
	Shape s1(3, 4), s2(3, 5);
	cout << s1.area() << endl;
	cout << s2.area() << endl;

	s1.newId();
	cout << s1.area() << endl;

	Shape s3(5, 5);
	s2.newId();
	cout << s2.area() << endl;
	cout << s3.area() << endl;
}

void QB5_main()
{
	char arr[] = "98765";
	int index[] = {4, 0, 2};
	cout << arr << endl;
	cout << arr + 2 << endl;
	for(int i = 0; i < 3; i++) {
		strange(arr, index[i], strlen(arr));
		cout << arr << endl;
	}
}

void strange(char * const p, const int a, const int size)
{
	for(int i = a; i < size; i++) {
		*(p + i) = *( p + i ) - 1;
	}
}