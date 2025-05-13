#include <iostream>
using namespace std;

int main(){
 int mes;

 cout<<"Por favor ingrese un numero del 1-12";
 cin>> mes;

 switch(mes)
{
case 1:
    cout<<"El mes enero"<<endl;
    break;
case 2:
    cout<<"El mes febrero"<<endl;
    break;
case 3:
    cout<<"El mes marzo"<<endl;
    break;
case 4:
    cout<<"El mes abril"<<endl;
    break;
case 5:
    cout<<"El mes mayo"<<endl;
    break;
case 6:
    cout<<"El mes junio"<<endl;
    break;
case 7:
    cout<<"El mes julio"<<endl;
    break;
case 8:
    cout<<"El mes agosto"<<endl;
    break;
case 9:
    cout<<"El mes septiembre"<<endl;
    break;
case 10:
    cout<<"El mes octubre"<<endl;
    break;
case 11:
    cout<<"El mes noviembre"<<endl;
    break;
case 12:
    cout<<"El mes dicimbre"<<endl;
    break;
default:
cout<<"Mes no encontrado"<<endl;
}



return 0;
}