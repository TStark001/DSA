/*
#   LeetCode-238 :- Product of Array Except self
    Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

    You must write an algorithm that runs in O(n) time and without using the division operation.

    Example 1:
    Input: nums = [1,2,3,4]
    Output: [24,12,8,6]

    Example 2:
    Input: nums = [-1,1,0,-3,3]
    Output: [0,0,9,0,0]
!                       (METHOD-3)
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pre(n);
    int p = nums[0];
    pre[0] = 1;
    for (int i = 1; i < n; i++)
    {
        pre[i] = p;
        p *= nums[i];
    }
    p = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pre[i] *= p;
        p *= nums[i];
    }
    return pre;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    for (int x : result)
    {
        cout << x << " ";
    }
}