#include <iostream>
using namespace std;

int main(){
cout<<"------------------------------------------"<<endl;
cout<<"NUMEROS DIVISIBLES POR 3 DEL 1 AL 100  "<< endl;

for (int i = 1; i <= 100; i++){
if (i % 3 == 0){
cout<<i<<" ";
}
}

cout<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"NUMEROS DIVISIBLES POR 5 DEL 1 AL 100  "<< endl;
for (int i = 1; i <= 100; i++){
if (i % 5 == 0){
   cout<<i<<" ";
}
}
    return 0;
}