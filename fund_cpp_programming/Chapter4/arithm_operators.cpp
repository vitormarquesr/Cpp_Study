#include <iostream>

using namespace std;

int main(){
	int x=3, y=8;

	cout << "x = " << x << " y = " << y << endl;

	x++;
	y++;

	cout << "x = " << x << " y = " << y << endl;

	y = ++x;

	cout << "x = " << x << " y = " << y << endl;

	y = x++;

	cout << "x = " << x << "y = " << y << endl;

}
