#include <iostream>

using namespace std;

int main(){
	int a, b;
	int c = 30;

	cout << "c = " << c << endl;

	a = 15;

	cout << "a = " << a << endl;

	b = c;

	cout << "b = " << b << endl;

	b = b + 10;
	cout << "b = " << b << " c = " << c << endl;

}
