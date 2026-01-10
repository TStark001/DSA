/*
    Write a program to calculate the sum of odd numbers between a and b(both inclusive)
    using recursion
*/
#include <iostream>
using namespace std;
int oddsum(int a, int b)
{
    if (a > b)
        return 0;
    if (a % 2 == 0)
        return oddsum(a + 1, b);
    return a + oddsum(a + 2, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << oddsum(a, b);
    return 0;
}