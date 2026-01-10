/*
    Write a program to reverse a number . Avoid preceding 0s in the reversed number.
*/
#include <iostream>
using namespace std;

void reverse(int n, int &ans)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    ans = ans * 10 + digit;
    reverse(n / 10, ans);
}

int main()
{
    int n = 12304;
    int ans = 0;
    reverse(n, ans);
    cout << ans;
}