#include <iostream>

using namespace std;

int main(){
	int x, y;

	cout << "Type x: ";
	cin >> x;

	cout << "Type y: ";
	cin >> y;

	if (x == y){
		cout << x << " == " << y << endl;
	}else if (x > y){
		cout << x << " > " << y << endl; 
		cout << "x greater than y!\n";
	}else if (x < y){
		cout << x << " < " << y << endl;
		cout << "x smaller than y\n";
	}

	cout << "That is it!" << endl;

}
