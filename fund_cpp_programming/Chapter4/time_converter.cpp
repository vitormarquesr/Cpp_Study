#include <iostream>

using namespace std;

int main(){
	int hour, minutes, seconds;

	cout << "Seconds: ";
	cin >> seconds;

	hour = seconds/3600;
	seconds = seconds % 3600;

	minutes = seconds/60;
	seconds = seconds % 60;

	cout << hour << " Hours " << minutes << " Minutes " << seconds << " Seconds";

}

