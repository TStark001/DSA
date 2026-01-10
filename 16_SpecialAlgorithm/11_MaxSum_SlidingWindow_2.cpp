/*
    Maximum Sum Subarray of size K
!           Using Sliding Window
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int prevSum = 0;
    for(int i = 0 ; i<k ; i++){
        prevSum+=arr[i];
    }
    maxSum = prevSum;
    // Sliding Window
    int i = 1 , j = k;
    while(j<n){
        prevSum = prevSum+arr[j]-arr[i-1];
        if(maxSum<prevSum){
            maxSum = prevSum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout << maxSum << endl;
    cout << maxIdx;
}
