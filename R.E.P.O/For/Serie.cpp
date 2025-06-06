#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cuantos terminos de Fibonacci quieres mostrar? ";
    cin >> N;

    int a = 0;  // primer término
    int b = 1;  // segundo término

    for (int i = 1; i <= N; i++) {
        cout << a << " ";  // imprime el término actual

        int siguiente = a + b;  // calcula el siguiente término con la suma de los terminos
        a = b;                 
        b = siguiente;
    }

    
    return 0;
}
