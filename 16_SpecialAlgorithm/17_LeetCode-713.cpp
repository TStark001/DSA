/*
#   LeetCode-713 :- Subarray Product less than K
    Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

    Example 1:
    Input: nums = [10,5,2,6], k = 100
    Output: 8
    Explanation: The 8 subarrays that have product less than 100 are:
    [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
    Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

    Example 2:
    Input: nums = [1,2,3], k = 0
    Output: 0
*/
#include<iostream>
#include<vector>
using namespace std;

int numSubarrayProductLessthanK(vector<int> &nums,int k){
    if(k<=1) return 0;
    int n = nums.size();
    int i = 0;
    int j = 0;
    int count = 0;
    int product = 1;
    while(j<n){
        product *=nums[j];
        while(product>=k){
            count+=(j-i);
            product /= nums[i];
            i++;
        }
        j++;
    }
    while(i<n){
        count+=(j-i);
        product /= nums[i];
        i++;
    }
    return count;
}

int main(){
    vector<int> nums = {10,5,2,6};
    int k = 100;
    cout<<numSubarrayProductLessthanK(nums,k);
}