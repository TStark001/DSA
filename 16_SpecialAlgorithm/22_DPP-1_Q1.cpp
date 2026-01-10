/*
#   LeetCode-303 :- Range sum Query - Immutable
    Given an integer array nums, handle multiple queries of the following type:

    Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
    Implement the NumArray class:

    NumArray(int[] nums) Initializes the object with the integer array nums.
    int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
    
    Example 1:
    Input
    ["NumArray", "sumRange", "sumRange", "sumRange"]
    [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
    Output
    [null, 1, -1, -3]
    Explanation
    NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
    numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
    numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
    numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/
#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        prefix = vector<int>(nums.size());
        prefix[0] = nums[0];
        for(int i = 1 ; i<nums.size() ; i++){
            prefix[i] = nums[i] + prefix[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return prefix[right];
        }
        else{
            return prefix[right] - prefix[left-1];
        }
    }
};

int main() {
    // Example usage:
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);

    cout << obj.sumRange(1, 3) << endl; // Output: 2 + 3 + 4 = 9
    cout << obj.sumRange(0, 4) << endl; // Output: 1 + 2 + 3 + 4 + 5 = 15

    return 0;
}