/*
# LeetCode-74 :- Search in 2D Matrix
    You are given an m x n integer matrix matrix with the following two properties:
    Each row is sorted in non-decreasing order.
    The first integer of each row is greater than the last integer of the previous row.
    Given an integer target, return true if target is in matrix or false otherwise.
    You must write a solution in O(log(m * n)) time complexity.

    Example 1:
    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
    Output: true

    Example 2:
    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
    Output: false
    
    Constraints:
    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 100
    -10^4 <= matrix[i][j], target <= 10^4
*/
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &arr , int target){
    int m = arr.size();
    int n = arr[0].size();
    int lo = 0;
    int hi = m*n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int row = mid/n;
        int col = mid%n;
        if(arr[row][col]==target) return true;
        else if(arr[row][col]>target) hi = mid-1;
        else lo = mid+1;
    }
    return false;
}
int main(){
    vector<vector<int>> arr1 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>> arr2 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target1 = 3;
    int target2 = 13;
    if(searchMatrix(arr1,target1)==1) cout<<"True";
    else cout<<"False";
    cout<<endl;
    if(searchMatrix(arr2,target2)==1) cout<<"True";
    else cout<<"False";
    return 0;
}