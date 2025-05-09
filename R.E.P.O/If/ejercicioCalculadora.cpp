#include <iostream>
using namespace std;

int main (){
int weightpackage;

cout <<"Enter the weight of the package in kg";
cin>> weightpackage;

if (weightpackage == 5){
    cout<< "You must pay $5 for the weight of your package."<<endl;
}else if (weightpackage >= 6 && weightpackage <= 10){
    cout << "You must pay $10 for the weight of your package."<<endl;
}else if (weightpackage > 10){
    cout << "You must pay $15 for the weight of your package."<<endl;
}else{
    cout << "No tienes que pagar ninguna cantidad de peso."<<endl;
}

return 0;
}


