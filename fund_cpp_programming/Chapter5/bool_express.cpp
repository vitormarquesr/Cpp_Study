#include <iostream>

using namespace std;

int main(){
	int x;
	double y;

	cout << "Insert x y" << endl;

	cin >> x >> y;

	cout << "x = " << x << " y = " << y << endl;
	/* I guess since double is the dominant type,
	 x wil be converted to double*/
	cout << (x == y) << endl;


}

