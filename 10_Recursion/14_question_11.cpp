/*
!   Given two number x and y. Find the greatest common divisor of x and y using recursion.
    Constraints :- 0<=x , y<=1e6
    Input :- x = 4 , y = 9
    Output :- 1

    Input :- x = 12 , y = 20
    Output :- 4
?                      Euclid's Algrothim
                If we subtract a smaller number from larger one,
                (we can reduce the large no) but the gcd/hcf will
                not change.
                * it also valid for division.
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int x = gcd(40, 48);
    cout << x << endl;
    return 0;
}