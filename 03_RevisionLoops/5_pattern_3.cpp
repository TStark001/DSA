// rectangle pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please Enter the number of StarRow:";
    cin >> n;
    int m;
    cout << "Please Enter the number of StarColumn:";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Self done.