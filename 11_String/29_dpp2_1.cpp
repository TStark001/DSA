/*
    Input a string and concatenate with its reverse string and print it.

    Input :- str = "PWSkills"
    Output :- str = "PWskillssllikSWP"
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //* METHOD-1
    string str = "PWSkills";
    string temp = "";
    for (int i = str.size(); i >= 0; i--)
    {
        temp += str[i];
    }
    cout << str + temp << endl;

    //* METHOD-2
    string s = "stark";
    string temp1 = s;
    reverse(temp1.begin(), temp1.end());
    cout << s + temp1;
}