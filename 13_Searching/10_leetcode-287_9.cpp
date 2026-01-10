/*
# LeetCode-287 :- Find the Duplicate Number
    Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
    There is only one repeated number in nums, return this repeated number.
    You must solve the problem without modifying the array nums and using only constant extra space.

    Example 1:
    Input: nums = [1,3,4,2,2]
    Output: 2

    Example 2:
    Input: nums = [3,1,3,4,2]
    Output: 3

    Example 3:
    Input: nums = [3,3,3,3,3]
    Output: 3
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid+1){
            lo = mid + 1;
        }
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }
            else{
                hi = mid - 1;
            }
        }
    }
    return 0;
}