#include <iostream>
using namespace std;

const int NUMMSG = 3;

int strLength(char s[]) {
	for(int i = 0; ; i++) {
		if( s[i] == '\0' )
			return i;
	}
}

int main()
{
	char * msg[NUMMSG] = {"CCN2042 Computer Programming ",
		"aims to provide students with the practical skills of ",
		"computer programming in the context of problem solving." };

	for(int i = 0; i < 3; i++) {
		cout << "Length of message " << i << " is: " << strLength(msg[i]) << endl;
	}

	return 0;
}