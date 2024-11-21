#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter Time (in 24-hour format): ";
    cin >> time;

    switch (time / 12)
    {
    case 0:
        cout << "AM";
        break;
    case 1:
        cout << "PM";
        break;
    }

    return 0;
}
