#include <iostream>
using namespace std;

int main(){
int average,lacks;

cout<<" Enter your average";
cin>> average;

if (average >= 85){
    cout <<"How many fouls have you had?";
    cin>> lacks;

} if (lacks <=3){
    cout << "You qualify for a scholarship"<< endl; 

} else if (lacks >3){
    cout << "Unfortunately, he does not meet the requirements due to his faults"<<endl;

} else { 
    cout << " Unfortunately, he does not meet the requirements for a scholarship."<<endl;
}


return 0;
}