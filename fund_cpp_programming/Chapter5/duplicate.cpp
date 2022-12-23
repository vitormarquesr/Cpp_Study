#include <iostream>

using namespace std;

int main(){
	int x1, x2, x3, x4, x5;

	cout << "Type five numbers: ";
	cin >> x1 >> x2 >> x3 >> x4 >> x5;

	if (x1 == x2 ||  x1 == x3 || x1 == x4 || x1 == x5){
		cout << "Duplicate!" << endl;
	}else if (x2 == x3 || x2 == x4 || x2 == x5){
		cout << "Duplicate!" << endl;
	}else if (x3 == x4 || x3 == x5){
		cout << "Duplicate!" << endl;
	}else if (x4 == x5){
		cout << "Duplicate!" << endl;
	}else{
		cout << "All distinct!" << endl;
	}

}