#include<iostream>
#include<conio.h>
using namespace std;

// Write a program to convert Fahrenheit into Celsius.

int main(){
 
float F, C;
cout<<"Enter the value of Fahrenheit: ";
cin>>F;

C= (F - 32) * 5/9; 

 cout<<"The Fahrenheit value is changed to celcius: "<<C<<endl;


  
getch();
return 0;
}

