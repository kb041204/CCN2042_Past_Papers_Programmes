#include <iostream>
using namespace std;

const int MAXSIZE = 50;

class Stack {
public:
	Stack() {
		top = 0;
	}
	void push(int num) {
		elements[top] = num;
		top++;
	}
	int pop() {
		if(top != 0) {
			int temp = elements[top-1];
			elements[top-1] = 0;
			top--;
			return temp;
		}
	}
	bool isEmpty() {
		for(int i = 0; i < top; i++) {
			if(elements[i] != 0)
				return 0;
		}
		return 1;
	}
private:
	int elements[MAXSIZE];
	int top;
};

int main()
{
	Stack s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.pop();
	s.pop();
	s.push(5);
	s.push(6);
	cout << "Pop out each elements from stack:" << endl;
	while(!s.isEmpty()) {
		cout << s.pop() << endl;
	}
	return 0;
}