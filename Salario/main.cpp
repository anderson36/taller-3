#include <iostream>

using namespace std;

int main()
{
    int horasdiurnas;
	int horasdominical;
	int horasfestivos;
	int horasnocturnas;
	float vhoras;
	float vhorasdiurnas;
	float vhorasnocturnas;
	float vhoradominical;
	float vhorafestivo;
	float vsalario;
	cout << "ingresar numero de horas diurnas" << endl;
	cin >> horasdiurnas;
	cout << "ingresar el numero de horas nocturnas" << endl;
	cin >> horasnocturnas;
	cout << "ingresar el numero de horas dominicales" << endl;
	cin >> horasdominical;
	cout << "ingresar el numero de horas festivos" << endl;
	cin >> horasfestivos;
	vhoras = 2500;
	vhorasdiurnas = vhoras*horasdiurnas;
	vhorasnocturnas = vhoras*1.35*horasnocturnas;
	vhoradominical = vhoras*1.50*horasdominical;
	vhorafestivo = vhoras*1.75*horasfestivos;
	vsalario = vhorasdiurnas+vhorasnocturnas+vhoradominical+vhorafestivo;
	cout << "valor de horas " << vhoras << endl;
	cout << "valor de horas diurnas " << vhorasdiurnas << endl;
	cout << "valor de horas nocturnas " << vhorasnocturnas << endl;
	cout << "valor de horas dominicales " << vhoradominical << endl;
	cout << "valor de horas festivos " << vhorafestivo << endl;
	cout << "total salario " << vsalario << endl;
    return 0;
}
