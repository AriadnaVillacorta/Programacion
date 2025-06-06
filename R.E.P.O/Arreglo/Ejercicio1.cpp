#include <iostream>
using namespace std;

int main (){
    int ingreso;
     int suma = 0;

    cout<<"Cuantos numero quiere ingresar?";
    cin>>ingreso;

    int arreglo[ingreso];
    for (int i = 0; i < ingreso; i++){
    cout<<"Ingrese los numeros en la posicion# "<<(i + 1)<<endl;
    cin>>arreglo[i];
    

        suma += arreglo[i];

    
    }
    cout<<"La suma de todos los numero ingresados es: "<< suma <<endl;
   
    return 0;
}