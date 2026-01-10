/*
#   LeetCode-1109 :- Corporate Flight Booking
    There are n flights that are labeled from 1 to n.

    You are given an array of flight bookings bookings, where bookings[i] = [firsti, lasti, seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range.

    Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.

    Example 1:
    Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
    Output: [10,55,45,25,25]
    Explanation:
    Flight labels:        1   2   3   4   5
    Booking 1 reserved:  10  10
    Booking 2 reserved:      20  20
    Booking 3 reserved:      25  25  25  25
    Total seats:         10  55  45  25  25
    Hence, answer = [10,55,45,25,25]

    Example 2:
    Input: bookings = [[1,2,10],[2,2,15]], n = 2
    Output: [10,25]
    Explanation:
    Flight labels:        1   2
    Booking 1 reserved:  10  10
    Booking 2 reserved:      15
    Total seats:         10  25
    Hence, answer = [10,25]
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> corpFlightBooking(vector<vector<int>> &booking , int n){
    vector<int> ans(n);
    for(auto &b : booking){
        int first = b[0];
        int last = b[1];
        int seats = b[2];

        ans[first-1] += seats;
        if(last<n) ans[last] -= seats;
    }
    for(int i = 1 ; i<n ; i++){
        ans[i] += ans[i-1];
    }
    return ans;
}

int main(){
    vector<vector<int>> booking = {{1,2,10},{2,3,20},{2,5,25}};
    int n = 5;
    vector<int> result = corpFlightBooking(booking,n);
    for(int i : result){
        cout<<i<<" ";
    }
}