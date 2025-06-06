#include <iostream>
using namespace std;

int main()
{
    int par = 0, nm2;

    cout << "Numeros pares del 1 al 50" << endl;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            par++;
        }
    }
    cout << "Son " << par << " numeros en total" << endl;

    return 0;
}