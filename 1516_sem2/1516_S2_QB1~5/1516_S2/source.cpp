#include <iostream>
#include <cstring>
using namespace std;

void QB1_main();
void QB2_main();
void QB3_main();
void QB4_main();
int fR(int n);
void fnA(char *, int);

//===========Variable declaration===========
//------QB2------
int num = 0;
//------QB4------
char ball[][10] = { "BROWN", "RED", "ORANGE", "YELLOW", "GREEN", "PURPLE" };


class Gamer
{
public:
	Gamer(int k) {
		ptr = 1;
		id = k;
	}
	char draw_ball() {
		ptr = (ptr + id * 7 % 11) % 6;
		return ball[ptr][0];
	}
private:
	int ptr;
	int id;
};


int main()
{
	
	//QB1_main();
	
	
	//QB2_main();
	

	//QB3_main();


	QB4_main();


	return 0;
}

void QB1_main()
{
	int result;
	int a = 3, b = 7, c = 12;
	int x, y, z;

	result = 0;
	do {
		result += 3;
		a += 4;
	} while (a <= 25);
	cout << a << "/" << result << endl;

	result = 0;
	for (x = c; x >= b; x -= 2) {
		switch ( x % 3 ) {
		case 0: result += 2;
		case 1: result += 4;
		case 2: result += 6;
		}
	}
	cout << x << "/" << result << endl;

	result = 0;
	for(y = 1; y <= b; y++) {
		z = 0;
		if( y % 5 == 0 ) break;
		else if ( y % 3 == 0) continue;
		while (z < c) {
			result++;
			z += 4;
		}
	}
	cout << y << "/" << result << endl;
}

void QB2_main()
{
	cout << fR(12) << endl;
}

int fR(int n)
{
	if(n <= 3) return n;

	switch(n % 2) {
	case 0: num += fR(n - 1); break;
	case 1: num += fR(n - 3); break;
	}

	cout << num << " ";
	return (num + n);
}

void QB3_main()
{
	char str[] = "PROGRAMOBJS";

	int x = 6;
	do {
		fnA( str + x, x);
		cout << str + x << endl;
		x--;
	} while (x > 0);
}

void fnA(char * ptr, int j)
{
	int k = strlen(ptr)/2, i = 0;

	while(i < k)
	{
		*ptr = *(ptr + j % k);
		ptr++;
		i += 2;
	}
}

void QB4_main()
{
	Gamer gW(1), gX(3), gY(5), gZ(7);
	char w = gW.draw_ball(), x = gX.draw_ball();
	char y = gY.draw_ball(), z = gZ.draw_ball();
	char special = w;
	int i = 0;

	cout << "gW: " << w << endl << "gX: " << x << endl;
	cout << "gY: " << y << endl << "gZ: " << z << endl;

	if(x > special) special = x;
	if(y > special) special = y;
	if(z > special) special = z;

	for(; i < 6; i++)
		if(ball[i][0] == special) break;

	cout << ball[i] << " is special!" << endl;
}