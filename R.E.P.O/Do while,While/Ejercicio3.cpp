#include <iostream>
using namespace std;

int main()
{
    int numero = 28;
    int adivinar;

    cout << "**Adivine el numero**"<<endl;

    while (adivinar != numero)
    {

        cout << "Ingrese un numero";
        cin >> adivinar;

        if (adivinar > numero)
        {
            cout << "El numero es mayor que el numero a adivinar"<<endl;
        }
        else if (adivinar < numero)
        {
            cout << "El numero es menor al numero a adivinar"<<endl;
        }
        else{
            cout << "Felicidades el numero es!!! " << numero << endl;
        }
    }
  return 0;  
}