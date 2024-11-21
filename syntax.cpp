#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "enter +,-,*,/";
    cin >> choice;
    int number = 10;
    int number1 = 11;
    switch (choice)
    {
    case '+':
        cout << number + number1;
        break;
    case '-':
        cout << number - number1;
        break;
    case '*':
        cout << number * number1;
        break;
    case '/':
        cout << number / number1;
        break;
    default:
        cout << "ii";
        break;
    }
}