// factorial problem
#include <iostream>
using namespace std;

int f(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    int ans = n * f(n - 1);
    return ans;
}

int main()
{
    int result = f(5);
    cout << result;
    return 0;
}