#include<iostream>
#include<conio.h>
using namespace std;

int main() {
   int sum = 0;
    for(int i=0; i<10; i++)
    {
        int x;
        cout << "Enter a number\n";
        cin>>x;
        sum = sum+x;
    }
    cout << "The average value is "<<sum/10<<"\n";
 
    getch();
    return 0;
}