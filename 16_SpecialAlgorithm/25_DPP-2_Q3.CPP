/*
#   LeetCode-1248 :- Count Number of Nice SubArrays
    Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

    Return the number of nice sub-arrays.

    Example 1:
    Input: nums = [1,1,2,1,1], k = 3
    Output: 2
    Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].

    Example 2:
    Input: nums = [2,4,6], k = 1
    Output: 0
    Explanation: There are no odd numbers in the array.

    Example 3:
    Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
    Output: 16
*/
#include<iostream>
#include<vector>
using namespace std;

int numberofSubArray(vector<int> &nums , int k){
    int n = nums.size();
    int i = 0 , j = 0;
    int count = 0;
    int ans = 0 , odd = 0;
    while(j<n){
        if(nums[j]%2!=0){
            count = 0;
            odd++;
        }
        while(i<=j && odd == k){
            count++;
            if(nums[i]%2!=0){
                odd--;  
            } 
            i++;
        }
        ans+=count;
        j++;
    }
    return ans;
}

int main(){
    vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    cout<<numberofSubArray(nums,k);
}