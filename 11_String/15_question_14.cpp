/*
    Input a string of n length and reverse the first half of the string.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    reverse(s.begin(), s.begin() + len / 2);
    cout << s;
    return 0;
}