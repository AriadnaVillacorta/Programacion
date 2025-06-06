#include <iostream>
using namespace std;

int main (){
    int numero,mas=0,digitos=0, x=0;

    cout<<"Ingrese un numero";
    cin>>numero;

    x =numero;

    while(x > 0){
        digitos+= x % 10;
        x = x / 10;

     numero= digitos;
     mas++;
    }
   

    cout<<"La suma de todos digito del numero es: "<< numero <<endl;


    return 0;
}