#include <iostream>
using namespace std;
int main(){

    int N, suma, i;

    cout<<"Ingrese un numero natural"<<endl;
    cin>> N;

    if (N >= 1) {
        suma = 0;
    }
    
    for(i=1; i <= N; i++){
    suma += i;

   
    }

    cout<<"La suma de los primeros "<< N << "naturales son"<< suma << endl;


    return 0;
}