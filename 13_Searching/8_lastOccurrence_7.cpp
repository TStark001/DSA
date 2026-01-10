/*
    Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’does not exist return -1.
    Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
    Output 1: 6
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5};
    int x = 4;
    int n = 8;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid + 1] == x)
            {
                lo = mid + 1;
            }
            else
            {
                flag = true;
                cout << mid;
                break;
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