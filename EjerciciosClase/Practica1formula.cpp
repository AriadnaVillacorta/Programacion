#include <iostream>
#include <cmath>
using namespace std;

int main (){
 int a;
 double b, c;
 double x1, x2,x,x3;

 cout<<"Please enter a number for a:"<<a<<endl; 
 cin >> a; 
 cout<<"Please enter a number for a:"<<b<<endl; 
 cin >> b; 
 cout<<"Please enter a number for a:"<<c<<endl; 
 cin >> c; 

 x1= -b+(pow(b,2)-(4*a*c));// Formula for the discriminant
 x= pow (x1, 1/2); // x is the resolt of the square root of the determinant 
 x2= (-b+x)/2*a;
 x3= (-b-x)/2*a;

 if ((x2 && x3) >0){ 
 {
 cout << "You number must be greater than zero";
 }
 if else ((x2 && x3) <0){
 }
 cout << "The equation cannot be performed because the result is a complex number";
 
  if else (a!=0)
{
    x1= -b+(pow(b,2)-(4*a*c));// Formula for the discriminant
 x= pow (x1, 1/2); // x is the resolt of the square root of the determinant 
}
 cout<< "the equitacion is quedratic"<<endl;
 cin>> x2;
 cin >> x3;

 {
 else (a=0)}
 cout<< "The equation is not linear quadratic, it is a linear equation"; // Remeber that x=-(c/b)
 } 
return 0;
}