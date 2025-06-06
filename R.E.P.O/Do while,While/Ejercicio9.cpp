#include <iostream>
using namespace std;

int main (){
    int num;
    int a=1;
    int factorial=1;

    cout<<"Ingrese un numero";
    cin>>num;

    while(a <= num){
        factorial *= a; 
         a++;

    }
    
    cout<<"La factorisl del numero "<< num <<" es: "<< factorial<<endl;

    return 0;
}