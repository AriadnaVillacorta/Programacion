#include <iostream>
using namespace std; 

int main(){

int Num; 
cout<<"Ingrese un muero para ver su tabla de multiplicar"<<endl;
cin>>Num;


cout<<"La tabla de multiplicar del numero "<< Num << " es:"<<endl;

for(int i = 1; i <= 10; i++){
    cout << Num <<" x "<< i << " = "<< Num * i <<endl;

}

    return 0;
}

