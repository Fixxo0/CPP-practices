#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;

   for(int b=1;b<=10; ++b){
        cout<<"24 x"<<b<<"\t=\t"<<a*b<<"\n"<<endl;
    }
 
    getch();
    return 0;
}

