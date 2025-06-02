#include <iostream>
using namespace std;

int main() {
int N,siguiente;

int a = 0;
int b = 1;

cout<<"SERIE FIBONACCI"<<endl;
cout<<"Que numeros quiere ver en la serie?";
cin>>N;

while (siguiente <= N ){
    

if ( siguiente <= N){
    a = b;                 
    b = siguiente;
    cout<< a << " ";
}else{
    cout<<"Salio del programa"<<endl;
}
    
}
    
cout<<endl;




return 0;
}