#include<iostream>
#include<conio.h>
using namespace std;

int main(){
char Grade;
cout<<"Enter Your Grade: ";
cin>>Grade;

switch (Grade)
{
case 'A':
cout<<"Excellent!!";
    break;

    case 'B':
cout<<"Very Good";
    break;

case 'C':
cout<<"Good";
    break;

case 'D':
cout<<"Can Do Better";
    break;

    case 'E':
cout<<"Just passed";
    break;

    case 'F':
cout<<"You Failed Bro:(";
    break;


default:
cout<<"You Entered a invalid Grade";
    break;
}


    return 0;
}