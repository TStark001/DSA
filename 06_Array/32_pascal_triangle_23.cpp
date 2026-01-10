/*
!                           PASCAL's TRIANGLE PATTERN
                                        1
                                       1 1
                                      1 2 1
                                     1 3 3 1
                                    1 4 6 4 1
todo                                (METHOD-1)
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    cout << "Pascal Triangle Display below" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 2 * i - i; j++)
        {
            int iCj = factorial(i) / (factorial(j) * factorial(i - j));
            cout << iCj << " ";
        }
        cout << endl;
    }
    return 0;
}