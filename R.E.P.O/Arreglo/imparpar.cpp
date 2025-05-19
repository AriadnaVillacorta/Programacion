#include <iostream>
using namespace std;

int main(){
    int Num;

    cout<<"Cuantos numeros quiere ingresar?";
    cin>>Num;

 int numeros[Num];
 int pares = 0, impares = 0;
 
    for (int i = 0; i < Num; i++){
        cout<<"Ingrese los numeros en la posicion #" <<(i + 1)<<endl;
        cin>>numeros[i];
     }
    
 
 for (int i =0; i < Num; i++){
    if ( numeros[i] % 2 == 0){
        pares ++;
    }else{
        impares ++;
    }
 }

    cout<<"Los numeros pares ingresados son "<< pares <<endl;
    cout<< "Los numeros impares ingresados son"<< impares <<endl;
    





    return 0;
}

