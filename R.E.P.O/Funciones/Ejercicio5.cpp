#include <iostream>
using namespace std;

int conver(int grados)
{
    return (grados * 9 / 5) + 32;
}
int main()
{
    int celsius;
    cout << "Ingrese un grado en Celsius: ";
    cin >> celsius;

    cout << "Su conversion a grado Fahrenheit es:" << conver(celsius) << endl;

    return 0;
}
