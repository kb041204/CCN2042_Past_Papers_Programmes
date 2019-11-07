#include <iostream>
#include <cstring>
using namespace std;

int getMatches(const char * a, const char * b, char * c) {
	int counter = 0;
	for(int i = 0; (*(a+i) != '\0' && *(b+i) != '\0'); i++) {
		if( *(a+i) == *(b+i)) {
			*(c+counter) = *(a+i);
			counter++;
		}
	}

	*(c + counter) = '\0';
	return counter;
}

int main() {
	const int MAXLEN = 80;
	char p[MAXLEN];
	char q[MAXLEN];
	char r[MAXLEN];
	int count;

	cout << "Enter the 1st strings: ";
	cin.getline(p, MAXLEN, '\n');
	cout << "Enter the 2nd strings: ";
	cin.getline(q, MAXLEN, '\n');

	count = getMatches(p, q, r);

	cout << "Number of match characters: ";
	cout << count << endl;
	if( count > 0 )
		cout << "Match characters: " << r;
	else
		cout << "No match characters found.";

	cout << endl;
	return 0;
}