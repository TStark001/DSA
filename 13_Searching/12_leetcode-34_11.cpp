/*
# LeetCode-34 :- Find First and Last Position of element in sorted array.
    Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
    If target is not found in the array, return [-1, -1].
    You must write an algorithm with O(log n) runtime complexity.

    Example 1:
    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]

    Example 2:
    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]

    Example 3:
    Input: nums = [], target = 0
    Output: [-1,-1]
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> searchrange(vector<int> &nums, int x)
{
    vector<int> v(2);
    int n = nums.size();
    int lo = 0;
    int hi = n - 1;
    v[0] = -1;
    v[1] = -1;
    //* first occurrence
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == x)
        {
            if (mid == 0)
            {
                v[0] = mid;
                break;
            }
            else if (nums[mid - 1] != x)
            {
                v[0] = mid;
                break;
            }
            else
            {
                hi = mid - 1;
            }
        }
        else if (nums[mid] > x)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    //$ last occurrence
    lo = 0;
    hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == x)
        {
            if (mid == n - 1)
            {
                v[1] = mid;
                break;
            }
            else if (nums[mid + 1] != x)
            {
                v[1] = mid;
                break;
            }
            else
            {
                lo = mid + 1;
            }
        }
        else if (nums[mid] > x)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return v;
}
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int x = 8;
    vector<int> result = searchrange(nums, x);
    cout<<"Occurrence = "<<"["<<result[0]<<","<<result[1]<<"]";
    return 0;
}