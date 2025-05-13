#include <iostream> 
#include <string>
using namespace std;
int main(){
int numero, dia;

cout<<"Por favor ingrese un numero (1-7)";
cin >> dia;

switch (dia)
{
case 1:
    cout<<"El dia es Lunes"<<endl;
    break;
case 2:
    cout<<"El dia es Martes"<<endl;
    break;
case 3:
    cout<<"El dia es Miercoles"<<endl;
    break;
case 4:
    cout<<"El dia es Jueves"<<endl;
    break;
case 5:
    cout<<"El dia es Viernes"<<endl;
    break;
case 6: 
    cout<<"El dia es Sabado"<<endl;
    break;
case 7:
    cout<<"El dia es Domingo"<<endl;
    break;
default:
    cout<<"Ingrese un numero correcto"<<endl;
    break;

}



return 0;
}