#include<iostream>
#include<conio.h>
using namespace std;

int main(){

 int i;
 int  a;
 int b;


 cout<<"how much quantity: ";
 cin>>a;
 i=100*a;

   if(i>=1000){
       cout<<"you will get 10%  discount\n";
         if(i>=1000)
            {  b=i/10;
               cout<<"Your Total amount is: "<<i-b<<endl;
            }



}




getch();

return 0;



}