#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int service;
cout<<"Enter how many years of Service: ";
cin>>service;
int salary;
int a;
a=salary/5;

if(service>=5){
    cout<<"Your net bonous Salary is: "<<a<<endl;
}
else{

    cout<<"Your net bonous Salary is: "<<salary<<endl;
}



    getch();
    return 0;
}