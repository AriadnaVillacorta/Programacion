#include <iostream>
using namespace std;

int main()
{
    int Num;

    cout << "Cuantos numeros quiere ingresar?";
    cin >> Num;

    int numeros[Num];
    for (int i = 0; i < Num; i++)
    {
        cout << "Ingrese los numeros en la posicion #" << (i + 1) << endl;
        cin >> numeros[i];
    }

    int result = 0;
    for (int i = 0; i < Num; i++)
    {

        result += numeros[i];
    }
    cout << "La suma de sus dijitos es: " << result << endl;
    return 0;
}