
#include <iostream>
#include <string>
using namespace std;

int main() {

   string contra1;
   string contra2= "2025";

   cout<<"Ingrese su contrasena anterior:";
   cin>>contra1;

   while(contra1 != contra2){
    cout<<"Contrasena incorrecta, Vuelva a intertarlo";
    cin>>contra1;
    }  


   
   cout<<"La contrasena es correcta"<<endl;
   cout<<"Haz inicado seccion"<<endl;



return 0;
}