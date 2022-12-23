#include <iostream>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;

	if (y != 0 && static_cast<double>(x)/y > 1){
		cout << "x/y > 1" << endl;
	}else{
		cout << "Either y == 0 or x/y <= 1" << endl;
	}
}