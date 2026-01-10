/*
#   LeetCode-22 :- Generate Parentheses
    Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

    Example 1:
    Input: n = 3
    Output: ["((()))","(()())","(())()","()(())","()()()"]

    Example 2:
    Input: n = 1
    Output: ["()"]

    Constraints:
    1 <= n <= 8
*/
//!                   (METHOD-1)
#include<iostream>
using namespace std;

void generate(string s , int open , int close , int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s+'(',open+1,close,n);
    if(close<open) generate(s+')',open,close+1,n);
}

int main(){
    int n = 3;
    generate("",0,0,n);
}