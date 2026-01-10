/*
    Input a string of length greater than five and reverse the
    substring from postion 2 to 5 using inbuilt function.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s.substr(2) << endl;
    reverse(s.begin() + 2, s.begin() + 6);
    cout << s << endl;
    int n = s.size();
    cout<<s.substr(n/2);
    return 0;
}