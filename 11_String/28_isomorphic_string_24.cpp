/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:
Input: s = "egg", t = "add"
Output: true
Explanation:
The strings s and t can be made identical by:
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.

Example 2:
Input: s = "foo", t = "bar"
Output: false
Explanation:
The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

Example 3:
Input: s = "paper", t = "title"
Output: true
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    vector<int> v(150, 1000);
    for (int i = 0; i < s.size(); i++)
    {
        int idx = (int)s[i];
        if (v[idx] == 1000)
            v[idx] = s[i] - t[i];
        else if (v[idx] != (s[i] - t[i]))
            return false;
    }

    for (int i = 0; i < 150; i++)
    {
        v[i] = 1000;
    }
    for (int i = 0; i < t.size(); i++)
    {
        int idx = (int)t[i];
        if (v[idx] == 1000)
            v[idx] = t[i] - s[i];
        else if (v[idx] != (t[i] - s[i]))
            return false;
    }
    return true;
}

int main()
{
    string s = "badc";
    string t = "baba";
    string a = "egg";
    string b = "add";
    cout << isomorphic(s, t) << endl;
    cout << isomorphic(a, b) << endl;
}