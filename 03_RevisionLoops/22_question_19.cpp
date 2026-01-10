/*
!         sum of first n term of following series:-1+1/2!+1/3!+1/4!....+1/n!
*/
#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    float sum = 0.0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / factorial(i);
    }
    cout << "Sum = " << sum;
    return 0;
}