/*
        HOLLOW DIAMOND PATTERN
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
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
    for (int i = n + 1; i <= 2 * n - 1; i++)
    { /*
ya pa staring point ha (n+1) and ending point ha (2*n-1) matlab (2*n-1) ya pa
line number ko represent kar raha ha aagar input n=5 ha to last line jaha tak code excute hoga
wo line no.:-9 ha.
*/
        for (int j = 1; j <= i - n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (2 * n - i) - 1; j++)
        {
            if (j == 1 || j == 2 * (2 * n - i) - 1)
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

    return 0;
}