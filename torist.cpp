#include <iostream>
using namespace std;

int main()
{
    int travelType, destination;

    cout << "Enter Travel Type:" << endl
         << "1. International" << endl
         << "2. Domestic" << endl;
    cin >> travelType;

    switch (travelType)
    {
    case 1:
        cout << "Enter International Destination:" << endl
             << "1. US" << endl
             << "2. UK" << endl;
        cin >> destination;
        switch (destination)
        {
        case 1:
            cout << "US: 12000 RS" << endl;
            break;

        case 2:
            cout << "UK: 12000 RS" << endl;
            break;

        default:
            cout << "Invalid international destination!" << endl;
            break;
        }
        break;

    case 2:
        cout << "Enter Domestic Destination:" << endl
             << "1. Odisha" << endl
             << "2. Gujarat" << endl;
        cin >> destination;
        switch (destination)
        {
        case 1:
            cout << "Odisha: 8000 RS" << endl;
            break;

        case 2:
            cout << "Gujarat: 7000 RS" << endl;
            break;

        default:
            cout << "Invalid domestic destination!" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid travel type!" << endl;
        break;
    }

    return 0;
}
