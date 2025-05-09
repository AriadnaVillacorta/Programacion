#include <iostream>
using namespace std;

int main (){
float amount, total;

cout << "Please enter the purchase amount $ ";
cin >> amount;

if (amount > 100){
    total = amount - 0.1;
    cout << "A 10% discount was applied"<<endl;
} else { 
    total= amount;
    cout << "The discount cannot be applied since its amount is less than $100. " <<endl;
   cout <<" Your total to pay is $ " << total <<endl;
}



return 0;
}