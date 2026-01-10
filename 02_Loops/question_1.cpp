#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year:";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is Leap Year.";
    }
    else
    {
        cout << year << " is Normal Year.";
    }
    return 0;
}