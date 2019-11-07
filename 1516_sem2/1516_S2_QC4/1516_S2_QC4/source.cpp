#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Intlclock {
public: 
	Intlclock (char loc[], int time_diff) {
		for(int i = 0; i < 50; i++)
			location[i] = loc[i];
		time_difference = time_diff;
	}

	char * get_location() {
		return location;
	}

	int get_hour(int hour) {
		int hour_returned = hour + time_difference;
		if(hour_returned < 0)
			hour_returned += 24;
		if(hour_returned > 23)
			hour_returned -= 24;
		return hour_returned;
	}

private:
	char location[50];
	int time_difference;
};
int main()
{
	int local_hour, local_minute;

	Intlclock clock1( "New York", -13);
	Intlclock clock2( "Sydney", +3);

	cout << "Enter the time (hh mm): ";
	cin >> local_hour >> local_minute;

	cout << setfill('0');
	cout	<< "Local time is " << setw(2) << local_hour << ":"
			<< setw(2) << local_minute << endl;
	cout	<< clock1.get_location() << " time is "
			<< setw(2) << clock1.get_hour(local_hour) << ":"
			<< setw(2) << local_minute << endl;
	cout	<< clock2.get_location() << " time is "
			<< setw(2) << clock2.get_hour(local_hour) << ":"
			<< setw(2) << local_minute << endl;

	return 0;
}
