/*
#   LeetCode-442 :- Find all Duplicates in an Array
    Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

    You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

    Example 1:
    Input: nums = [4,3,2,7,8,2,3,1]
    Output: [2,3]

    Example 2:
    Input: nums = [1,1,2]
    Output: [1]

    Example 3:
    Input: nums = [1]
    Output: []
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> findDuplicate(vector<int> &v){
    int n = v.size();
    int i = 0;
    while(i<n){
        int correctIdx = v[i]-1;
        if(v[i]!=v[correctIdx]) swap(v[i],v[correctIdx]);
        else i++;
    }
    // after cyclic sort find the duplicate
    vector<int> ans;
    for(int i = 0 ; i<n ; i++){
        if(v[i]!=i+1){
            ans.push_back(v[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> result = findDuplicate(v);
    for(int i = 0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
}