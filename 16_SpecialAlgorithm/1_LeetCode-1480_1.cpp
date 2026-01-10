/*
#   LeetCode-1480 :- Running Sum of 1D Array or Prefix Sum
    Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
    Return the running sum of nums.

    Example 1:
    Input: nums = [1,2,3,4]
    Output: [1,3,6,10]
    Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

    Example 2:
    Input: nums = [1,1,1,1,1]
    Output: [1,2,3,4,5]
    Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

    Example 3:
    Input: nums = [3,1,2,10,1]
    Output: [3,4,6,16,17]
!                               (METHOD-1)
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int> &nums){
    int n = nums.size();
    vector<int> run(n);
    run[0] = nums[0];
    for(int i = 1 ; i<n ; i++){
        run[i] = nums[i] + run[i-1];
    }
    return run;
    // TC = O(n)   ;    SC = O(n)
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> result = runningSum(nums);
    for(int x : result){
        cout<<x<<" ";
    }
}