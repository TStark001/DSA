/*
!   Given a number n. Print if it is armstrong or not.
    Input :- 153
    Output :- Yes
    153 = 1^3+5^3+3^3 = 1 + 125 + 27 = 153 hence 153 is armstrong number.
*/
#include <iostream>
using namespace std;

int pow_recursive(int n, int m)
{
    // base case
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        // m is even
        int ans = pow_recursive(n, m / 2);
        return ans * ans;
    }
    else
    {
        // m is odd
        int ans = pow_recursive(n, (m - 1) / 2);
        return n * ans * ans;
    }
}

int f(int n, int d)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    return pow_recursive(n % 10, d) + f(n / 10, d);
}

int main()
{
    int n;
    cin >> n;

    int no_of_digit = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        no_of_digit++;
    }

    int result = f(n, no_of_digit);
    if (result == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}