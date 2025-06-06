#include <iostream>
using namespace std;

int main()
{
    int opcion, cm, metros, km, pulgadas, pies, millas;

    cout << "Ingrese la opcion la cual le gustaria convertir?" << endl;
    cout << "1. cm a pulgadas" << endl;
    cout << "2. metros a pies" << endl;
    cout << "3. km a millas" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Por favor ingrese la cantidad en cm";
        cin >> cm;
        pulgadas = cm * 0.393701;
        cout << "La conversion de cm a pulgadas es: " << pulgadas <<" pulgadas"<< endl;
        break;
    case 2:
         cout << "Por favor ingrese la cantidad en metros";
        cin >> metros;
        pies = metros * 3.28084;
        cout << "La conversion de metros a pies es: " << pies <<" pies"<< endl;
        break;
    case 3:
         cout << "Por favor ingrese la cantidad en km";
        cin >> km;
        millas = km * 0.621371;
        cout << "La conversion de metros a millas es: " << millas <<" millas"<< endl;
        break;

    default:
        break;
    }
}