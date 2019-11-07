#include <iostream>
using namespace std;

int main() {
	char msg[] = "COMPUTER PROGRAMMING";
	int count = 0;
	char *ptr;

	ptr = msg;
	for(int i = 0; i < 20; i++)
	{
		if( *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) == 'I' || *(ptr+i) == 'O' || *(ptr+i) == 'U')
			count++;
	}

	bool end = 0;
	int done = 0;
	for(int i = 0; done != count; i++)
	{
		if( *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) == 'I' || *(ptr+i) == 'O' || *(ptr+i) == 'U')
		{
			for(int j = i; j < 20; j++)
			{
				if( *(ptr+j) == '\0' )
					break;
				*(ptr+j) = *(ptr+j+1);
				done++;
			}
		}
	}

	cout << count << " vowel(s) removed. The new message: "
		<< msg << endl;

	return 0;
}