/*
# LeetCode-852 :- Peak Index in Mountain Array
    You are given an integer mountain array arr of length n where the values
    increase to a peak element and then decrease.
    Return the index of the peak element.
    Your task is to solve it in O(log(n)) time complexity.

    Example 1:
    Input: arr = [0,1,0]
    Output: 1

    Example 2:
    Input: arr = [0,2,1,0]
    Output: 1

    Example 3:
    Input: arr = [0,10,5,2]
    Output: 1

    Constraints:- 1. 3 <= arr.length <= 105
                  2. 0 <= arr[i] <= 106
                  3. arr is guaranteed to be a mountain array
$                       (Method-2 [using binary search])
*                            T.C = O(logn)
*/
#include <iostream>
#include <vector>
using namespace std;
int peakIdx(vector<int> &arr)
{
    int n = arr.size();
    int lo = 1;
    int hi = n - 2;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}
int main()
{
    // vector<int> arr = {1, 3, 5, 4, 3, 2, 1, 0};
    int n;
    cout << "Enter Size of vector = ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array :- " << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i != arr.size() - 1)
            cout << ",";
    }
    cout << "]";
    cout << endl;
    cout << "Peak Index = " << peakIdx(arr);
    return 0;
}
