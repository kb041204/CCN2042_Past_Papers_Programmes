#include <iostream>
using namespace std;

void QB1_main();
void QB2_main();
void fn(int);

void QB3_main();
void update(char *const, const int);

void QB4_main();

class Rectangle
{
public:
	Rectangle() {
		area = width = length = 0;
	}
	void increaseSize(int x, int y) {
		length += x;
		width += y;
	}
	void calculateArea() {
		area = length * width;
	}
	int getArea() {
		return area;
	}

private:
	int length;
	int width;
	int area;
};

//===========Variable declaration===========
//------QB2------
int num = 0;

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
	int a = 1, b = 9, c = 7;
	int result = 0;

	for(int i = a; i <= b; i += 2) {
		result += 4;
	}
	cout << result << "/" << result / 3 << endl;

	result = 5;
	while (a < b) {
		if(a % 3 == 0) result *= result;
		else result -= 1;
		a++;
	}
	cout << a << "/" << result << endl;

	result = 0;
	for(int i = 1; i <= b; i++) {
		if(i >= 3 && i <= 6) continue;
		do {
			result++;
			c--;
		} while (c >= 5);
	}
	cout << ++b << "/" << result << endl;
}

void QB2_main()
{
	int num = 5;
	fn(num);
	cout << num << endl;
}

void fn(int x) {
	if(x <= 0)
		return;

	fn(x - 1);

	cout << x << ": " << num << endl;
	num += x;
}

void QB3_main()
{
	char msg[] = "C++PROGRAMMING";
	update(msg, strlen(msg)-1);
	cout << msg + 2 << endl;
}

void update(char * const ptr, const int size)
{
	char ch;
	int control = size;

	do {
		control /= 2;
		for(int i = control; i > 0; i -= 2) 
		{
			ch = *(ptr + i);
			*(ptr + i) = ptr[size - i];
			ptr[size - i] = ch;
		}
	} while (control > 1);
}

void QB4_main()
{
	Rectangle r1, r2;
	for(int i = 1; i < 8; i++) {
		if( i % 2 != 0) r1.increaseSize(1, 3);
		else r2.increaseSize(2, 3);
		r1.calculateArea();
		r2.calculateArea();
		if(i % 2 != 0)
			cout	<< "r1: " << r1.getArea() << ", "
					<< "r2: " << r2.getArea() << endl;
	}
	cout	<< (r1.getArea() > r2.getArea() ? "r1":"r2")
			<< " is bigger than the other one\n";
}