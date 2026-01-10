/*
!               Given two number p&q , find the value of p^q using a recursion.
                                        METHOD-2
*/
#include <iostream>
using namespace std;

int f(int p, int q)
{
    // base case
    if (q == 0)
    {
        return 1;
    }
    if (q % 2 == 0)
    {
        // q is even
        int ans = f(p, q / 2);
        return ans * ans;
    }
    else
    {
        // q is odd
        int ans = f(p, (q - 1) / 2);
        return p * ans * ans;
    }
}

int main()
{
    int result = f(3, 8);
    cout << result;
    return 0;
}