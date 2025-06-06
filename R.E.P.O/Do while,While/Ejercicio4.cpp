#include <iostream>
using namespace std;

int main(){
int menu, salir, opcion ;


while(opcion != 6){
    cout<<"###MENU###"<<endl;
    cout<<"Que le gusta hacer mas:"<<endl;
    cout<<"1.Salir a comer"<<endl;
    cout<<"2.Salir al cine"<<endl;
    cout<<"3.Ir a correr"<<endl;
    cout<<"4.Hacer ejercicio"<<endl;
    cout<<"5. Cocinar"<<endl;
    cout<<"6. Salir del programa"<<endl;
    cin>>opcion;
    
    switch (opcion){
        case 1: 
        cout<<"Comer es delicio, mas si es en tu restaurante favorito."<<endl;
        break;
        case 2:
        cout<<"Ver una pelicula es lo mejor."<<endl;
        break;
        case 3:
        cout<<"Correr es exelente opcion y trae muy buenos beneficios para la salud, felicidades."<<endl;
        break;
        case 4:
        cout<<"Hacer ejercicio ayuda a despejar tu mente, se constante y veras muy bien los resultados."<<endl;
        break;
        case 5:
        cout<<"Wow! felicidades apuesto que cocinas demasiado bien :)"<<endl;
        break;
        default:
        cout<<"Haz decidido salir del sistema."<<endl;
    }
}
cout<<"Gracias por ingresae al programa."<<endl;


return 0;
}
