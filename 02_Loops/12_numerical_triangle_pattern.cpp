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
            cout << j;
        }
        cout << endl;
    }
}

/*
        isma column ko print karna tha.
        isma help liya net sa
        gardan kartna matlab row(left to right)
        bich sa parna matlab column(top to bottom)
*/