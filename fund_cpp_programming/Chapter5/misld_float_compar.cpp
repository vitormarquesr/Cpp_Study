#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double d1 = 3.11 - 3.09, d2 = 4.11 - 4.09;

	cout << "d1 = " << d1 << " d2 = " << d2 << endl;

	cout << "d1 == d2:  " << (d1 == d2) << endl;

	cout << "d1 =" << setprecision(20) << d1 << endl;
	cout << "d2 = " << setprecision(20) << d2 << endl;

}
