#include <iostream>
using namespace std;

int main(){
int operacion, num1, num2, resultado;


cout<<"Por favor ingrese un numero"<<endl;
cin>>num1;

cout<<"Por favor ingrese otro numero"<<endl;
cin>> num2;


cout<<"Ingrese la operacion la cual quiere realizar"<<endl;
cout << "1.Multiplicacion"<<endl;
cout<<"2.Division"<<endl;
cout <<"3.Suma"<<endl;
cout<<"4.Resta"<<endl;
cin>>operacion;


switch (operacion)
{
case 1:
    (resultado= num1*num2);
    cout<<"El resultado es" << resultado <<endl;
    break;
case 2:
if (num2 != 0) {
    resultado = num1 / num2;
    cout << "El resultado es: " << resultado << endl;
} else {
    cout << "Error: No se puede dividir entre 0. " << resultado << endl;
}
    break;
case 3:
(resultado= num1+num2);
    cout<<"El resultado es "<< resultado << endl;
    break;
case 4:
(resultado= num1-num2);
    cout<<"El resultado es "<< resultado <<endl;
    break;
    default:
    cout<<"ERROR! Ingrese una operacion valida"<<endl;
}
    return 0;
}