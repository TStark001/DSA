/*
#   LeetCode-90 :- Subset II
    Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
    The solution set must not contain duplicate subsets. Return the solution in any order.

    Example 1:
    Input: nums = [1,2,2]
    Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

    Example 2:
    Input: nums = [0]
    Output: [[],[0]]
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void helper(vector<int> &nums,vector<int> ans,vector<vector<int>> &finalAns,int idx){
    if(idx==nums.size()){
        finalAns.push_back(ans);
        return;
    }

        ans.push_back(nums[idx]);
        helper(nums,ans,finalAns,idx+1);
        ans.pop_back();
        while(idx<nums.size() && nums[idx]==nums[idx+1]) idx++;
        helper(nums,ans,finalAns,idx+1);   
}

vector<vector<int>> subsets(vector<int> &nums){
    vector<int> ans;
    vector<vector<int>> finalAns;
    sort(nums.begin(),nums.end());
    helper(nums,ans,finalAns,0);
    return finalAns;
}

int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> result = subsets(nums);
    for(vector<int> v : result){
        for(int x : v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}