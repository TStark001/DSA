/*
!   Print the max value of array [3,10,3,2,5]
*/
#include <iostream>
using namespace std;

int f(int *arr, int idx, int n)
{
    // base case
    if (idx == n - 1)
    {
        // we only have one element left, so it is maximum
        return arr[idx];
    }
    return max(arr[idx], f(arr, idx + 1, n));
}

int main()
{
    int array[] = {3, 10, 3, 2, 5};
    int n = 5;
    cout << "Max = " << f(array, 0, n);
    return 0;
}