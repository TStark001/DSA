/*
    Write a program to apply binary search in array sorted in decreasing order.
*/
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) / 2);
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            lo = mid + 1;
        else // (nums[mid]<target)
            hi = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {24, 21, 18, 15, 12, 9, 5, 3, 0, -1};
    // vector<int> nums = {-1, 0, 3, 5, 9, 12, 15, 18, 21, 24};
    int target1 = 15;
    int target2 = 9;
    int result1 = binarySearch(nums, target1);
    int result2 = binarySearch(nums, target2);
    cout << "Index1 = " << result1 << endl;
    cout << "Index2 = " << result2;
    return 0;
}