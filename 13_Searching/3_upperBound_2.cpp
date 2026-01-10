/*
    *UPPER BOUND
    Given a sorted integer array and an integer 'X'. find the upper bound of X.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int target = 13;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) / 2);
        if (arr[mid] == target)
        {
            flag = true;
            cout << arr[mid + 1];
            break;
        }
        else if (arr[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (flag == false){
        cout << "Upper Bound = "<<arr[lo];
    }
    return 0;
}