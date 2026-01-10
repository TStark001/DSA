/*
#   Greatest Common Divisor(HCF)
!               (Method-1[Recursive Method])
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int main()
{
    int a = 24;
    int b = 60;
    cout << gcd(a, b);
}