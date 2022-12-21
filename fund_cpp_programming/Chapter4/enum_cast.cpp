#include <iostream>

using namespace std;

int main(){
	enum Dias{Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

	Dias dia = Segunda;
	Dias dia1 = Terca, dia2 = Domingo;

	int x = 2;

	cout << "x = " << x << endl;

	cout << "Dia = " << dia << endl;

	x = dia + x;

	cout << "x_new = " << x << endl;

	dia  = static_cast<Dias>(dia + x);

	cout << "Dia = " << dia << endl;

	dia = static_cast<Dias>(dia1 + dia2);

	cout << "Dia = dia1 + dia2 = " << dia << endl;

	x = dia1;

	cout << "x = " << x << endl;
}

