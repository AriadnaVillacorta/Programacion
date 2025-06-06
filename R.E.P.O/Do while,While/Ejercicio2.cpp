#include <iostream>
using namespace std;

int main(){
    int numero=0;
    int suma=0;

    do {
        cout<<"Ingrese un numero";
        cin>> numero;

         suma += numero;

    }while (numero != 0);

    cout<<"La suma de sus numeros ingresados es: "<<suma<<endl;
   

    return 0;
}