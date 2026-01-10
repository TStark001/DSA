/*
^                               CHECK IF THE SENTENCE IS PANGRAM
!       A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:
Input: sentence = "leetcode"
Output: false
*/
#include<iostream>
#include<vector>
using namespace std;

bool checkifpangram(string s){
    vector<bool> alpha(26,0);
    for(int i = 0 ; i<s.size() ; i++){
        alpha[s[i] - 'a'] = 1;
    }

    for(int i = 0 ; i<26 ; i++){
        if(alpha[i] == 0){
        return 0;
        }
    }
    return 1;
}

int main(){
    string s1 = "thequickbrownfoxjumpsoverthelazydog";
    string s2 = "leetcode";
    cout<<checkifpangram(s1);
    
}