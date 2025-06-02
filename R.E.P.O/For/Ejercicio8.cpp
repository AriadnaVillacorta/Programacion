#include <iostream>
using namespace std;

int main(){

int numeros, resultado, promedio, suma;

    cout<<"Por favor ingrese la cantidad de numeros: ";
    cin>>numeros;

for (int i = 1; i <= numeros; i++){

cout <<"Ingrese el numero"<< i << ":";
cin>> resultado;

    if (i == 1){
        suma = resultado;
    }else{
        suma += resultado;
    }

}

promedio = suma / numeros;

cout<< "El Promedio de los "<< numeros << " numeros es: " << promedio <<endl;

    return 0;
}