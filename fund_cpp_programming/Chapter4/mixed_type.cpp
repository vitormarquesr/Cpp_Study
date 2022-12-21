#include <iostream>

using namespace std;

int main(){
	double d = 30.7;
	int a = 20;

	cout << "d = " << d << endl;
	cout << "a = " << a << endl;

	// Narrowing

	a = static_cast<int>(d);

	cout << "Narrowing a = " << a << endl;

	// Widening
	d = a;

	cout << "Widening d = " << (a + d + 3.5) << endl;

}