/*
#   LeetCode-448 :- Find all Numbers Disappeared in an Array.
    Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

    Example 1:
    Input: nums = [4,3,2,7,8,2,3,1]
    Output: [5,6]

    Example 2:
    Input: nums = [1,1]
    Output: [2]

    Constraints:
    n == nums.length
    1 <= n <= 105
    1 <= nums[i] <= n
    
    Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does   not count as extra space.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumber(vector<int> &nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i]-1;
        if(nums[correctIdx]==nums[i] || correctIdx == i) i++;
        else swap(nums[i],nums[correctIdx]);
    }
    vector<int> ans;
    for(int i = 0 ; i<n ; i++){
        if(nums[i]!=i+1) ans.push_back(i+1);
    }
    return ans;
}

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumber(nums);
    for(int i = 0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
}