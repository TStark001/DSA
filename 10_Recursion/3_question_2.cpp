//! Given an integer n , find out the sum of its digit using recursion
#include <iostream>
using namespace std;

int f(int n)
{
    if (n >= 0 and n <= 9)
    {
        return n;
    }
    int ans = f(n / 10) + (n % 10);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = f(n);
    cout << "Sum of n term = " << result;
    return 0;
}