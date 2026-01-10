/*
# LeetCode-658 :- Find K closest Elements
    Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
    An integer a is closer to x than an integer b if:
    |a - x| < |b - x|, or
    |a - x| == |b - x| and a < b

    Example 1:
    Input: arr = [1,2,3,4,5], k = 4, x = 3
    Output: [1,2,3,4]

    Example 2:
    Input: arr = [1,1,2,3,4,5], k = 4, x = -1
    Output: [1,1,2,3]

    Constraints:
    1 <= k <= arr.length
    1 <= arr.length <= 104
    arr is sorted in ascending order.
    -104 <= arr[i], x <= 104
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findClosestElement(vector<int> &arr, int x, int k)
{
    int n = arr.size();
    vector<int> ans(k); // k element ko insert karanga
    if (x < arr[0])
    {
        for (int i = 0; i < k; i++)
        {
            ans[i] = arr[i];
        }
        return ans;
    }
    if (x > arr[n - 1])
    {
        int i = n - 1;
        int j = k - 1;
        while (j >= 0)
        {
            ans[j] = arr[i];
            j--;
            i--;
        }
        return ans;
    }
    int lo = 0;
    int hi = n - 1;
    bool flag = false; // if x is present in arr or not
    int t = 0;
    int mid = -1;
    // binary search
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            flag = true;
            ans[t] = arr[mid];
            t++;
            break;
        }
        else if (arr[mid] > x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    int lb = hi;
    int ub = lo;
    if (flag == true)
    {
        lb = mid - 1;
        ub = mid + 1;
    }
    while (t < k && lb >= 0 && ub < n - 1)
    {
        int d1 = abs(x - arr[lb]);
        int d2 = abs(x - arr[ub]);
        if (d1 <= d2)
        {
            ans[t] = arr[lb];
            lb--;
        }
        else
        {
            ans[t] = arr[ub];
            ub++;
        }
        t++;
    }
    if (lb < 0)
    {
        while (t < k)
        {
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if (ub > n - 1)
    {
        while (t < k)
        {
            ans[t] == arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 2, 3, 4, 5};
    int x = -1;
    int k = 4;
    vector<int> v = findClosestElement(arr, x, k);
    cout << "Output :- " << "[";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    return 0;
}