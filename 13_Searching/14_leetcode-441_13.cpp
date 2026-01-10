/*
# LeetCode-441 :- Arranging Coins
    You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
    Given the integer n, return the number of complete rows of the staircase you will build.

    Example 1:
    Input: n = 5
    Output: 2
    Explanation: Because the 3rd row is incomplete, we return 2.

    Example 2:
    Input: n = 8
    Output: 3
    Explanation: Because the 4th row is incomplete, we return 3.
    
    Constraints: 1 <= n <= 231 - 1    
*/
#include<iostream>
using namespace std;

int arrangeCoins(int n){
    long long lo = 1;
    long long hi = n;
    while(lo<=hi){
        long long k = lo + (hi-lo)/2;
        long long m = k*(k+1)/2;
        if(m==n){
            return (int)k;
        }
        else if(m>n){
            hi = k-1;
        }
        else{
            lo = k+1;
        }
    }
    return (int)hi;
}

int main(){
    int n;
    cout<<"Enter N :- ";
    cin>>n;
    cout<<arrangeCoins(n);
    return 0;
}