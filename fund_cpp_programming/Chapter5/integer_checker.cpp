#include <iostream>

using namespace std;

int main(){
	double x;
	int x_int;

	// Check if x is an integer

	cout << "Type an arbitrary decimal number:";

	cin >> x;

	x_int = static_cast<int>(x);

	/* x is double, x_int is integer. Double is dominant over int.
	So x_int will be converted to double on the evaluation process.
	If there is no decimal part, it will evaluate to true*/

	if (x_int == x){
		cout << "x = " << x << " is an integer!";
	}else{
		cout << "x = " << x << " is a float!";
	}

	cout << endl;
}


