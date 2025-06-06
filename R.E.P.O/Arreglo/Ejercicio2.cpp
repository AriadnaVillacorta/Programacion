#include <iostream>
using namespace std;

int main (){

    int arreglo[8]= {5,7,1,25,3,6,40,100};
    int mayor=0;
    int menor=0;

    for ( int i = 0; i < 8; i++){
        if (arreglo [i] > mayor){
            mayor = arreglo[i];

        }else if (arreglo [i] < menor){
            menor = arreglo [i];
        }
    }

    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<< menor<<endl;



    return 0;
}