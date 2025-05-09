#include <iostream>
using  namespace std;

int main (){
int stars;

cout <<"Enter your rating (1 to 5 stars)";
cin >> stars;

if ( stars == 5){
    cout<< "Excellent! You're an excellent player!"<<endl;
}else if ( stars == 4){
    cout << "Great! You got a near-perfect score!"<< endl;
}else if ( stars == 3){
    cout <<"Good! I know you can improve."<< endl;
}else if (stars == 2){
    cout <<"You need to practice a little more, I know you can do it!"<< endl;
}else if (stars == 1){
    cout <<"Don't give up, you can do it!"<<endl;
}else {
    cout << "Invalid punctuation, enter a correct punctuation"<< endl;
}

return 0;
}