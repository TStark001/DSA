/*
        pattern-4
        1
        22
        333
        4444
        55555
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// logic of the pattern is, just print i instead of j.