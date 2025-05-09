#include <iostream>
#include <cmath>
using namespace std;

int main(){
float moneda,USD, EUR, JPY, GBP, convertir, resultado;
char opccion;

cout << "Ingrese la cantidad de dolares a convertir ";
cin >> moneda;

cout << "Ingrese la opcion a la cual le gustaria convertir" << endl;
cout << "a EUR" << endl;
cout << "b JPY" << endl;
cout << "c GBP " << endl;
cin >> opccion;

// Hacer la operacion matematica por medio de switch
if (moneda >0){
switch (opccion){
case 'a':
 resultado = (moneda * 0.8771);
 cout <<"La conversion de su moneda  a EUR es:" << resultado<<  endl;
break;
case 'b':
 resultado = (moneda*142.0810 );
 cout<< "La conversion de su moneda a JPY es:" << resultado << endl;
break;
case 'c':
resultado=(moneda* 0.7459);
cout<< "La conversion de su moneda a GBP es:" << resultado<< endl;
break;
}

}else{
    cout << "La opccion ingresada no es valida, intente de nuesvo de la forma correcta debido a que es un numero negativo." << endl;
}





return 0;
}