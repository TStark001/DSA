/*
    Given a sorted array of n elements and a target 'X'. Find the
    first occurrence of 'X' in the array. If 'X' does not exist
    return -1.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 8, 9};
    int n = 18;
    int x = 6;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) / 2);
        if (arr[mid] == x)
        {
            if (arr[mid - 1] != x)
            {
                flag = true;
                cout << mid;
                break;
            }
            else
            {
                hi = mid - 1;
            }
        }
        else if (arr[mid] < x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }
    return 0;
}