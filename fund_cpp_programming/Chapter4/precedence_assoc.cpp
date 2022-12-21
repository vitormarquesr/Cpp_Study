#include <iostream>

using namespace std;

int main(){
	int w, x, y, z;
	w = x = y = z = 10;

	cout << 5 * 3 + 2 << endl; //17
	cout << 5.0*3.0 + 4.0/2.0 << endl; //17
	cout << 5%3/2 << endl; //1

	cout << w << " " << x << " " << y << " " << z << endl;

	cout << (y = 30) << endl;

	cout <<  y << endl;
}
