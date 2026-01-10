/*
!         sum of first n term of following series:-1+1/2+1/3+1/4....+1/n
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0.0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }
    cout << "Sum = " << sum;
    return 0;
}