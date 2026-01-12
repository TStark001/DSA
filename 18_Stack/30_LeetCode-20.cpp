/*
#   LeetCode-20 :- Valid Parentheses
    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
    
    Example 1:
    Input: s = "()"
    Output: true

    Example 2:
    Input: s = "()[]{}"
    Output: true

    Example 3:
    Input: s = "(]"
    Output: false

    Example 4:
    Input: s = "([])"
    Output: true

    Example 5:
    Input: s = "([)]"
    Output: false
*/
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    if(s.size()%2 != 0) return false;
    stack<char> st;
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i] == '(' or s[i] =='{' or s[i] == '[') st.push(s[i]);
        else{
            if(st.size() == 0) return false;
            char top = st.top();
            if((s[i] == ')' and top != '(') || 
                (s[i] == '}' and top != '{') ||
                (s[i] == ']' and top != '[')){
                return false;
            }
            st.pop();
        }
    }
    if(st.size() == 0) return true;
    else return false;
}

int main(){
    string s = "([)]";
    if(isValid(s)) cout<<"True";
    else cout<<"False";
}