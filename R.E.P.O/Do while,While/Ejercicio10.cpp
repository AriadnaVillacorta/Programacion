#include <iostream>
using namespace std;

int main(){
int numero, contar=0;

cout<<"Ingrese un numero";
cin>>numero;

while(numero > 0){
numero  = numero % 10;
contar++;
}
cout<<"El numero tiene "<<contar<<" digitos"<<endl;

    return 0;
}