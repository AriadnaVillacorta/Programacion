#include <iostream>
using namespace std;
int main(){
    int numero;
    int suma=0;
    int a=1;    

    cout<<"Ingrese un numero";
    cin>>numero;
        
    while (a <= numero){
        
        if ( a % 2 ==0){
            suma += a;
        }
        a++;

    }
    cout<<"La suma de los numeros pares del 1 al : "<<numero<<" es: "<<suma<<endl;
        



    return 0;
}
    
