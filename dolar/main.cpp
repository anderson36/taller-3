#include <iostream>

using namespace std;

int main()
{
	int cantidad_dolares;
	int resultado;
	int valor_dolar;
	cout << "ingrese el valor del dolar" << endl;
	cin >> valor_dolar;
	cout << "ingrese la cantidad de dolares" << endl;
	cin >> cantidad_dolares;
	resultado = valor_dolar*cantidad_dolares;
	cout << "total de dinero en dolares = " << resultado << endl;
	return 0;
}
