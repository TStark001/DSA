/*
#   LeetCode-645 :- Set Mismatch
    You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
    You are given an integer array nums representing the data status of this set after the error.
    Find the number that occurs twice and the number that is missing and return them in the form of an array.

    Example 1:
    Input: nums = [1,2,2,4]
    Output: [2,3]

    Example 2:
    Input: nums = [1,1]
    Output: [1,2]
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int> &nums){
    int i = 0 , n = nums.size();
    while(i<n){
        int correctIdx = nums[i]-1;
        if(nums[i] != nums[correctIdx]) swap(nums[i],nums[correctIdx]);
        else i++;
    }

    // after cyclic sort find misMatch
    for(int i = 0 ; i<n ; i++){
        if(nums[i]!=i+1){
            return {nums[i],i+1};
        }
    }
    return {};
}

int main(){
    /* int arr[] = {1,2,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); */
    vector<int> v = {1,2,2,4};
    vector<int> ans = findErrorNums(v);
    /* for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    } */
   for(int x : ans){
        cout<<x<<" ";
   }
}