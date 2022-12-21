#include <iostream>

using namespace std;

int main(){
	enum Dias {Domingo, Segunda, Terca, Quarta, Quinta, Sabado};

	int x{30};
	Dias dia;
	dia = Domingo;

	cout << x << endl;

	cout << dia << '\n';

	//dia = Sexta;
	dia = Quinta;
	cout << dia << '\n';
}

