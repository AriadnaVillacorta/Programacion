#include <iostream>
#include <cmath>
using namespace std;
int main (){
int x; 
double rt;
cout << "Please enter a number for x" << endl;
cin >> x; 


 if  (x>0)
 { rt= pow(x,0.5);
    cout << "The result is:"<< rt << endl;
 }
 else
 { 
    cout << "The entered number cannot be executed because it is a negative number"<< endl;
 }


return 0;
}