#include <iostream>
#include <string>
using namespace std;

int main() {
    string contra1;
    string contra2= "2025";

cout<<"Ingrese su contrasena anterior"<<endl;
cin>> contra1;


while (contra1 != contra2 ){
    if(contra1 == contra2){
        cout<<"Ingrese nuevamente su contrasena";
    }else{
        cout<<"Contrasena incorrecta Vuelva a intentarlo";
    }
    cin>>contra1;

}

cout<<"La contrasena es correcta"<<endl;
cout<<"Has iniciado seccion"<<endl;
return 0;
}