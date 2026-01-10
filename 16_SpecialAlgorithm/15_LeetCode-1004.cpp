/*
#   LeetCode-1004 :- Max Consecutive Ones III
    Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

    Example 1:
    Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
    Output: 6
    Explanation: [1,1,1,0,0,1,1,1,1,1,1]
    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

    Example 2:
    Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
    Output: 10
    Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int longestOnes(vector<int> &nums , int k){
    int n = nums.size();
    int flips = 0 , i = 0 , j = 0;
    int maxLen = INT_MIN , len = INT_MIN;
    while(j<n){
        if(nums[j] == 1) j++;
        else{ // nums[j] == 0
            if(flips<k){
                flips++;
                j++;
            }
            else{ 
                // flip == k
                // calculate len
                len = j-i;
                maxLen = max(maxLen,len);
                // i ko just uske aage wale 0 se ek idx aaage le jaao
                while(nums[i]==1) i++;
                i++;
                j++;
            }
        }
    }
    len = j-i;
    maxLen = max(maxLen,len);
    return maxLen;
}

int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,1,0};
    int k = 2;
    cout<<longestOnes(nums , k);
}