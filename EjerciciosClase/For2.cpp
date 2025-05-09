#include <iostream>
using namespace std;

int main(){
int N,i,suma;

cout<<"Ingrese un numero entero:";
cin>> N;
//Ciclo for para sumar los numeros desde 1 hasta N
for (int i+1; i<= N; i++){
    suma+=i; //Sumar el valor de i a la variable suma
}

//Imprimir el resultado de la suma
cout<<"La suma de los primer" << N << "numero es:"<< suma <<endl;

return 0;
}