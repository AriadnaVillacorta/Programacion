#include <iostream>
#include <string>
using namespace std;

int main(){
    string userentered="Programacion";
    string passwordentered="codigo";

    string passwordcorrect, usercorrect;

    cout <<"Enter your username: ";
    cin >> usercorrect;

    cout << "Enter your password ";
    cin >> passwordcorrect;

    if ( usercorrect == userentered && passwordcorrect == passwordentered){
        cout <<"Correct credentials, Welcome!";
    }else{ 
        cout <<"Access denied, Incorrect password and users.";
    }
    



return 0;
}