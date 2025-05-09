#include <iostream>
using namespace std;

int main (){
int qualification;

cout <<"Enter the student's grade.";
cin >>qualification;

if (qualification >= 60){
    cout << "The student was approved."<< endl;

} else { 
    cout <<"the student was failed" << endl;
}

return 0;
}
