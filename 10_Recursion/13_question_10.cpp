/*
!   Given a number n.Find the sum of natural number till n but with alternate sign.
?   That means:- if n=5 then you have to return 1-2+3-4+5=3 as your answer.
    Constraints :- 0<n<1e6 (i.e. 1e6 means 10 to power 6)
    Input :- n=10
    Output :- -5

    Input :- n=5
    Output :- 3
*/
#include <iostream>
using namespace std;

int f(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    return f(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}