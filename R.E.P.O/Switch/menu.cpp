#include <iostream>
#include <string>
using namespace std;

int main(){
int menu, opcion;


cout<<"Ingrese una opcion del menu"<<endl;
cout<< "#####MENU####"<<endl;
cout<<"1. Saludar"<<endl;
cout<<"2. Despedirse"<<endl;
cout<<"3.Mensaje emotivo"<<endl;
cout<<"4.Salir"<<endl;
cin>>menu;

switch (menu)
{
    case 1:
        cout<<"Hola! Espero te encuentres muy bien, gusto de slaudarte :)"<<endl;
        break;
    case 2:
        cout<<"Adios! Espero te vaya muy bien en tu semana, hasta luego"<<endl;
        break;
    case 3:
        cout<<"No baje la meta, aumenta el esfuerzo "<<endl;
        break;
    default:
    cout<<"Has decidido salir del programa."<<endl;
}

    return 0;
}