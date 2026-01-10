/*
    Calculate the number of ways in which a person can climb n stairs
    if he can take exactly 1,2 or 3 steps at each level
*/
#include <iostream>
using namespace std;

int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
int main()
{
    int n;
    cout << "Enter n :- ";
    cin >> n;
    cout << "No. of Ways = " << stair(n);
    return 0;
}