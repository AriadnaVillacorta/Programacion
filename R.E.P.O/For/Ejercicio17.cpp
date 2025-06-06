#include <iostream>
using namespace std;

int main()
{
    int perfectos, suma = 0, encontrados = 0;

    cout << "Ingrese la cantidad de numeros perfectos que desees";
    cin >> perfectos;

    for (int numero = 2; encontrados < perfectos; numero++)
    {
 int suma = 0; 
        for (int i = 1; i < numero; i++)
        {
           
            if (numero % i == 0)
            {
                suma += i;
            }
        }

        if (suma == numero)
        {
            cout << "Numero perfecto encontrado " << numero<< endl;
            encontrados++;
        }
    }

   cout << "Se encontraron " << encontrados << " numeros perfectos." << endl;

    return 0;
}