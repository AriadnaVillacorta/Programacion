#include <iostream>
using namespace std;

int main(){

int temperature;

cout <<" Enter the current temperature in degrees Celsius";
cin >> temperature;

if (temperature < 15){
    cout <<"The temperature is cold (less than 15°C)"<< endl;

} else if ( temperature >= 15  &&  temperature <= 25) {
    cout <<"The temperature is mild (between 15°C and 25°C)"<<endl;

} else {
    cout<<"The temperature is hot (more than 25°C)"<< endl;
}

return 0;
}
