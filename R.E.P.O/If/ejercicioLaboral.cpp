#include <iostream>
using namespace std; 

int main(){
int day; 

cout << "Please enter a number from 1 to 7";
cin >> day;

if ( day >= 1 && day <= 5 ){
cout <<" It's a work day"<< endl;

} else if  (day== 6 || day == 7) {
    cout <<"It's the weekend" << endl;

} else { 

cout <<"Invalid number, must be a number from 1 to 7."<< endl;
}

return 0;
}