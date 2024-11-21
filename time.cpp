#include <iostream>
using namespace std;

int main()
{
    int h, minute;
    cout << "Enter Time of 24 hours : ";
    cin >> h;

    cout << "Enter Minetes of  0-59 : ";
    cin >> minute;

    if (h < 12)
    {
        cout << h << ":" << minute << " AM" << endl;
    }
    else if (h >= 12)
    {
        switch (h)
        {
        case 12:
            h = 0;
            break;
        case 13:
            h = 1;
            break;
        case 14:
            h = 2;
            break;
        case 15:
            h = 3;
            break;
        case 16:
            h = 4;
            break;
        case 17:
            h = 5;
            break;
        case 18:
            h = 6;
            break;
        case 19:
            h = 7;
            break;
        case 20:
            h = 8;
            break;
        case 21:
            h = 9;
            break;
        case 22:
            h = 10;
            break;
        case 23:
            h = 11;
            break;
        }

        cout << h << ":" <<minute<<" PM ";
    }

    return 0;
}
