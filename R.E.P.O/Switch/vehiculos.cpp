#include <iostream>
using namespace std;

int main (){
int vehiculo,opcion;

cout<<"Ingrese un vehiculo"<<endl;
cout<<"1.Motocicleta"<<endl;
cout<<"2.Carro"<<endl;
cout<<"3. Bicicleta"<<endl;
cin>>vehiculo;

switch(vehiculo)
{
case 1:
    cout<<"La moto es un vehículo de dos ruedas con motor, es rápida, económica y muy útil para moverse en el tráfico ideal para una o dos personas."<<endl;
    break;
case 2:
    cout<<"El carro es un vehículo de cuatro ruedas bastante grande y cómodo, seguro y útil para transportar varias personas e igual es muy espacioso, ideal para viajes largos o mejor comodidad."<<endl;
    break;
case 3:
    cout<<"La bicicleta es un vehiculo factible que ayuda a la salud y igual es muy efectivo a la hora de los traficos pero es un poco peligrosa en las carreteras y un poco insegura."<<endl;
    break;
default:
cout<<"Ingrese un vehiculo correcto"<<endl;

}

    return 0;
}