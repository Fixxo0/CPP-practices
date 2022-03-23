#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter the operator: ";

    cin >> op;
    cout << "Enter Second Number: ";
    cin >> b;

    switch (op)
    {
    case '*':
        cout << a * b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;

    default:
        break;
    }

    getch();
    return 0;
}