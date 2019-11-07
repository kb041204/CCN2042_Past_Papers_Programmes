#include <iostream>
using namespace std;

bool health(float weight, float height, float & bmi)
{
	bmi = weight / (height*height);
	if(bmi < 25)
		return 1;
	else
		return 0;
}

int main()
{
	float w, h, bmi;
	cout << "Input your weight (kg): ";
	cin >> w;
	cout << "Input your height (m): ";
	cin >> h;

	if(health(w, h, bmi))
		cout << "Healthy, BMI = " << bmi << endl;
	else
		cout << "Overweight, BMI = " << bmi << endl;

	return 0;
}