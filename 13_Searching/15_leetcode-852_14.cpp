/*
# LeetCode-852 :- Peak Index in Mountain Array
    You are given an integer mountain array arr of length n where the values
    increase to a peak element and then decrease.
    Return the index of the peak element.
    Your task is to solve it in O(log(n)) time complexity.

    Example 1:
    Input: arr = [0,1,0]
    Output: 1

    Example 2:
    Input: arr = [0,2,1,0]
    Output: 1

    Example 3:
    Input: arr = [0,10,5,2]
    Output: 1

    Constraints:- 1. 3 <= arr.length <= 105
                  2. 0 <= arr[i] <= 106
                  3. arr is guaranteed to be a mountain array
$                       (Method-1 T.C:-{O(n)})
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,1,0};
    // int arr[] = {0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;
    for(int i = 1 ; i<=n-2 ; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            idx = i;
            break;
        }
    }
    cout<<idx;
    return 0;
}