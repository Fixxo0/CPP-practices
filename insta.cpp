#include<iostream>
#include<conio.h>
using namespace std;

int main(){

for(int i=2; i<=50; i++){
    if(i%3 ==0){
        continue;
    }
    cout<<i<<endl;
}


    getch();
    return 0;
}