// todo                   Program to find nth fibonacci number
#include <iostream>
using namespace std;

int fib(int n)
{
    // base case
    if (n == 0 or n == 1)
    {
        return n;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter n:- ";
    cin >> n;
    int result = fib(n);
    cout << result;
    return 0;
}