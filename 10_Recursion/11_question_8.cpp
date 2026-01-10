/*
!   Given a number n. Find the increasing sequence from 1 to n without using any loop.
    Constraint : 0<n<1e6 (i.e. 1e6 means 10 to power 6)
    Input : n = 4
    Output : 1 2 3 4

    Input : n = 2
    Output :1 2
*/
#include <iostream>
using namespace std;

void f(int n)
{
    // base case
    if (n < 1)
    {
        return;
    }
    // go and print first n-1 natural number
    f(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}