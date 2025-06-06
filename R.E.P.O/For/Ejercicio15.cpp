#include <iostream>
using namespace std;

int main (){
    int numero;

    cout<<"Ingrese un valor a numero";
    cin>>numero;

        for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            cout << -i;
        } else {
            cout << i;
        }
cout<<" ";

    }

    return 0;
}