#include <iostream>
#include <cmath>
using namespace std;
int main (){
double tax,annualincome;
  
 cout<< "Please enter your annual income in dollars";
 cin >> annualincome;

  if (annualincome <= 10000) {
     tax = 0;
    } else if (annualincome<= 20000) {
        tax= (annualincome- 10000) * 0.10;
    } else if (annualincome <= 35000) {
        tax= (10000 * 0.10) + (annualincome- 20000) * 0.15;
    } else if (annualincome <= 60000) {
        tax= (10000 * 0.10) + (15000 * 0.15) + (annualincome- 35000) * 0.20;
    } else {
        tax= (10000 * 0.10) + (15000 * 0.15) + (25000 * 0.20) + (annualincome - 60000) * 0.25;
    }

    cout << "The annual tax to be paid is: $" << tax << endl;

 
 return 0;   
}
 

