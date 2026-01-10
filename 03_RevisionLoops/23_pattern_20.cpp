/*
!                       CROSS PATTERN
                            *   *
                             * *
                              *
                             * *
                            *   *
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // upward pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == (i + 1) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // downward pattern
    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j == 2 * n - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i - n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i - n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}