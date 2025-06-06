#include <iostream>
using namespace std;

int main(){
    int cali1=0, promedio=0 ;
    int aumento=0;
    int suma=0;


        cout<<"Ingrese sus calificaciones (ingrese un número negativo para terminar)";
        cin>>cali1;
        
    while (cali1 >= 0){
        
        suma += cali1;
        aumento++;
         
        cout << "Ingrese otra calificación (negativa para terminar): ";
        cin >> cali1;
       
    }
    if (aumento>0) {
        promedio= suma / aumento;
       }
    cout<<"El promedio de sus calificaciones es: "<< promedio <<endl;

    return 0;
}