#include <iostream>

using namespace std;

int main()
{
    float altura;
	float area;
	float base;
	cout << "ingrese la base" << endl;
	cin >> base;
	cout << "ingrese la altura" << endl;
	cin >> altura;
	area = (base*altura)/2;
	cout << "La base del triangulo es " << base << endl;
	cout <<" La altura del triangulo es " << altura << endl;
	cout << "El area del triangulo es " << area << endl;
	cout << " Grafica del triangulo" << endl;
	cout << "*\n**\n***\n****\n*****"<<endl;
	return 0;
}
