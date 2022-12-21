#include <iostream>

using namespace std;

int main(){
	double r, area, volume;
	const double PI = 3.14;

	cout << "Type the radius of the sphere ";
	cin >> r;

	volume = (4.0/3.0)*PI*r*r*r;
	area = 4*PI*r*r;

	cout << "Area = " << area << endl;
	cout << "Volume = " << volume << endl;
}


