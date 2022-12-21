#include <iostream>

using namespace std;

int main(){
	int hours, minutes, seconds, tmin, umin, tsec, usec;

	cout << "Seconds: ";

	cin >> seconds;


	hours = seconds/3600;
	seconds = seconds % 3600;

	minutes = seconds/60;
	seconds = seconds % 60;

	tmin = minutes/10;
	umin = minutes % 10;

	tsec = seconds/10;
	usec = seconds % 10;

	cout << hours << ":" << tmin << umin << ":" << tsec << usec << endl;

}
