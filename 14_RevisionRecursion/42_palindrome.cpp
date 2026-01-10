/*
#   Palindrome using recursion
    Find out whether a given string is palindrome or not using recursion
*/
#include<iostream>
using namespace std;

bool isPalindrome(string s , int i , int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPalindrome(s,i+1,j-1);
}

int main(){
    string s = "dad";
    if(isPalindrome(s,0,s.length()-1)==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}