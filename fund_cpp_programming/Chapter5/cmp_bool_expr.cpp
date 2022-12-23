#include <iostream>

using namespace std;

int main(){
	int x, y;

	cout << "Type an integer value: x, y: ";

	cin >> x >> y;

	cout << "!x, !y: " << !x << ", " << !y << endl;

	if (x == y){
		cout << "x == y" << endl;
	}
	if (x != y){
		cout << "x != y" << endl;
	}

	if ((1 <= x)  && (x <= 10)){
		cout << " 1 <= x <= 10 !" << endl;
	}

	if ((x >= 10) && (y >= 10)){
		cout << "x >= 10 and y >= 10" << endl;
	}

}

