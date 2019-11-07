#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char * const str)
{
	int head = 0, tail;
	tail = strlen(str) - 1;
	bool NotPali = 0;

	for(int i = 0; i < strlen(str)/2 ; i++)
	{
		if( *(str+i) != *(str + (tail-i)) )
		{
			NotPali = 1;
		}
	}
	if(NotPali == 1)
		return 0;
	else
		return 1;
}

int main()
{
	char str1[100];

	cout << "Input a string: ";
	cin >> str1;

	if(isPalindrome(str1))
		cout << str1 << " is a palindrome" << endl;
	else
		cout << str1 << " is NOT a palindrome" << endl;

	return 0;
}