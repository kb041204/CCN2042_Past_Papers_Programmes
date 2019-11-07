#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const float PI = 3.141592654;
const float G = 9.8;

class Game {
public:
	Game() {
		x = rand() % 50 + 50;
		y = rand() % 50 + 50;
		cout << "Target is at (" << x << ", " << y << ")" << endl;
	}
	
	bool hit(float velocity, float radian) {
		float t;
		t = x / (velocity * cos(radian));
		if( y == (velocity * sin(radian) * t - G * t * t / 2.0))
			return 1;
		else
			return 0;
	}

private:
	int x, y;
};

int main() {
	Game play;
	float v, angle;

	cout << "Velocity (m/s): "; cin >> v;
	cout << "Angle (degree): "; cin >> angle;

	if(play.hit(v, angle * PI / 180))
		cout << "Hit the target, you win.\n";
	else
		cout << "You miss the target.\n";

	return 0;
}