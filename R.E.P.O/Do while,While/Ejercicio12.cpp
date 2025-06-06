#include <iostream>
using namespace std;

int main(){
int num1, num2, guardar=0;

cout<<"Ingrese el primer numero";
cin>>num1;

cout<<"Ingrese el segundo numero";
cin>>num2;

while( num2 != 0){
    guardar=num2;

    num2 = num1 % num2;

    num1= guardar;

}
cout<<"El MCD es: "<<num2<< endl;

    return 0;
}