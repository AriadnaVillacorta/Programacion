#include <iostream>
using namespace std;

int main(){
    int n;
    float promedio=0;

cout<<"Cuanto numero ingresara?";
cin>>n;

int numeros[n];
 for (int i = 0; i < n; i++){
    
        cout << "Ingrese los numero en la posicion #" << (i + 1) << endl;
        cin >> numeros[i];
    promedio+=numeros[i];
 }
  
         promedio = promedio/n;

 cout<<"El promedio de los numeros ingresados es: "<< promedio<<endl;
    return 0;
}