#include <iostream>
using namespace std;

int main(){
    
int Numero,Expo,Resultado;

    cout<<"Ingrese un numero";
    cin>> Numero;

    cout <<"Ingrese un exponente para su numero";
    cin>> Expo;

     Resultado = Numero;

    for(int i = 1; i < Expo; i++ ){
     Resultado = Resultado * Numero;
    }

    cout << "El resultado de " << Numero << "^" << Expo << " es: " << Resultado << endl;

   
    return 0;
}