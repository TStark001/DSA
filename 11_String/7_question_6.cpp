/*
!                   DEFANGING AN IP ADDRESS
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".
Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/
#include<iostream>
using namespace std;

int main(){
    string address = "1.1.1.1";
    string ans;
    int idx = 0;
    while(idx < address.size()){
        if(address[idx] == '.'){
            ans = ans + "[.]";
        }
        else{
            ans = ans + address[idx];
        }
        idx++;
    }
    cout<<ans;
}