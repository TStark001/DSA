/*
!        Given an array print all the elements of the array recurssively.
*/
#include <iostream>
using namespace std;

void f(int *arr, int idx, int n)
{
    // base case
    if (idx == n)
    {
        return;
    }
    // self work
    cout << arr[idx] << endl;
    // assume that
    f(arr, idx + 1, n); // assume it works correctly ---> it will print the remaining array
}

int main()
{
    int n = 5;
    int arr[] = {9, 8, 42, 52, 2};
    f(arr, 0, n);
    return 0;
}