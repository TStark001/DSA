/*
!   Given an array of n integers and a target value x. Print whether x exists in the array or not.
    Constraints :- 0<=n<=1e6 , -1e8<=x<=1e8 , -1e8<=a[i]<=1e8
    Input :- n=8 , x=14 , array[] = {4,12,54,14,3,8,6,1}
    Output :- Yes

    Input :- n=1 , x=9 , array[] = {2}
    Output :- No
*/
#include <iostream>
using namespace std;

bool f(int *arr, int n, int i, int x)
{
    // base case
    if (i == n)
    {
        // array is exhausted
        return false;
    }
    return (arr[i] == x) || f(arr, n, i + 1, x);
}

int main()
{
    int arr[] = {8, -9, 56, 23, 1};
    int n = 5;
    int x = 5;
    bool result = f(arr, n, 0, x);
    if (result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}