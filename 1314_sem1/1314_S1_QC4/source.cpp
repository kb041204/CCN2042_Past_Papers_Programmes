#include <iostream>
using namespace std;

int main() {
	const int WORD_NUM = 5, WORD_LEN = 10;
	char words[WORD_NUM][WORD_LEN] = 
		{"happy", "Iron Man", "ccn2042", "c++", "gpa = 4.0" };
	char *ptr;

	for(int i = 0; i < WORD_NUM; i++) {
		ptr = words[i];
		for(int j = 0; *(ptr + j) != '\0'; j++) {
			if ('a' <= *(ptr + j) && *(ptr + j) <= 'z')
				*(ptr + j) = (char) (*(ptr + j) - 32);
		}
	}

	for(int i = 0; i < WORD_NUM; i++)
		cout << words[i] << endl;

	return 0;
}