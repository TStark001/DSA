/*
    Given a sorted array of non-negative distinct  integers,
    find the smallest missing non-negative element in it.
#                       METHOD-2(Binary Search)
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 9};
    int n = 8;
    int ans = -1;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == mid)
        {
            lo = mid + 1;
        }
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans;
    return 0;
}