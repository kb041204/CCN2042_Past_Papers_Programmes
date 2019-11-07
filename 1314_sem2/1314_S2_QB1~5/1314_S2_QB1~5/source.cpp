#include <iostream>
#include <string>
using namespace std;

//---------GLOBAL VARIABLES---------
//-----Q2-----
int b = 10, c = 0;
//-----Q4-----
char card[] = {'A', 'K', 'Q', 'J'};

void QB1_main();

void QB2_main();
int fA(int &);
void fB(int);

void QB3_main();
int fn(int);

void QB4_main();

void QB5_main();
void strange(char * const, const int, const int);

class player {
public:
	player() {
		index = 0;
		pattern = 1;
	}
	player(int x) {
		index = 1;
		pattern = x;
	}
	char get_card() {
		index = (index + pattern) % 4;
		return card[index];
	}

public:
	int index;
	int pattern;
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
	int x = 10, y = 1, num = 0;

	for (int i = 0; i < x; i += 2) {
		while ( x > y ) {
			num = num + x;
			cout << num << " ";
			if(y++ >= 2) break;
		}
		num = num + y;
		cout << num << endl;
		x -= 5;
	}
}

void QB2_main()
{
	int a = 1;
	for(int i = a; i <= b; i++)
		c = fA(a);
	cout << a << " " << b << " " << c << endl;
	fB(c);
}

int fA(int &a) {
	a = a + 3;
	return a / 2;
}

void fB(int b) {
	b = b + 10;
	cout << b << " " << c << endl;
}

void QB3_main()
{
	cout << fn(5) << endl;
}

int fn(int iA) {
	if (iA <= 1) return 1;
	else if (iA % 2 == 0) {
		for (int i = 0; i < iA; i++)
			cout << "*";
		cout << endl;
		return 2;
	}
	else {
		cout << iA << endl;
		return fn(iA - 2) + fn(iA - 1) + 3;
	}
}

void QB4_main()
{
	player p1, p2(1), p3(2), p4(3);
	char	c1 = p1.get_card(), c2 = p2.get_card(),
			c3 = p3.get_card(), c4 = p4.get_card();
	c3 = p3.get_card();

	cout << "p1: " << c1 << endl << "p2: " << c2 << endl;
	cout << "p3: " << c3 << endl << "p4: " << c4 << endl;

	if		(c1 > c2 && c1 > c3 && c1 > c4)		cout << "p1 win" << endl;
	else if (c2 > c1 && c2 > c3 && c2 > c4)		cout << "p2 win" << endl;
	else if	(c3 > c1 && c3 > c2 && c3 > c4)		cout << "p3 win" << endl;
	else if (c4 > c1 && c4 > c2 && c4 > c3)		cout << "p4 win" << endl;
	else										cout << "No one win" << endl;
}

void QB5_main()
{
	char arr[] = "012345";
	cout << arr << endl;
	int index[] = {3, 0, 2};
	for(int i = 0; i < 3; i++) {
		strange(arr, index[i], strlen(arr));
		cout << arr << endl;
	}
}

void strange(char * const p, const int a, const int size) {
	char c = *(p + a);
	for(int i = a + 1; i < size; i++ ) {
		*( p + i - 1 ) = *(p + i);
	}
	*(p + size - 1) = c;
}