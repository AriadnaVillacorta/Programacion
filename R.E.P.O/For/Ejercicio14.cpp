#include <iostream>
using namespace std;

int main (){
    int numero, digito, inverso=0;

    cout<<"Ingrese un numero";
    cin>>numero;

     for (; numero != 0; numero = numero / 10) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
    }
cout<<"Los numeros inversos son: "<<inverso<<endl;



    return 0;
}