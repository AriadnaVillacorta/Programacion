#include <iostream>
using namespace std;

int main(){
int month;

cout <<"Enter your month of birth (1 to 12)";
cin >> month;

if (month == 1 ) {
    cout << "Your zodiac sign is Capricorn or Aquarius." << endl;
}else if (month == 2) {
    cout << "Your zodiac sign is Aquarius or Pisces."<< endl;
}else if (month == 3){
    cout <<" Your zodiac sign is Pisces or Aries."<<endl;
}else if (month == 4){
    cout <<"Your zodiac sign is Aries or Taurus."<<endl;
}else if (month == 5){
    cout <<"Your zodiac sign is Taurus or Gemini."<<endl;
}else if (month == 6){
    cout <<"Your zodiacal sign is Gemini or Cancer."<<endl;
}else if (month == 7){
    cout<<"Your zodiac sign is Cancer or Leo."<<endl;
}else if (month == 8){
    cout <<"Your zodiac sign is Leo or Virgo."<<endl;
}else if (month == 9){
    cout <<"Your zodiac sign is Virgo or Libra."<<endl;
}else if ( month == 10){
    cout <<"Your zodiac sign is Libra or Scorpio."<<endl;
}else if (month == 11){
    cout<<" Your zodiac sign is Scorpio or Sagittarius."<<endl;
}else if (month == 12){
    cout << "Your zodiac sign is Sagittarius or Capricorn."<<endl;
}else {
    cout <<"Invalid month, please try again."<<endl;
}



return 0;
}