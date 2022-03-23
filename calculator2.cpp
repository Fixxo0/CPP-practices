#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a,b;
char op;
 cout<<"Enter First Number: ";
 cin>>a;
 cout<<"Enetr the operator: ";
 cin>>op;
 cout<<"Enter Second Number: ";
 cin>>b;

 switch (op)
 {
 case '+':
 cout<<a+b<<endl;
     break;

     case '-':
 cout<<a-b<<endl;
     break;

     case '/':
 cout<<a/b<<endl;
     break;

     case '*':
 cout<<a*b<<endl;
     break;

 
 default:
 cout<<"Operator Not Found"
     break;
 }

 


    getch();
    return 0;
}