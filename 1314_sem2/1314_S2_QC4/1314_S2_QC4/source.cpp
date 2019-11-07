#include <iostream>
using namespace std;

int main()
{
	char str[] = "C++ Is Interesting";
	int count = 0;
	char *sPtr;

	sPtr = str;
	for(int i = 0; i < 19; i++) {
		if( *(sPtr + i ) == ' ' )
			count++;
	}

	for(int i = 0; i < 19; i++ ) {
		if( *(sPtr + i) == ' ') {
			for(int j = i; j < 18; j++) {
				*(sPtr + j ) = *(sPtr + j + 1);
			}
		}
	}

	cout << count << " space(s) removed: " << str << endl;
	return 0;
}