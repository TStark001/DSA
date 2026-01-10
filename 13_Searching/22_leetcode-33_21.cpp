/*
# LeetCode-33 :- Search in Roatated Sorted Array
    There is an integer array nums sorted in ascending order (with distinct values).
    Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

    Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
    You must write an algorithm with O(log n) runtime complexity.

    Example 1:
    Input: nums = [4,5,6,7,0,1,2], target = 0
    Output: 4

    Example 2:
    Input: nums = [4,5,6,7,0,1,2], target = 3
    Output: -1

    Example 3:
    Input: nums = [1], target = 0
    Output: -1

*    Constraints:- 1.1 <= nums.length <= 5000
*                  2.-10^4 <= nums[i] <= 10^4
*                  3.All values of nums are unique.
*                  4.nums is an ascending array that is possibly rotated.
*                  5.-10^4 <= target <= 10^4
*/
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr , int target){
    int n = arr.size();
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<=arr[hi]){ // is the mid-hi sorted
            if(target>=arr[mid] && target<=arr[hi]) lo = mid + 1;
            else hi = mid - 1; 
        }
        else{ // arr[lo] <= arr[mid] -> lo-mid is sorted    
            if(target>=arr[mid] && target<=arr[hi]) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2,};
    int target = 0;
    cout << "Target Index = " << search(nums, target);
    return 0;
}