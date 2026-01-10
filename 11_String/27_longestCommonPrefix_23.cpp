/*
    Write a function to find the longest common prefix string amongst an array of strings.

    If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    /* v.push_back("dog");
    v.push_back("racecar");
    v.push_back("car"); */
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int n = v.size();
    if (n == 1)
        cout << v[0];
    sort(v.begin(), v.end());
    string first = v[0];
    string last = v[n - 1];
    string s = "";
    for (int i = 0; i < (min(first.size(), last.size())); i++)
    {
        if (first[i] == last[i])
        {
            s += first[i];
        }
        else
        {
            break;
        }
    }
    cout << s;
}