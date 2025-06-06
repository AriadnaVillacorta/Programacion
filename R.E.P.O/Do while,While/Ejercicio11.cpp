#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingrese un numero del 1 al 10";
    cin>>numero;

    while(numero > 10 || numero < 1){
        cout<<"Numero fuera de rango, vuelva a intentarlo"<<endl;
        cin>>numero;

    }

return 0;
}