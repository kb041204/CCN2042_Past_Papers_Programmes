#include <iostream>
#include <cstdlib>
using namespace std;

class Toy {
public:
	Toy(int a) {
		id = a;
		num = rand() % 10 + 1;
	}

	int secret() {
		return num;
	}

private:
	int id;
	int num;
};

int main() {
	Toy t1(1), t2(2);
	cout << "Toy 1 secret is " << t1.secret() << endl;
	cout << "Toy 2 secret is " << t2.secret() << endl;
	return 0;
}