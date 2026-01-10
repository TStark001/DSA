/*
    Make a function which calculates 'a' raised to the power 'b' using recursion.
*/
#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main()
{
    cout << power(3, 4) << endl;
    cout << power(2, 0);
    return 0;
}