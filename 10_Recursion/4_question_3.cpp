/*
!               Given two number p&q , find the value of p^q using a recursion.
                                        METHOD-1
*/
#include <iostream>
using namespace std;

int f(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    int ans = n * f(n, m - 1);
}

int main()
{
    int result = f(5, 4);
    cout << result;
    return 0;
}