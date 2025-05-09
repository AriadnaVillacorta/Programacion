#include <iostream>
using namespace std;

int main (){
int number1, number2;

// The user is asked for two numbers
cout << "Please enter the first number ";
cin >> number1;

cout <<" Thank you, now enter the second number ";
cin >> number2; 

// If and else if are used to know by means of the number that the user enters if it meets any of these variables
if (number1 > number2 ){ 
    cout << " The first number is " << number1 << " greater than the second number that is " << number2 << endl;

} else if (number1 < numero2){
    cout << " The second number is " << number1 << " less than the first number that is " << number2 << endl;
} else {
    cout <<"both numbers are equal" << endl;
}
return 0;
}
