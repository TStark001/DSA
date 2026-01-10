// Power function(Logarithmic)
#include <iostream>
using namespace std;

int powlog(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    int ans = powlog(x, n / 2);
    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans * ans * x;
    }
}
int main()
{
    cout << powlog(2,10);
    return 0;
}