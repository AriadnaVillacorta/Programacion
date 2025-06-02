#include <iostream>
using namespace std;

int main(){

    int Numero, Fact =1;

    cout<<"Ingrese un numero";
    cin>>Numero;

    if ( Numero < 0){
        cout<<" No se puede calcular el factorial de un número negativo." << endl;
    }else{
        

    for (int i = 1; i <= Numero; i++){
        if (i == 1){
        }else{

            Fact *= i;
        }
    }

    cout<<"La Factoria del numero " << Numero << " es: " << Fact << endl;

    }

    return 0;
}