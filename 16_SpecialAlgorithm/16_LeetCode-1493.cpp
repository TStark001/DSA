/*
#   LeetCode-1493 :- Longest subarray of 1's after deleting one element.
    Given a binary array nums, you should delete one element from it.

    Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

    Example 1:
    Input: nums = [1,1,0,1]
    Output: 3
    Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

    Example 2:
    Input: nums = [0,1,1,1,0,1,1,0,1]
    Output: 5
    Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
    
    Example 3:
    Input: nums = [1,1,1]
    Output: 2
    Explanation: You must delete one element.
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int longestSubarray(vector<int> &nums){
    int n = nums.size();
    int k = 1;
    int flips = 0 , i = 0 , j = 0 ;
    int maxLen = INT_MIN , len = INT_MIN;
    while(j<n){
        if(nums[j] == 1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                len = j-i;
                maxLen = max(maxLen,len);
                while(nums[i] == 1) i++;
                i++;
                j++;
            }
        }
    }
    len = j-i;
    maxLen = max(maxLen , len);
    return maxLen -1;
}

int main(){
    vector<int> nums = {1,1,0,1};
    cout<<longestSubarray(nums);
}