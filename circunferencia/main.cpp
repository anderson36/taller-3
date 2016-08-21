#include <iostream>

using namespace std;

int main()
{

    float area;
    float diametro;
    float longitud;
    float pi;
    float radio;
        cout <<" ingresar el valor del radio" <<endl;
        cin >> radio;
        pi=3.1416;
        area=pi*radio*radio;
        diametro=2*radio;
        longitud=2*pi*radio;
        cout << "Circuferenca con radio es " << radio << endl;
        cout << "Area de la circuferencia es " << area << endl;
        cout << "Longitud de la circuferencia es " << longitud << endl;
        cout << "Diametro de la circuferencia es " << diametro << endl;
    return 0;
}
