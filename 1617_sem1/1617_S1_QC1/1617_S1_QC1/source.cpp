#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char *str = new char [100];
	int count = 0;

	cout << "Input a sentences: ";
	str = "c++   proGRAMMinG   IS     inTEREsTinG";

	for(int i = 0; i < strlen(str) - 1; i++) {
		if( *(str+i) == ' ') {
			if( *(str+i+1) == ' ') {
				for(int j = i; j < strlen(str) - 1; j++) {
					*(str+j) = *(str+j+1);
				}
				i--;
			}
		}
	}

	bool firstletter = 1;
	for(int i = 0; *(str+i) != '\0'; i++) {
		if( *(str+i) == ' ')
			firstletter = 1;

		if( firstletter == 1 && *(str+i) != ' ') {
			if( 'a' <= *(str+i) && *(str+i) <= 'z') {
				*(str+i) = (char) *(str+i) - 32;
				firstletter = 0;
			}
		}

		if(firstletter == 0) {
			if( 'A' <= *(str+i) && *(str+i) <= 'Z')
				*(str+i) = *(str+i) + 32;
		}
	}

	cout << "After formatting: " << str;
	return 0;
}