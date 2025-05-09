#include <iostream>
using namespace std;

int main (){
int age;

 cout << "Hello, Please enter your age";
 
 // We identify the user's indicated age
  cin >> age; 

 // We do the operation to identify if it is less than or greater than
 if (age >= 18){
    cout << "You are of legal age" << endl;

} else { (age <= 18); 
    cout << "You are a minor"<< endl;

}

return 0;
}