#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<< "Ingrese un numero N ";
    cin>> numero;

    int suma = numero;
    for( int i = 1; i < numero; i++ ){
   suma += i;
 }
 cout<< " La suma de 1 al "<< numero << " es: " << suma << endl;
    return 0;
}