#include <iostream>
using namespace std;

int main(){
int N,sig;
int a=0;
int b=1;
int x=0;

cout<<"Cuanto numero de la serie de Fibonacci quieres mostrar?";
cin>>N;

while(x < N){
cout << a << " "; 
sig = a+b;
a = b;
b = sig;
x++;

 
}
    return 0;
}

