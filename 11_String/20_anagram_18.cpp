/*
* ANAGRAM :- aagar s ka sara letter use kar ka t bana sakta ha(or vice versa) then s and t anagram ha

    Given two string s and t ,return true if t is an anagram 
    of s , and false  otherwise.

    Input :- s = physicswallah , t = wallahphysics
    Output :- YES
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin() , s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
}